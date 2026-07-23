/*
 * XREFs of VslStartSecurePageIteration @ 0x1404FD94C
 * Callers:
 *     HvlpStartSecurePageListIteration @ 0x1404FB7F4 (HvlpStartSecurePageListIteration.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslStartSecurePageIteration(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  _QWORD v10[14]; // [rsp+20h] [rbp-88h] BYREF

  v6 = a1;
  v7 = a4;
  memset(v10, 0, 0x68uLL);
  v10[5] = a5;
  v10[1] = v6;
  v10[2] = a2;
  v10[3] = a3;
  v10[4] = v7;
  return VslpEnterIumSecureMode(2u, 2048, 0, (__int64)v10);
}
