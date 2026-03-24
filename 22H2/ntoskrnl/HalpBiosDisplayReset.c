/*
 * XREFs of HalpBiosDisplayReset @ 0x1404B6C70
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x140395C90 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
