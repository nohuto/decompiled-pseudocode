/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C01A43D0
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
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0197978 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0198020 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C01A54AC (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  _OWORD *v5; // rax
  struct DXGDEVICE *v6; // rbx
  struct _KEVENT *v7; // r14
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r14
  HANDLE v11; // r15
  __int64 v12; // r8
  PVOID v13; // r12
  int Resource; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  bool v20; // sf
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGDEVICE *v30; // [rsp+50h] [rbp-138h] BYREF
  int v31; // [rsp+58h] [rbp-130h] BYREF
  __int64 v32; // [rsp+60h] [rbp-128h]
  char v33; // [rsp+68h] [rbp-120h]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  struct DXGDEVICE *v35; // [rsp+78h] [rbp-110h] BYREF
  char v36; // [rsp+80h] [rbp-108h]
  struct DXGDEVICE *v37; // [rsp+88h] [rbp-100h] BYREF
  HANDLE Handle[2]; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-E8h]
  __int64 v40; // [rsp+B0h] [rbp-D8h]
  _BYTE v41[160]; // [rsp+C0h] [rbp-C8h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2073;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2073);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2073);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 )
      return 3221225485LL;
    v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_31:
    if ( v20 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v31);
    return 3221225485LL;
  }
  *(_OWORD *)Handle = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v5;
  v39 = v5[1];
  v37 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, (unsigned int)Handle[0], Current, &v37);
  v6 = v37;
  if ( !v37 )
  {
    v21 = LODWORD(Handle[0]);
    WdLogSingleEntry2(2LL, LODWORD(Handle[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v21,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 )
      return 3221225485LL;
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_31;
  }
  v35 = v37;
  v7 = (struct _KEVENT *)*((_QWORD *)v37 + 2);
  if ( !KeReadStateEvent(v7 + 4) )
    KeWaitForSingleObject(&v7[4], Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 17), 0) )
  {
    DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventBlockThread, v23, 40);
    ExAcquireResourceSharedLite(*((PERESOURCE *)v6 + 17), 1u);
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*((_QWORD *)v6 + 2) + 16LL));
  }
  v36 = 1;
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v6, 0, v8, 0);
  v9 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
  LODWORD(v10) = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v9);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v35);
    if ( !v30 )
    {
LABEL_41:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v31);
      return (unsigned int)v10;
    }
LABEL_39:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
    goto LABEL_41;
  }
  Object = 0LL;
  v11 = Handle[1];
  v10 = ObReferenceObjectByHandle(Handle[1], 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v13 = Object;
  if ( (_DWORD)v10 != -1073741788 )
  {
    if ( (int)v10 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(v6, Handle, v12, Object);
      ObfDereferenceObject(v13);
      if ( Resource < 0 )
      {
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v35);
        if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v31);
        return (unsigned int)Resource;
      }
      else
      {
        if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a1 = *(_OWORD *)Handle;
        *(_OWORD *)(a1 + 16) = v39;
        *(_QWORD *)(a1 + 32) = v40;
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v35);
        if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v31);
        }
        return 0LL;
      }
    }
    WdLogSingleEntry3(3LL, v6, v11, v10);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v35);
    if ( !v30 )
      goto LABEL_41;
    goto LABEL_39;
  }
  WdLogSingleEntry3(3LL, v6, v11, -1073741788LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v35);
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v31);
  }
  return 3221225508LL;
}
