/*
 * XREFs of VslGetSecureTebAddress @ 0x14088FB94
 * Callers:
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall VslGetSecureTebAddress(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v5, 0, 0x68uLL);
  v5[1] = *(unsigned int *)(a1 + 796);
  v5[2] = a1;
  result = VslpEnterIumSecureMode(2u, 13, 0, (__int64)v5);
  if ( result >= 0 )
    *a2 = v5[2];
  return result;
}
