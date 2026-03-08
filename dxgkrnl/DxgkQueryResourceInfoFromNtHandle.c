/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C0185690
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C018555C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  _OWORD *v5; // rax
  struct DXGDEVICE *v6; // rbx
  struct _KEVENT *v7; // r14
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // r14d
  HANDLE v11; // r15
  NTSTATUS v12; // eax
  __int64 v13; // r8
  PVOID v14; // r12
  int Resource; // ebx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // sf
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGDEVICE *v31; // [rsp+50h] [rbp-138h] BYREF
  int v32; // [rsp+58h] [rbp-130h] BYREF
  __int64 v33; // [rsp+60h] [rbp-128h]
  char v34; // [rsp+68h] [rbp-120h]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  struct DXGDEVICE *v36; // [rsp+78h] [rbp-110h] BYREF
  char v37; // [rsp+80h] [rbp-108h]
  struct DXGDEVICE *v38; // [rsp+88h] [rbp-100h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-E8h]
  __int64 v41; // [rsp+B0h] [rbp-D8h]
  _BYTE v42[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2073);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return 3221225485LL;
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_31:
    if ( v21 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v32);
    return 3221225485LL;
  }
  *(_OWORD *)Handle = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v5;
  v40 = v5[1];
  v38 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, (unsigned int)Handle[0], Current, &v38);
  v6 = v38;
  if ( !v38 )
  {
    v22 = LODWORD(Handle[0]);
    WdLogSingleEntry2(2LL, LODWORD(Handle[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v22,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 )
      return 3221225485LL;
    LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_31;
  }
  v36 = v38;
  v7 = (struct _KEVENT *)*((_QWORD *)v38 + 2);
  if ( !KeReadStateEvent(v7 + 4) )
    KeWaitForSingleObject(&v7[4], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, (const EVENT_DESCRIPTOR *)"g", v24, 40);
    ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL));
  }
  v37 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, (__int64)v6, 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42, 0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v9);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v36);
    if ( !v31 )
    {
LABEL_41:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
      if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v32);
      return v10;
    }
LABEL_39:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    goto LABEL_41;
  }
  Object = 0LL;
  v11 = Handle[1];
  v12 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v10 = v12;
  v14 = Object;
  if ( v12 != -1073741788 )
  {
    if ( v12 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                   (__int64)v6,
                   Handle,
                   v13,
                   (__int64)Object);
      ObfDereferenceObject(v14);
      if ( Resource < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v36);
        if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
        return (unsigned int)Resource;
      }
      else
      {
        if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = *(_OWORD *)Handle;
        *(_OWORD *)(a1 + 16) = v40;
        *(_QWORD *)(a1 + 32) = v41;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v36);
        if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v32);
        }
        return 0LL;
      }
    }
    WdLogSingleEntry3(3LL, v6, v11, v12);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v36);
    if ( !v31 )
      goto LABEL_41;
    goto LABEL_39;
  }
  WdLogSingleEntry3(3LL, v6, v11, -1073741788LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v42);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v36);
  if ( v31 && _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 )
  {
    LOBYTE(v27) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v32);
  }
  return 3221225508LL;
}
