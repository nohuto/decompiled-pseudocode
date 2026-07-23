/*
 * XREFs of VslpLiveDumpStart @ 0x1404FDEE0
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x1404FD758 (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslpLiveDumpStart(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = a1;
  memset(v7, 0, 0x68uLL);
  v7[1] = v5;
  v7[2] = v3;
  v7[3] = v4;
  return VslpEnterIumSecureMode(2u, 54, 0, (__int64)v7);
}
