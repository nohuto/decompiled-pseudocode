/*
 * XREFs of HalpBiosDisplayReset @ 0x1404FF010
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x1403BDD30 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
