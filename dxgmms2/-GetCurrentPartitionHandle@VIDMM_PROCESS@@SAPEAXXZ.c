/*
 * XREFs of ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C00AADC0
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00A8414 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00A970C (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C00AA8C4 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002338 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 VIDMM_PROCESS::GetCurrentPartitionHandle(void)
{
  __int64 v0; // rax

  if ( !DXGPROCESS::GetCurrent() )
    return -1LL;
  v0 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v0 )
    v0 = *(_QWORD *)(v0 + 8);
  if ( v0 )
    return *(_QWORD *)(v0 + 296);
  else
    return -1LL;
}
