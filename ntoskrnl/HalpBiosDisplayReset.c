/*
 * XREFs of HalpBiosDisplayReset @ 0x1404FCF30
 * Callers:
 *     <none>
 * Callees:
 *     x86BiosCall @ 0x1403B8400 (x86BiosCall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

bool HalpBiosDisplayReset()
{
  return x86BiosCall();
}
