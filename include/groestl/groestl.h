#ifndef GROESTL_H
#define GROESTL_H

#ifdef __cplusplus
extern "C" {
#endif



#ifdef __WEBASSEMBLY__
#   pragma message "Building for webassembly arch....."
#   include "webassembly.h"
#else
#   include <string.h>
#endif /// __WEBASSEMBLY__

#ifdef __EMSCRIPTEN__
#   pragma message "Building using emscripten SDK....."
#   include "emscripten.h"
#else
#   define EMSCRIPTEN_KEEPALIVE
#endif






/**
 *
 * @param input  input message
 * @param len input length in bytes
 * @param output 256-bit capacity output buffer
 */
void extern __attribute__((visibility ("default"))) __attribute__ ((used)) EMSCRIPTEN_KEEPALIVE
groestl(const uint8_t  *input, size_t len, uint8_t *output);

#ifdef __cplusplus
}
#endif

#endif
