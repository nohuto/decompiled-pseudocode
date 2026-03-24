/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0115DA0
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1C0145830 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0003148 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007DCC (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00EF744 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0116660 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C01168A0 (DpiGetDxgAdapterSafe.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C015EB24 (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTER *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rcx
  int DxgAdapterSafe; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  volatile signed __int64 *v19; // rdi
  struct DXGADAPTER *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  DXGADAPTER *v24; // r15
  __int64 v25; // rax
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGADAPTER *v31; // rdx
  __int64 v32; // r15
  __int64 v33; // r13
  _QWORD *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // r13
  _QWORD *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rbx
  signed __int64 v42; // rax
  struct DXGADAPTER *v43; // r14
  __int64 v44; // rcx
  __int64 v45; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // r9d
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  struct DXGADAPTER *v60; // [rsp+38h] [rbp-21h] BYREF
  __int64 v61; // [rsp+40h] [rbp-19h] BYREF
  __int64 v62; // [rsp+48h] [rbp-11h]
  char *v63; // [rsp+50h] [rbp-9h]
  int v64; // [rsp+58h] [rbp-1h] BYREF
  __int64 v65; // [rsp+60h] [rbp+7h]
  char v66; // [rsp+68h] [rbp+Fh]
  __int64 v68; // [rsp+C8h] [rbp+6Fh]
  bool v69; // [rsp+C8h] [rbp+6Fh]
  unsigned int v70; // [rsp+D0h] [rbp+77h]
  unsigned int v71; // [rsp+D8h] [rbp+7Fh]

  v3 = a1;
  v64 = -1;
  v65 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v66 = 1;
    v64 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2001);
  }
  else
  {
    v66 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v64, 2001LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v11, v10)) == 0LL
    || (v13 = *((_QWORD *)Current + 1)) == 0 )
  {
    v13 = v12;
  }
  if ( !v13 )
  {
    v48 = WdLogNewEntry5_WdError(v11, v10);
    LODWORD(v41) = -1073741811;
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    goto LABEL_39;
  }
  v14 = *(_QWORD *)v3;
  v60 = 0LL;
  v61 = 0LL;
  DxgAdapterSafe = DpiGetDxgAdapterSafe(v14, &v60, &v61);
  if ( DxgAdapterSafe < 0 )
  {
    LODWORD(v41) = DxgAdapterSafe;
    goto LABEL_39;
  }
  v19 = (volatile signed __int64 *)v60;
  if ( (*((_DWORD *)v60 + 642) & 4) != 0 )
  {
    v49 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v49 + 24) = v19;
    WdLogEvent5_WdWarning(v49);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
    LODWORD(v41) = -1073741790;
    goto LABEL_39;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v60 + 3);
  KeEnterCriticalRegion();
  v20 = v60;
  v63 = (char *)v60 + 136;
  ExAcquirePushLockSharedEx((char *)v60 + 136, 0LL);
  if ( *((_DWORD *)v20 + 50) != 1
    || (v24 = v60, *((_BYTE *)v60 + 2609))
    || (v22 = (_QWORD *)*((_QWORD *)v60 + 338)) == 0LL
    || *(_BYTE *)(v22[2] + 209LL) )
  {
LABEL_19:
    v71 = 0;
    if ( *((_DWORD *)v20 + 50) != 1 )
    {
      v52 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      LODWORD(v41) = -1073741130;
      *(_QWORD *)(v52 + 24) = v60;
      *(_QWORD *)(v52 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v52);
      goto LABEL_33;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v13 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v13 + 232);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, &EventBlockThread, v30, v53);
      }
      ExAcquirePushLockExclusiveEx(v13 + 208, 0LL);
    }
    v31 = v60;
    *(_QWORD *)(v13 + 216) = KeGetCurrentThread();
    v70 = HMGRTABLE::AllocHandle(v13 + 240, v31, 1LL);
    *(_QWORD *)(v13 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v13 + 208, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64(v19 + 3);
    if ( !v70 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v60);
      LODWORD(v41) = -1073741801;
      goto LABEL_33;
    }
    v32 = *((_QWORD *)v60 + 338);
    if ( !v32 )
    {
LABEL_32:
      LODWORD(v41) = 0;
      v71 = v70;
LABEL_33:
      v42 = _InterlockedExchangeAdd64(v19 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v43 = v60;
      if ( v42 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v60 + 2), v60);
      if ( (int)v41 >= 0 )
      {
        LODWORD(v41) = 0;
        *((_DWORD *)v3 + 2) = v71;
        *(_QWORD *)((char *)v3 + 12) = *(_QWORD *)((char *)v43 + 316);
      }
      goto LABEL_37;
    }
    v69 = (*(_BYTE *)(v13 + 347) & 0x10) != 0;
    v33 = v32 + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v32 + 72, 0LL);
    *(_QWORD *)(v32 + 80) = KeGetCurrentThread();
    v34 = *(_QWORD **)(8LL * *(unsigned int *)(*(_QWORD *)(v32 + 16) + 232LL) + *(_QWORD *)(v13 + 48));
    v62 = 8LL * *(unsigned int *)(*(_QWORD *)(v32 + 16) + 232LL);
    if ( !v34 )
    {
      v35 = operator new(0x78uLL, 0x4B677844u, 1, PagedPool);
      v34 = v35;
      if ( !v35 )
      {
        LODWORD(v41) = -1073741801;
        goto LABEL_31;
      }
      v38 = v35 + 7;
      v35[1] = 0LL;
      v35[2] = 0LL;
      v35[3] = 0LL;
      v35[4] = 0LL;
      v35[5] = 0LL;
      v35[6] = 0LL;
      *((_DWORD *)v35 + 18) = 0;
      *((_WORD *)v35 + 38) = 0;
      v35[10] = 0LL;
      v35[11] = 0LL;
      *((_DWORD *)v35 + 24) = 0;
      *((_DWORD *)v35 + 25) = 1;
      v35[14] = v35 + 13;
      v35[13] = v35 + 13;
      v35[4] = v13;
      v35[6] = v32;
      if ( *(struct _KTHREAD **)(v32 + 80) != KeGetCurrentThread() )
      {
        v54 = WdLogNewEntry5_WdAssertion(v37, v36);
        *(_QWORD *)(v54 + 24) = 4355LL;
        WdLogEvent5_WdAssertion(v54);
      }
      v39 = *(_QWORD **)(v32 + 296);
      if ( *v39 != v32 + 288 )
        __fastfail(3u);
      v34[8] = v39;
      *v38 = v32 + 288;
      *v39 = v38;
      v40 = v62;
      *(_QWORD *)(v32 + 296) = v38;
      v33 = v32 + 72;
      ++*(_DWORD *)(v32 + 304);
      *(_QWORD *)(v40 + *(_QWORD *)(v13 + 48)) = v34;
    }
    ++*((_DWORD *)v34 + 6);
    if ( v69 )
    {
      v55 = DXGPROCESS_ADAPTER_INFO::Initialize(
              (DXGPROCESS_ADAPTER_INFO *)v34,
              (struct DXGPROCESS *)v13,
              (struct ADAPTER_RENDER *)v32);
      v41 = v55;
      if ( v55 < 0 )
      {
        v59 = WdLogNewEntry5_WdWarning(v57, v56, v58);
        *(_QWORD *)(v59 + 24) = v41;
        WdLogEvent5_WdWarning(v59);
      }
    }
    else
    {
      LODWORD(v41) = 0;
    }
LABEL_31:
    *(_QWORD *)(v33 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v33, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v41 < 0 )
    {
      DXGPROCESS::CloseAdapter((DXGPROCESS *)v13, (struct DXGADAPTER *const *)v32);
      DXGPROCESS::FreeResourceHandleNoRefSafe((DXGPROCESS *)v13, v70);
      DXGADAPTER::ReleaseReferenceNoTracking(v60);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  v25 = v22[78];
  v26 = v22[77];
  v27 = *(_QWORD *)(v13 + 64);
  v68 = v25;
  if ( v27 )
    v28 = *(_QWORD *)(v27 + 8LL * (unsigned int)(*(_DWORD *)v26 - 1) + 16);
  else
    v28 = 0LL;
  if ( !v28 )
  {
    v50 = WdLogNewEntry5_WdAssertion(v27, v21);
    *(_QWORD *)(v50 + 24) = 990LL;
    WdLogEvent5_WdAssertion(v50);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v26 + 8) + 840LL))(v68, v28) )
  {
    v3 = a1;
    goto LABEL_19;
  }
  v51 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v51 + 24) = v24;
  *(_QWORD *)(v51 + 32) = v13;
  WdLogEvent5_WdEvent(v51);
  DXGADAPTER::ReleaseReference(v24);
  LODWORD(v41) = -1073741790;
LABEL_37:
  ExReleasePushLockSharedEx(v63, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64(v19 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v60 + 2), v60);
LABEL_39:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v64, v16);
  if ( v66 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v64);
  return (unsigned int)v41;
}
