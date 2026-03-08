/*
 * XREFs of VslCloseSecureHandle @ 0x14054B4D0
 * Callers:
 *     PsDereferenceVsmEnclave @ 0x1408A1324 (PsDereferenceVsmEnclave.c)
 *     VslCreateEnclave @ 0x14093EA80 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslCloseSecureHandle(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 30, 0, (__int64)v3);
}
