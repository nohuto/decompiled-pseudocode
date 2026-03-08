/*
 * XREFs of MiGetVadPageSize @ 0x14031F9B4
 * Callers:
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     MmFreeVirtualMemory @ 0x1406EC820 (MmFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1407C77B0 (MmProtectVirtualMemory.c)
 *     MmSetGraphicsPtes @ 0x140A2BE10 (MmSetGraphicsPtes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVadPageSize(__int64 a1)
{
  return MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 19) & 3];
}
