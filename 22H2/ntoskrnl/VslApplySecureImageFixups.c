/*
 * XREFs of VslApplySecureImageFixups @ 0x1404FBD28
 * Callers:
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

NTSTATUS __fastcall VslApplySecureImageFixups(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  memset(v7, 0, 0x68uLL);
  v7[1] = a1;
  v7[2] = v3;
  v7[3] = a3;
  return VslpEnterIumSecureMode(2u, 43, 0, (__int64)v7);
}
