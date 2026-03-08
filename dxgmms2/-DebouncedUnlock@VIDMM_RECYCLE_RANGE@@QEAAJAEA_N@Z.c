/*
 * XREFs of ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C0098D20
 * Callers:
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0099800 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A9EA8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F6B9C (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0096940 (-CombineFreedScanFromRange@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00973C8 (-AddToDecommitDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0098EB0 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0099390 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B3330 (-CleanupFreeBlock@VIDMM_RECYCLE_BLOCK@@QEAA_NPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::DebouncedUnlock(VIDMM_RECYCLE_RANGE *this, bool *a2)
{
  __int64 v2; // r8
  int v4; // ecx
  __int64 v6; // rcx
  int v7; // esi
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  char v18; // [rsp+40h] [rbp-10h]

  v2 = *((int *)this + 16);
  v4 = *((_DWORD *)this + 16);
  *a2 = 0;
  v6 = (unsigned int)(v4 - 3);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 1 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 52LL, 6LL, v2, 0LL);
      return 0LL;
    }
    v16 = -1;
    v17 = 0LL;
    if ( (qword_1C0076010 & 2) != 0 )
    {
      v18 = 1;
      v16 = 8001;
      if ( byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v2, 8001);
    }
    else
    {
      v18 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v7 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)this + 9);
      v9 = **(_DWORD **)(v8 + 32);
      if ( (unsigned int)(v9 - 3) <= 3 || (unsigned int)(v9 - 9) <= 1 )
      {
        VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(*(VIDMM_RECYCLE_HEAP **)(v8 + 32), this);
        VIDMM_RECYCLE_RANGE::Transition(this, 0LL);
        VIDMM_RECYCLE_BLOCK::CombineFreedScanFromRange(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        *a2 = VIDMM_RECYCLE_BLOCK::CleanupFreeBlock(*((VIDMM_RECYCLE_BLOCK **)this + 9), this);
        goto LABEL_8;
      }
      VIDMM_RECYCLE_HEAP_MGR::AddToDecommitDebounce(*(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(v8 + 32) + 8LL), this);
      VIDMM_RECYCLE_HEAP::ShiftTreeMembershipOnDebouncedStateChange(
        *(VIDMM_RECYCLE_HEAP **)(*((_QWORD *)this + 9) + 32LL),
        this);
      v13 = 5LL;
LABEL_14:
      VIDMM_RECYCLE_RANGE::Transition(this, v13);
LABEL_8:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
      if ( v18 )
      {
        if ( byte_1C00769C1 < 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v16);
      }
      return 0LL;
    }
  }
  else
  {
    v16 = -1;
    v17 = 0LL;
    if ( (qword_1C0076010 & 2) != 0 )
    {
      v18 = 1;
      v16 = 8001;
      if ( byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerEnter, v2, 8001);
    }
    else
    {
      v18 = 0;
    }
    DXGETWPROFILER_BASE::PushProfilerEntry();
    v7 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockRange(
           (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
           *((_QWORD *)this + 4),
           *((_QWORD *)this + 5));
    if ( v7 >= 0 )
    {
      v13 = 1LL;
      goto LABEL_14;
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
  if ( v18 )
  {
    LOBYTE(v14) = byte_1C00769C1;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v16);
  }
  return (unsigned int)v7;
}
