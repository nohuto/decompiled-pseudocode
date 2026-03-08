/*
 * XREFs of VslGetSecureTebAddress @ 0x14093F5CC
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall VslGetSecureTebAddress(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(unsigned int *)(a1 + 796);
  v5[2] = a1;
  result = VslpEnterIumSecureMode(2u, 13, 0, (__int64)v5);
  if ( (int)result >= 0 )
    *a2 = v5[2];
  return result;
}
