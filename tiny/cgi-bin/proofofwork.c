//not working

#include "csapp.h"

struct PoW{

    unsigned char *hash;
    int64_t nonce;
    int32_t zerosin;
    time_t gerado_time;
} PoW;

struct PoW * work(char data[], size_t data_tam, int32_t zerosin) {
    char buffer[
        data_tam
        + sizeof(gerado_time)
        + sizeof(int64_t)
    ];

uint64_t

random_uint64(){
    uint64 random = rand(), tam = UINT64, tam_max = (uint64_t)RAND_MAX + 1;
    while(tam>tam_max){
        random = random * tam_max +  (uint64_t) rand();
        tam = (tam - 1) / tam_max + 1;
    }
    return random;
}

int64_t
randomint64(){
    return random_uint64() + INT64_MIN;
}

char *
calc_sha256(char data[], size_t data_tam){
    char *hash = malloc(sizeof(char) * 32);
    SHA256_CTX ctx;
    sha256_init(&ctx);
    sha256_update(&ctx,data,data_tam);
    sha256_final(&ctx, hash);
    return hash;
}

int verifica(struct Pow * p,char data[], size_t data_tam){
    char buffer [ data_tam + sizeof(time_t) + sizeof(int64_t)];

    memcpy(buffer, data, data_tam);

    time_t t = p->gerado_time;
    memcpy(&buffer[data_tam],&t, sizeof(t));

    int64_t nonce = p->nonce;
    memcpy(&buffer[data_tam +sizeof(t)], &nonce, sizeof(nonce));

    char* hash = compute_sha256(buffer, sizeof(buffer)/sizeof(BYTE));
    return memcmp(hash, p->hash, data_len);
 

}

    memcpy(&buffer, data, data_tam);
        
    time_t t = time(NULL);
    memcpy(&buffer[data_tam], &t, sizeof(t));
    
    while(1) {
        int64_t nonce = random_int64();
        memcpy(&buffer[data_tam + sizeof(t)], &nonce, sizeof(nonce));
        
        char* hash = compute_sha256(buffer, sizeof(buffer) / sizeof(BYTE));
        int other_than_zero = 1;
        for (int i = zerosin; i > 0 && other_than_zero; i--) {
            other_than_zero = 0x00 == hash[i];
        }

        if (other_than_zero)
        {
            struct Proof*ret = malloc(sizeof(Proof));
            ret->nonce = nonce;
            ret->gerado_time = t;
            ret->zerosin = zerosin;
            ret->hash = hash;
            return ret;
        }
    }
}

int main(void) {
    char str[] = "abc";
    char str2[] = "cba";
    struct PoW = work(str,sizeof(str)/sizeof(BYTE),1);
    int ret = verify(p,str,sizeof(str)/sizeof(BYTE));
    char *buf, *p;
    char arg1[MAXLINE], arg2[MAXLINE], content[MAXLINE];
    int n1=0, n2=0;

    if ((buf = getenv("QUERY_STRING")) != NULL) {
	p = strchr(buf, '&');
	*p = '\0';        
	strcpy(arg1, buf);
	strcpy(arg2, p+1);
	n1 = atoi(arg1);
	n2 = atoi(arg2);
    }

    if(ret == 0)
        printf("Provado\n");
    else
        printf("nao foi provado\n");

    printf("%s", content);
    fflush(stdout);
    exit(0);
    return 0;
}
