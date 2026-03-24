/*
 * XREFs of ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B93F4
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0069DC0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C0087258 (--1VIDMM_RECYCLE_BLOCK@@QEAA@XZ.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C0088A14 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0088D7C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B2F68 (-UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     UnmapChildMmioSpace @ 0x1C0022BEC (UnmapChildMmioSpace.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00B8B20 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00BBB9C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

void __fastcall VIDMM_PROCESS::UnmapHostAddressesFromGuest(VIDMM_PROCESS *this, void *a2, __int64 a3)
{
  __int64 v3; // r10
  char v5; // al
  __int64 v6; // rbx
  __int64 v7; // rax
  VIDMM_PROCESS *v8; // rcx
  CVirtualAddressAllocator *CpuVisibleBufferAllocator; // rsi
  char v10; // cl
  __int64 v11; // rax

  v3 = *((_QWORD *)this + 4);
  v5 = *(_BYTE *)(v3 + 347);
  if ( (v5 & 0x20) != 0 )
    v6 = *(_QWORD *)(v3 + 496);
  else
    v6 = v3 & -(__int64)((v5 & 0x10) != 0);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 64);
    v8 = v7 ? *(VIDMM_PROCESS **)(v7 + 8) : 0LL;
    CpuVisibleBufferAllocator = VIDMM_PROCESS::GetCpuVisibleBufferAllocator(v8);
    if ( CpuVisibleBufferAllocator )
    {
      UnmapChildMmioSpace();
      v10 = *(_BYTE *)(v6 + 347);
      if ( (v10 & 0x20) != 0 )
        v11 = *(_QWORD *)(v6 + 496);
      else
        v11 = v6 & -(__int64)((v10 & 0x10) != 0);
      CVirtualAddressAllocator::FreeVirtualAddressRange(
        CpuVisibleBufferAllocator,
        a3 - *(_QWORD *)(*(_QWORD *)(v11 + 496) + 216LL));
    }
  }
}
