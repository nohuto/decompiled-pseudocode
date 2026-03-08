/*
 * XREFs of MiTerminateHardwareEnclave @ 0x140AAA598
 * Callers:
 *     MiTerminateEnclave @ 0x140A3BC78 (MiTerminateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140AAA2F8 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 */

char __fastcall MiTerminateHardwareEnclave(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  ULONG_PTR PteAddress; // rax
  __int64 v5; // rdx
  ULONG_PTR v6; // r9
  __int64 v7; // r10
  char result; // al

  MiGetPteAddress(((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF);
  PteAddress = MiGetPteAddress((*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) << 12);
  result = MiDecommitHardwareEnclavePages(v7, v5, PteAddress, v6, 1);
  *(_DWORD *)(a2 + 64) |= 8u;
  return result;
}
