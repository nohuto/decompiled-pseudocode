/*
 * XREFs of ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C00EA1F0
 * Callers:
 *     ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C00E3324 (-FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z.c)
 *     ?InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM_MULTI_ALLOC@@_K3@Z @ 0x1C00E3F54 (-InvalidateCache@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_VIDMM.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall VidMmFlushCpuCacheWorker(__int64 BaseAddress, unsigned __int64 Length, struct _MDL *a3)
{
  char *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  ULONG v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+58h] [rbp-30h]
  char v14; // [rsp+60h] [rbp-28h]

  v4 = (char *)BaseAddress;
  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v14 = 1;
    v12 = 8008;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(BaseAddress, &EventProfilerEnter, (__int64)a3, 8008);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  if ( v4 )
  {
    if ( Length < 0x80000000 )
    {
      while ( Length )
      {
        v9 = -1;
        if ( Length < 0xFFFFFFFF )
          v9 = Length;
        KeInvalidateRangeAllCaches(v4, v9);
        Length -= v9;
        v4 += v9;
      }
    }
    else
    {
      KeInvalidateAllCaches();
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      LOBYTE(v10) = byte_1C00769C1;
      if ( byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v12);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, 19115LL);
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
    if ( v14 )
    {
      if ( byte_1C00769C1 < 0 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v12);
    }
    return 3221225485LL;
  }
}
