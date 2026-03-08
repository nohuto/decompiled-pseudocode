/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C034EF90
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006A6C (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000717C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0007344 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001573C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0018D48 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0051980 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0311BD4 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C034CCAC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1)
{
  __int64 v2; // rcx
  struct DXGDEVICE *Current; // rbx
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  ULONG64 v8; // rax
  UINT ObjectCount; // edi
  _BYTE *v10; // rcx
  __int64 v11; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v13; // rcx
  __int64 v14; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rdi
  __int64 v17; // r9
  int v18; // esi
  __int64 v19; // rax
  UINT *v20; // rdx
  struct DXGGLOBAL *Global; // rax
  unsigned int v22; // ebx
  struct DXGDEVICE *v23; // [rsp+50h] [rbp-188h] BYREF
  struct DXGDEVICE *v24[2]; // [rsp+58h] [rbp-180h] BYREF
  _BYTE v25[16]; // [rsp+68h] [rbp-170h] BYREF
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+78h] [rbp-160h] BYREF
  _BYTE v27[16]; // [rsp+98h] [rbp-140h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-130h]
  PVOID v29; // [rsp+B0h] [rbp-128h]
  __int64 v30; // [rsp+B8h] [rbp-120h]
  PVOID v31; // [rsp+C0h] [rbp-118h] BYREF
  _BYTE v32[16]; // [rsp+C8h] [rbp-110h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp-100h]
  PVOID P; // [rsp+E0h] [rbp-F8h] BYREF
  _BYTE v35[32]; // [rsp+E8h] [rbp-F0h] BYREF
  unsigned int v36; // [rsp+108h] [rbp-D0h]
  _BYTE v37[160]; // [rsp+110h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1);
  v24[0] = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v2);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v6 = PsGetCurrentProcess(v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v6,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v31 = 0LL;
  v33 = 0;
  P = 0LL;
  v36 = 0;
  memset(&Src, 0, sizeof(Src));
  v8 = a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v8;
  Src.FenceValueArray = *(const UINT64 **)(v8 + 16);
  Src.Flags.Value = 0;
  if ( !Src.ObjectCount )
  {
    P = 0LL;
    v36 = 0;
    v31 = 0LL;
    v33 = 0;
    return 3221225485LL;
  }
  ObjectCount = Src.ObjectCount;
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&v31, Src.ObjectCount);
  v10 = v31;
  if ( !v31 )
  {
    if ( P != v35 && P )
    {
      ExFreePoolWithTag(P, 0);
      v10 = v31;
    }
    P = 0LL;
    v36 = 0;
    if ( v10 != v32 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    v31 = 0LL;
    v33 = 0;
    return 3221225495LL;
  }
  v11 = v33;
  v28 = v11 * 4;
  v29 = v31;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v11] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v11] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v10, ObjectHandleArray, v11 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v31;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements((__int64 *)&P, ObjectCount);
  v13 = P;
  if ( !P )
  {
    P = 0LL;
    v36 = 0;
    if ( v31 != v32 && v31 )
      ExFreePoolWithTag(v31, 0);
    v31 = 0LL;
    v33 = 0;
    return 3221225495LL;
  }
  v14 = v36;
  v30 = v14 * 8;
  v24[1] = (struct DXGDEVICE *)P;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v14] < Src.FenceValueArray || &Src.FenceValueArray[v14] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v13, FenceValueArray, v14 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  v24[0] = 0LL;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, Src.hDevice, (struct _KTHREAD **)Current, v24);
  if ( !v24[0] )
  {
    WdLogSingleEntry2(2LL, (unsigned int)hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_50;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25, v24[0]);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v24[0], 0, v17, 0);
  v18 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
  if ( v18 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v36 = 0;
    if ( v31 != v32 && v31 )
      ExFreePoolWithTag(v31, 0);
    return (unsigned int)v18;
  }
  v19 = *(_QWORD *)(*((_QWORD *)v24[0] + 2) + 16LL);
  if ( !v19 )
  {
    WdLogSingleEntry2(2LL, hDevice, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input hDevice (0x%I64x) has no render adapter, returning 0x%I64x",
      hDevice,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_49:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
LABEL_50:
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
    if ( P != v35 && P )
      ExFreePoolWithTag(P, 0);
    v36 = 0;
    P = 0LL;
    if ( v31 != v32 && v31 )
      ExFreePoolWithTag(v31, 0);
    return 3221225485LL;
  }
  if ( *(_DWORD *)(v19 + 2096) >= 0x5020u )
  {
    v20 = (UINT *)(a1 + 24);
    if ( a1 + 24 >= MmUserProbeAddress )
      v20 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v20;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      WdLogSingleEntry1(3LL, (Src.Flags.Value >> 3) & 0xFFFFFFF);
      goto LABEL_49;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(3LL, 5537LL);
      goto LABEL_49;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v27, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v27);
  v22 = SignalSynchronizationObjectFromCpu(&Src, Current, v24[0]);
  if ( v27[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v27);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)v25);
  if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
  if ( P != v35 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v36 = 0;
  if ( v31 != v32 && v31 )
    ExFreePoolWithTag(v31, 0);
  return v22;
}
