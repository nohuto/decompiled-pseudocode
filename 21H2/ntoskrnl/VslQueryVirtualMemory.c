/*
 * XREFs of VslQueryVirtualMemory @ 0x1404FD140
 * Callers:
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslQueryVirtualMemory(__int64 a1, __int64 a2, _OWORD *a3)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v9[7]; // [rsp+20h] [rbp-98h] BYREF

  memset(v9, 0, 0x68uLL);
  *((_QWORD *)&v9[0] + 1) = *(_QWORD *)(a1 + 992);
  *(_QWORD *)&v9[1] = a2;
  result = VslpEnterIumSecureMode(2u, 40, 0, (__int64)v9);
  if ( result >= 0 )
  {
    v7 = v9[2];
    *a3 = v9[1];
    v8 = v9[3];
    a3[1] = v7;
    a3[2] = v8;
  }
  return result;
}
