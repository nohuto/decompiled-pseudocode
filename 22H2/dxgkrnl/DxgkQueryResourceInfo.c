/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C019EA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0007C20 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0015A34 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0175D18 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  _OWORD *v5; // rax
  struct DXGDEVICE *v6; // rsi
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // r14d
  unsigned int Resource; // esi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // sf
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGDEVICE *v20; // [rsp+50h] [rbp-128h] BYREF
  int v21; // [rsp+58h] [rbp-120h] BYREF
  __int64 v22; // [rsp+60h] [rbp-118h]
  char v23; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v24; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v25[16]; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v26[4]; // [rsp+88h] [rbp-F0h] BYREF
  __int128 v27; // [rsp+98h] [rbp-E0h]
  _BYTE v28[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2004);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2004);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    Resource = -1073741811;
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
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( !v23 )
      return Resource;
    v16 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_27:
    if ( v16 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v21);
    return Resource;
  }
  v5 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v26 = *v5;
  v27 = v5[1];
  v24 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v20, v26[0], Current, &v24);
  v6 = v24;
  if ( !v24 )
  {
    v17 = v26[0];
    Resource = -1073741811;
    WdLogSingleEntry2(2LL, v26[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v17,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( !v23 )
      return Resource;
    LOBYTE(v14) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v16 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_27;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25, v24);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v6, v26, v26[1]);
    if ( (Resource & 0x80000000) == 0 )
    {
      if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = *(_OWORD *)v26;
      a1[1] = v27;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
      if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
      if ( v23 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v21);
      }
      return 0LL;
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
    if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
    goto LABEL_20;
  }
  WdLogSingleEntry2(3LL, v6, v8);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
  if ( v20 && _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v20 + 2), v20);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  return v9;
}
