/*
 * XREFs of ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C00B3284
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 * Callees:
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UnlockAllRanges@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXXZ @ 0x1C0097328 (-UnlockAllRanges@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXXZ.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00973C8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3330 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::FinalizedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2)
{
  __int64 v4; // r8
  int v5; // ecx

  *a2 = 0;
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockAllRanges((VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL));
  v4 = *((_QWORD *)this + 9);
  v5 = **(_DWORD **)(v4 + 32);
  if ( (unsigned int)(v5 - 3) <= 3 || (unsigned int)(v5 - 9) <= 1 )
  {
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(*(VIDMM_RECYCLE_HEAP **)(v4 + 32), this);
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 0);
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
    *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
  }
  else
  {
    VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v4 + 32) + 8LL), this);
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
      this);
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 5);
  }
}
