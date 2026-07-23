/*
 * XREFs of PsRequestDebugSecureProcess @ 0x14090CC18
 * Callers:
 *     NtDebugActiveProcess @ 0x140885EE0 (NtDebugActiveProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall PsRequestDebugSecureProcess(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  _QWORD v5[14]; // [rsp+20h] [rbp-88h] BYREF

  v2 = a2;
  memset(v5, 0, 0x68uLL);
  v5[1] = *(_QWORD *)(a1 + 992);
  v5[2] = v2;
  return VslpEnterIumSecureMode(2u, 12, 0, (__int64)v5);
}
