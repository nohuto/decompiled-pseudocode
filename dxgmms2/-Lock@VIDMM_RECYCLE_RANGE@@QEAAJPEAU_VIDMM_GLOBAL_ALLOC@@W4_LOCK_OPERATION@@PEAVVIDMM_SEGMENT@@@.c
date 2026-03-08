/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0096430
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0097830 (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C0097D10 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C0099CA0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C009AAD0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // r8
  __int64 v8; // rcx
  enum _LOCK_OPERATION v9; // r8d
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+40h] [rbp-10h]

  v4 = *((int *)this + 16);
  v8 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v8 )
  {
    v14 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( (_DWORD)v14 )
    {
      if ( (_DWORD)v14 != 1 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 52LL, 2LL, v4, 0LL);
        return 3221225473LL;
      }
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v14, this);
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition(this, 2LL);
    }
    else
    {
      ++*((_DWORD *)this + 23);
    }
    return 0LL;
  }
  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v17 = 1;
    v15 = 8000;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerEnter, v4, 8000);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  v10 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
          (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
          a2,
          v9,
          a4,
          *((void **)this + 4),
          *((void **)this + 5));
  if ( v10 < 0 )
  {
    WdLogSingleEntry3(3LL, this, a2, **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 9) + 32LL) + 8LL) + 8LL));
  }
  else
  {
    ++*((_DWORD *)this + 23);
    VIDMM_RECYCLE_RANGE::Transition(this, 2LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v15);
  }
  return (unsigned int)v10;
}
