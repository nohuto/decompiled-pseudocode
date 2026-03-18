/*
 * XREFs of VslCloseSecureHandle @ 0x14054FF30
 * Callers:
 *     PsDereferenceVsmEnclave @ 0x140882604 (PsDereferenceVsmEnclave.c)
 *     VslCreateEnclave @ 0x1409317A0 (VslCreateEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslCloseSecureHandle(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 30, 0, (__int64)v3);
}
