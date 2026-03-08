/*
 * XREFs of DxgkSetStablePowerState @ 0x1C0342AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0009AF0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BB890 (-AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02BCBCC (-ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkSetStablePowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v6; // rbx
  struct DXGADAPTER *v7; // r14
  int PairingAdapters; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  ADAPTER_RENDER **v12; // r14
  ADAPTER_RENDER *v13; // rbx
  struct DXGADAPTER *v14; // r12
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rbx
  ADAPTER_RENDER *v16; // r13
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-F0h]
  char v26; // [rsp+60h] [rbp-E8h]
  struct DXGADAPTER *v27; // [rsp+68h] [rbp-E0h] BYREF
  DXGADAPTER *v28; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+88h] [rbp-C0h] BYREF
  _BYTE v31[144]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = (__int64 *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2124;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2124);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2124);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, 4175LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context", 4175LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_26;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v6 = *v3;
  v29 = v6;
  v27 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v28, v6, (struct _KTHREAD **)Current, &v27, 1);
  v7 = v27;
  if ( !v27 )
  {
    WdLogSingleEntry2(2LL, Current, (unsigned int)v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
      (__int64)Current,
      (unsigned int)v6,
      0LL,
      0LL,
      0LL);
    if ( !v28 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v27 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v7, 0, &v27, &v30, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
LABEL_15:
    if ( v28 )
      DXGADAPTER::ReleaseReference(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v24);
    return (unsigned int)PairingAdapters;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)Current + 216, 0LL);
  *((_QWORD *)Current + 28) = KeGetCurrentThread();
  v12 = (ADAPTER_RENDER **)v27;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v27, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry1(3LL, v12);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  v13 = v12[366];
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v13 + 72, 0LL);
  *((_QWORD *)v13 + 10) = KeGetCurrentThread();
  v14 = v27;
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(Current, *((_DWORD *)v27 + 60));
  v16 = v12[366];
  if ( !RenderAdapterInfo )
  {
    *((_QWORD *)v16 + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v16 + 72, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry2(3LL, v14, Current);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    *((_QWORD *)Current + 28) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
    KeLeaveCriticalRegion();
    if ( !v28 )
    {
LABEL_26:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v24);
      }
      return 3221225485LL;
    }
LABEL_25:
    DXGADAPTER::ReleaseReference(v28);
    goto LABEL_26;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v16 + 1800, 0LL);
  *((_QWORD *)v16 + 226) = KeGetCurrentThread();
  v19 = *((_DWORD *)RenderAdapterInfo + 15);
  if ( HIDWORD(v29) )
  {
    if ( !v19 )
      ADAPTER_RENDER::AddStablePowerReference(v12[366]);
    ++*((_DWORD *)RenderAdapterInfo + 15);
  }
  else if ( v19 )
  {
    v20 = v19 - 1;
    *((_DWORD *)RenderAdapterInfo + 15) = v20;
    if ( !v20 )
      ADAPTER_RENDER::ReleaseStablePowerReference(v12[366]);
  }
  else
  {
    WdLogSingleEntry2(3LL, Current, v27);
  }
  *((_QWORD *)v16 + 226) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v16 + 1800, 0LL);
  KeLeaveCriticalRegion();
  v21 = (__int64)v12[366] + 72;
  *(_QWORD *)(v21 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v21, 0LL);
  KeLeaveCriticalRegion();
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  *((_QWORD *)Current + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 216, 0LL);
  KeLeaveCriticalRegion();
  if ( v28 )
    DXGADAPTER::ReleaseReference(v28);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v24);
  return 0LL;
}
