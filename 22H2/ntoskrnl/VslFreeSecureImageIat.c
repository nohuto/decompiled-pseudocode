/*
 * XREFs of VslFreeSecureImageIat @ 0x1404FE468
 * Callers:
 *     MiFreeRetpolineImportInfo @ 0x1407CDE74 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

NTSTATUS __fastcall VslFreeSecureImageIat(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 42, 0, (__int64)v3);
}
