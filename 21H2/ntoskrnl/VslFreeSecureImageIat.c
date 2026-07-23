/*
 * XREFs of VslFreeSecureImageIat @ 0x1404FE768
 * Callers:
 *     MiFreeRetpolineImportInfo @ 0x1407CE0C4 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslFreeSecureImageIat(__int64 a1)
{
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = a1;
  return VslpEnterIumSecureMode(2u, 42, 0, (__int64)v3);
}
