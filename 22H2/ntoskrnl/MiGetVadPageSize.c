/*
 * XREFs of MiGetVadPageSize @ 0x140275554
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1406F72D0 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1406F8400 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406F9820 (MmProtectVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x14071A124 (MiCheckSecuredVad.c)
 *     MmFreeVirtualMemory @ 0x1407455D0 (MmFreeVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x140A2EB60 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
