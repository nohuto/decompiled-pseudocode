/*
 * XREFs of ??_GVIDMM_DEVICE@@QEAAPEAXI@Z @ 0x1C0011F9C
 * Callers:
 *     VidMmTerminateDevice @ 0x1C0011CC0 (VidMmTerminateDevice.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00A62CC (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F20F8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??1VIDMM_DEVICE@@QEAA@XZ @ 0x1C00A9A98 (--1VIDMM_DEVICE@@QEAA@XZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::`scalar deleting destructor'(VIDMM_DEVICE *P)
{
  VIDMM_DEVICE::~VIDMM_DEVICE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
