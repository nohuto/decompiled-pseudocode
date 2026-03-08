/*
 * XREFs of DxgkConfigureSharedResource @ 0x1C0183DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0006964 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C01845CC (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkConfigureSharedResource(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  struct _KTHREAD **Current; // r8
  DXGDEVICE *v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  bool v14; // sf
  __int64 v15; // rbx
  struct DXGDEVICE *v16; // [rsp+50h] [rbp-118h] BYREF
  int v17; // [rsp+58h] [rbp-110h] BYREF
  __int64 v18; // [rsp+60h] [rbp-108h]
  char v19; // [rsp+68h] [rbp-100h]
  struct DXGDEVICE *v20; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGDEVICE *v21; // [rsp+78h] [rbp-F0h] BYREF
  int v22; // [rsp+80h] [rbp-E8h]
  unsigned int v23[4]; // [rsp+88h] [rbp-E0h]
  void *v24[2]; // [rsp+98h] [rbp-D0h]
  _BYTE v25[160]; // [rsp+B0h] [rbp-B8h] BYREF

  v3 = (_OWORD *)a1;
  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2056);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v7 = -1073741811;
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
LABEL_19:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( !v19 )
      return v7;
    v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_26:
    if ( v14 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v17);
    return v7;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v23 = *v3;
  *(_OWORD *)v24 = v3[1];
  v20 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, v23[0], Current, &v20);
  v5 = v20;
  if ( !v20 )
  {
    v15 = v23[0];
    v7 = -1073741811;
    WdLogSingleEntry2(2LL, v23[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v15,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
    if ( !v19 )
      return v7;
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v14 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_26;
  }
  v21 = v20;
  v22 = 0;
  DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v21);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v25, (__int64)v5, 0, v6, 0);
  v7 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v25, 0LL);
  if ( (v7 & 0x80000000) != 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
    if ( v21 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v21);
    if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v16);
    goto LABEL_19;
  }
  v8 = DXGDEVICE::ConfigureSharedResource(v5, v23[2], v24[0], v23[1], (unsigned __int8)v24[1]);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v25);
  if ( v21 && v22 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)v21 + 17));
    KeLeaveCriticalRegion();
  }
  if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v17);
  }
  return v8;
}
