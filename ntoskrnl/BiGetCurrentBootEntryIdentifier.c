/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x1408305A4
 * Callers:
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  __int64 result; // rax
  _OWORD v3[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v3, 0, sizeof(v3));
  result = ZwQuerySystemInformation(90LL, (__int64)v3);
  if ( (int)result >= 0 )
    *a1 = v3[0];
  return result;
}
