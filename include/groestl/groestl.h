#ifndef GROESTL_H
#define GROESTL_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 *
 * @param input  input message
 * @param len input length in bytes
 * @param output 256-bit capacity output buffer
 */
extern __attribute__ ((visibility ("default"))) void groestl(const unsigned char *input,
    unsigned int len,
    unsigned char *output);

#ifdef __cplusplus
}
#endif

#endif
