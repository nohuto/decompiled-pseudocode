/*
 * XREFs of PsRequestDebugSecureProcess @ 0x14090CAB8
 * Callers:
 *     NtDebugActiveProcess @ 0x140885D80 (NtDebugActiveProcess.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140262C90 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
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
