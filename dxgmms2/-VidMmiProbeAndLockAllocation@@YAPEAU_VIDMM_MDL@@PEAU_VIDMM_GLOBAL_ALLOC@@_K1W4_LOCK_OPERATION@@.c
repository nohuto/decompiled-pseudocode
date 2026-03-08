/*
 * XREFs of ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0095330
 * Callers:
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087210 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0087F7C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C0088014 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092410 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00E1FE4 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C01052B0 (-ProbeAndLockAllocation@VIDMM_PROCESS_HEAP@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001A30 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002198 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002360 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00199C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z @ 0x1C0095578 (-VidMmiAllocateMdl@@YAPEAU_MDL@@PEAX_K@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C00955FC (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0095780 (-TrackAndValidatePagesOnLock@VIDMM_SEGMENT@@QEAAEPEAU_VIDMM_MDL@@_KPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0095818 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 */

struct _VIDMM_MDL *__fastcall VidMmiProbeAndLockAllocation(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        LOCK_OPERATION a4,
        struct VIDMM_SEGMENT *a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  struct _VIDMM_LOCAL_ALLOC *v8; // rsi
  char v9; // r12
  char v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _MDL *Mdl; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  __int64 v22; // rcx
  PVOID *v23; // r14
  void *v24[3]; // [rsp+58h] [rbp-60h] BYREF
  _QWORD *v25; // [rsp+70h] [rbp-48h]
  int v26; // [rsp+78h] [rbp-40h] BYREF
  __int64 v27; // [rsp+80h] [rbp-38h]
  char v28; // [rsp+88h] [rbp-30h]

  v8 = a6;
  if ( !a6 )
    v8 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a1 + 11);
  v24[1] = v8;
  v9 = 0;
  v10 = 0;
  v11 = (_QWORD *)operator new(24LL, 0x35336956u, 256LL);
  v12 = v11;
  v24[2] = v11;
  v25 = v11;
  if ( !v11 )
  {
    _InterlockedIncrement(&dword_1C0076864);
    WdLogSingleEntry1(6LL, 1248LL);
LABEL_14:
    DxgkLogInternalTriageEvent(v22, 262145LL);
    goto LABEL_15;
  }
  v11[1] = 0LL;
  v24[0] = 0LL;
  v13 = VidMmMapViewOfAllocation(v8, a2, a3, v24, 0);
  if ( !v13 )
  {
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventPerformanceWarning, v15, 14);
    _InterlockedIncrement(&dword_1C0076894);
    WdLogSingleEntry1(6LL, 1263LL);
    goto LABEL_14;
  }
  v9 = 1;
  *(_DWORD *)v12 = 0;
  Mdl = VidMmiAllocateMdl(v13, a3);
  v12[1] = Mdl;
  if ( !Mdl )
  {
    _InterlockedIncrement((volatile signed __int32 *)&gVidMmLowResourceAccumulated);
    WdLogSingleEntry1(6LL, 1277LL);
    goto LABEL_14;
  }
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C0076010 & 2) != 0 )
  {
    v28 = 1;
    v26 = 8000;
    if ( byte_1C00769C1 < 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerEnter, v18, 8000);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry();
  MmProbeAndLockPages((PMDL)v12[1], 0, a4);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && byte_1C00769C1 < 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v26);
  v10 = 1;
  if ( !a5 || VIDMM_SEGMENT::TrackAndValidatePagesOnLock(a5, (struct _VIDMM_MDL *)v12, v20, a1) )
  {
    VidMmUnmapViewOfAllocation(v8, v24[0]);
    return (struct _VIDMM_MDL *)v12;
  }
LABEL_15:
  if ( v10 )
  {
    v23 = (PVOID *)(v12 + 1);
    MmUnlockPages((PMDL)v12[1]);
  }
  else
  {
    v23 = (PVOID *)(v25 + 1);
  }
  if ( v12 )
  {
    if ( *v23 )
      ExFreePoolWithTag(*v23, 0);
    operator delete(v12);
  }
  if ( v9 )
    VidMmUnmapViewOfAllocation(v8, v24[0]);
  return 0LL;
}
