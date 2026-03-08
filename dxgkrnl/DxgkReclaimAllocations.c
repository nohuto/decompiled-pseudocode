/*
 * XREFs of DxgkReclaimAllocations @ 0x1C02D69A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z @ 0x1C0191CA0 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReclaimAllocations(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  char v4; // si
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  DXGDEVICE *v10; // rbx
  __int64 v11; // rbx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // r14d
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGDEVICE *v21; // [rsp+50h] [rbp-158h] BYREF
  int v22; // [rsp+58h] [rbp-150h] BYREF
  __int64 v23; // [rsp+60h] [rbp-148h]
  char v24; // [rsp+68h] [rbp-140h]
  struct DXGDEVICE *v25; // [rsp+70h] [rbp-138h] BYREF
  unsigned int v26[4]; // [rsp+78h] [rbp-130h]
  __int128 v27; // [rsp+88h] [rbp-120h]
  __int64 v28; // [rsp+98h] [rbp-110h]
  _BYTE v29[16]; // [rsp+A0h] [rbp-108h] BYREF
  struct _D3DKMT_RECLAIMALLOCATIONS2 v30; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v31[160]; // [rsp+E0h] [rbp-C8h] BYREF

  v3 = a1;
  v22 = -1;
  v23 = 0LL;
  v4 = 1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2071;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2071);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2071);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return 3221225485LL;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_19:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v22);
    return 3221225485LL;
  }
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v26 = *(_OWORD *)v3;
    v27 = *(_OWORD *)(v3 + 16);
    v28 = *(_QWORD *)(v3 + 32);
  }
  else
  {
    v4 = 0;
    *(_OWORD *)v26 = *(_OWORD *)v3;
    v27 = *(_OWORD *)(v3 + 16);
    v28 = *(_QWORD *)(v3 + 32);
  }
  v30.hPagingQueue = 0;
  v30.NumAllocations = v28;
  v30.pResources = *(D3DKMT_HANDLE **)&v26[2];
  *(_OWORD *)&v30.HandleList = v27;
  v30.PagingFenceValue = 0LL;
  v25 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v26[0], Current, &v25);
  v10 = v25;
  if ( !v25 )
  {
    v11 = v26[0];
    WdLogSingleEntry2(2LL, v26[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( !v24 )
      return 3221225485LL;
    LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_19;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29,
    v25);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, (__int64)v10, 0, v13, 0);
  v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v31, 0LL);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v18 = DXGDEVICE::ReclaimAllocations(v10, 0LL, &v30, v4);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
    return v18;
  }
  else
  {
    WdLogSingleEntry2(3LL, v10, v14);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
    if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
    return v15;
  }
}
