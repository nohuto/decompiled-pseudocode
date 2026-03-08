/*
 * XREFs of RtlGetSystemBootStatus @ 0x14085FAD0
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14073AEEC (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __fastcall RtlGetSystemBootStatus(int a1, __int64 a2, int a3, void *a4)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v5[0] = a1;
  v5[1] = 0;
  v6 = a2;
  v7 = a3;
  return RtlpSystemBootStatusRequest(31, (__int64)v5, 1u, a4);
}
