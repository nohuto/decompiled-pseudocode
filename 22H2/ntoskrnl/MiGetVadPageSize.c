/*
 * XREFs of MiGetVadPageSize @ 0x14055BCF0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405F8650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405FA060 (MmProtectVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     MmFreeVirtualMemory @ 0x14063AD20 (MmFreeVirtualMemory.c)
 *     MiCheckSecuredVad @ 0x1406DB1E8 (MiCheckSecuredVad.c)
 *     MmSetGraphicsPtes @ 0x1408C6F00 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3];
}
