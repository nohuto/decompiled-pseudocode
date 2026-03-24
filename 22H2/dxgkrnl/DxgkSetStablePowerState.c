/*
 * XREFs of DxgkSetStablePowerState @ 0x1C0287B40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0215EAC (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02171E4 (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int PairingAdapters; // ebx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  ADAPTER_RENDER **v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  ADAPTER_RENDER *v33; // rbx
  struct DXGADAPTER *v34; // r12
  __int64 v35; // rbx
  ADAPTER_RENDER *v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // [rsp+40h] [rbp-108h] BYREF
  __int64 v56; // [rsp+48h] [rbp-100h]
  char v57; // [rsp+50h] [rbp-F8h]
  struct DXGADAPTER *v58; // [rsp+58h] [rbp-F0h] BYREF
  struct DXGADAPTER *v59; // [rsp+60h] [rbp-E8h] BYREF
  DXGADAPTER *v60; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v61; // [rsp+78h] [rbp-D0h]
  unsigned __int64 v62; // [rsp+80h] [rbp-C8h] BYREF
  _BYTE v63[144]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2124);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2124LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 4024LL;
    WdLogEvent5_WdError(v11);
    goto LABEL_26;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v13 = *v3;
  v61 = v13;
  v59 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v60,
    (unsigned int)v13,
    (struct _KTHREAD **)Current,
    &v59,
    1);
  v16 = v59;
  if ( !v59 )
  {
    v17 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v17 + 24) = Current;
    *(_QWORD *)(v17 + 32) = (unsigned int)v13;
    WdLogEvent5_WdError(v17);
    if ( !v60 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v58 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v59, 0LL, &v58, &v62, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v22 = WdLogNewEntry5_WdWarning(v19, v18, v21);
    *(_QWORD *)(v22 + 24) = v16;
    WdLogEvent5_WdWarning(v22);
LABEL_15:
    if ( v60 )
      DXGADAPTER::ReleaseReference(v60);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v23);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v55);
    return (unsigned int)PairingAdapters;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 176, 0LL);
  *((_QWORD *)Current + 23) = KeGetCurrentThread();
  v27 = (ADAPTER_RENDER **)v58;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, v58, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v27);
  if ( PairingAdapters < 0 )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v27;
    WdLogEvent5_WdWarning(v31);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v32);
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  v33 = v27[338];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v33 + 72, 0LL);
  *((_QWORD *)v33 + 10) = KeGetCurrentThread();
  v34 = v58;
  v35 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8LL * *((unsigned int *)v58 + 58));
  v36 = v27[338];
  if ( !v35 )
  {
    *((_QWORD *)v36 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v36 + 72, 0LL);
    KeLeaveCriticalRegion();
    v40 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v40 + 24) = v34;
    *(_QWORD *)(v40 + 32) = Current;
    WdLogEvent5_WdWarning(v40);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v41);
    *((_QWORD *)Current + 23) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
    KeLeaveCriticalRegion();
    if ( !v60 )
    {
LABEL_26:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v12);
      if ( v57 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v55);
      }
      return 3221225485LL;
    }
LABEL_25:
    DXGADAPTER::ReleaseReference(v60);
    goto LABEL_26;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v36 + 1608, 0LL);
  *((_QWORD *)v36 + 202) = KeGetCurrentThread();
  v47 = *(_DWORD *)(v35 + 28);
  if ( HIDWORD(v61) )
  {
    if ( !v47 )
    {
      ADAPTER_RENDER::AddStablePowerReference(v27[338]);
      v47 = *(_DWORD *)(v35 + 28);
    }
    *(_DWORD *)(v35 + 28) = v47 + 1;
  }
  else if ( v47 )
  {
    v49 = v47 - 1;
    *(_DWORD *)(v35 + 28) = v49;
    if ( !v49 )
      ADAPTER_RENDER::ReleaseStablePowerReference(v27[338]);
  }
  else
  {
    v48 = WdLogNewEntry5_WdWarning(v45, v44, v46);
    *(_QWORD *)(v48 + 24) = Current;
    *(_QWORD *)(v48 + 32) = v58;
    WdLogEvent5_WdWarning(v48);
  }
  *((_QWORD *)v36 + 202) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v36 + 1608, 0LL);
  KeLeaveCriticalRegion();
  v50 = (__int64)v27[338] + 72;
  *(_QWORD *)(v50 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v50, 0LL);
  KeLeaveCriticalRegion();
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v51);
  *((_QWORD *)Current + 23) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( v60 )
    DXGADAPTER::ReleaseReference(v60);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v52);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v55);
  return 0LL;
}
