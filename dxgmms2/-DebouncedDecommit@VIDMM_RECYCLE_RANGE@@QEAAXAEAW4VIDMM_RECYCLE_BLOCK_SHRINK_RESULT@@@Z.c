/*
 * XREFs of ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0096A78
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0099800 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qxxx_EtwWriteTransfer @ 0x1C00323F4 (McTemplateK0qxxx_EtwWriteTransfer.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009B76C (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_RECYCLE_RANGE::DebouncedDecommit(
        VIDMM_RECYCLE_BLOCK **this,
        enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *a2)
{
  __int64 v4; // r8
  VIDMM_RECYCLE_BLOCK *v5; // rax
  int v6; // edx
  __int64 v7; // r8
  VIDMM_RECYCLE_BLOCK *v8; // rdx
  __int64 v9; // rcx
  VIDMM_RECYCLE_BLOCK *v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  signed __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
  v4 = *((int *)this + 16);
  if ( (_DWORD)v4 == 5 )
  {
    v5 = this[9];
    v15 = this[5] - this[4];
    v6 = **((_DWORD **)v5 + 4);
    if ( (unsigned int)(v6 - 3) > 3 && (unsigned int)(v6 - 9) > 1 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(__int64, char *, signed __int64 *, __int64))VirtualMemoryInterface + 2))(
        -1LL,
        (char *)this + 32,
        &v15,
        0x4000LL);
    }
    else
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 4LL, v4, 0LL);
    }
    VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
      *((VIDMM_RECYCLE_HEAP **)this[9] + 4),
      (struct VIDMM_RECYCLE_RANGE *)this);
    if ( bTracingEnabled )
    {
      v8 = this[9];
      v9 = *((_QWORD *)v8 + 4);
      v10 = (unsigned int)(*(_DWORD *)v9 - 3) <= 3 ? (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)v8 + 7) : this[4];
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
      if ( (byte_1C00769C1 & 8) != 0 )
        McTemplateK0qxxx_EtwWriteTransfer(
          v11,
          &EventDestroyProcessAllocationDetails,
          v7,
          *(_DWORD *)(v11 + 8),
          (char)this,
          v15,
          (char)v10);
    }
    VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
    v12 = *((_DWORD *)this + 20);
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 || (unsigned int)(v13 - 1) <= 1 )
        *((_DWORD *)this + 20) = 0;
    }
    else if ( dword_1C0076490 && g_IsInternalRelease )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
    }
    VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(this[9], (struct VIDMM_RECYCLE_RANGE *)this);
    *(_DWORD *)a2 = VIDMM_RECYCLE_BLOCK::ShrinkOnTailRangeFree(this[9], this);
  }
  else
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 52LL, 5LL, v4, 0LL);
  }
}
