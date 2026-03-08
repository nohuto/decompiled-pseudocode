/*
 * XREFs of ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3404
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0099FC0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C009ADF0 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009B76C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z @ 0x1C009CCE0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX22PEAEEE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00A9448 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3330 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00F5B60 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z @ 0x1C000201C (-FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z.c)
 *     ?NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z @ 0x1C00020F8 (-NotifyRangeEvent@VIDMM_RECYCLE_BLOCK@@QEAAXW4RangeOp@1@PEAX@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0017510 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage @ 0x1C001A5BC (Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E4FC (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_RANGE *a2,
        __int64 a3)
{
  VIDMM_RECYCLE_BLOCK *v5; // rdi
  int IsEnabledDeviceUsage; // eax
  __int64 v7; // rcx
  bool v8; // zf

  if ( (byte_1C00769C2 & 2) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)this, &EventRecycleRangeDestroy, a3, a2);
  WdLogSingleEntry1(4LL, a2);
  VIDMM_RECYCLE_BLOCK::NotifyRangeEvent(*((_QWORD *)a2 + 9), 1, (__int64)a2);
  v5 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)a2 + 9);
  --*(_QWORD *)v5;
  IsEnabledDeviceUsage = Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage();
  v7 = *(_QWORD *)v5;
  if ( IsEnabledDeviceUsage )
  {
    if ( v7 )
      goto LABEL_9;
    v8 = *((_QWORD *)v5 + 1) == 0LL;
  }
  else
  {
    v8 = v7 == 0;
  }
  if ( v8 )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v5);
LABEL_9:
  *((_BYTE *)a2 + 168) = 1;
  VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
    this,
    *((struct _LOOKASIDE_LIST_EX **)this + 164),
    a2,
    (void **)this + 203,
    (unsigned int *)this + 404);
}
