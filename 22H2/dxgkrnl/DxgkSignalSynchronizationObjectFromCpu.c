/*
 * XREFs of DxgkSignalSynchronizationObjectFromCpu @ 0x1C0294620
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0005090 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0008BB0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0008C04 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008DD8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C001A75C (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C02927EC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromCpu(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG64 v14; // rax
  UINT ObjectCount; // ebx
  _BYTE *v16; // r9
  __int64 v17; // r8
  const D3DKMT_HANDLE *ObjectHandleArray; // rdx
  PVOID v19; // rcx
  __int64 v20; // r8
  const UINT64 *FenceValueArray; // rdx
  __int64 hDevice; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r9
  UINT *v27; // rdx
  int v28; // esi
  __int64 v29; // r8
  ULONG64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535 Value; // ebx
  __int64 v34; // rax
  PERESOURCE *Global; // rax
  __int64 v36; // rdx
  unsigned int v37; // ebx
  struct DXGDEVICE *v38[2]; // [rsp+30h] [rbp-178h] BYREF
  struct DXGDEVICE *v39; // [rsp+40h] [rbp-168h] BYREF
  __int64 v40; // [rsp+48h] [rbp-160h] BYREF
  char v41; // [rsp+50h] [rbp-158h]
  struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU Src; // [rsp+58h] [rbp-150h] BYREF
  _BYTE v43[16]; // [rsp+78h] [rbp-130h] BYREF
  PVOID v44; // [rsp+88h] [rbp-120h] BYREF
  _BYTE v45[16]; // [rsp+90h] [rbp-118h] BYREF
  unsigned int v46; // [rsp+A0h] [rbp-108h]
  PVOID P; // [rsp+A8h] [rbp-100h] BYREF
  _BYTE v48[32]; // [rsp+B0h] [rbp-F8h] BYREF
  unsigned int v49; // [rsp+D0h] [rbp-D8h]
  _BYTE v50[160]; // [rsp+E0h] [rbp-C8h] BYREF

  Current = DXGPROCESS::GetCurrent(a1, a2, a3, a4);
  v38[1] = Current;
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = PsGetCurrentProcess(v10, v9, v11, v12);
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v44 = 0LL;
  v46 = 0;
  P = 0LL;
  v49 = 0;
  *(_QWORD *)&Src.Flags.0 = 0LL;
  v14 = a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = MmUserProbeAddress;
  *(_OWORD *)&Src.hDevice = *(_OWORD *)v14;
  Src.FenceValueArray = *(const UINT64 **)(v14 + 16);
  Src.Flags.Value = 0;
  if ( !Src.ObjectCount )
  {
    P = 0LL;
    v49 = 0;
    v44 = 0LL;
    v46 = 0;
    return 3221225485LL;
  }
  ObjectCount = Src.ObjectCount;
  PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v44, Src.ObjectCount);
  v16 = v44;
  if ( !v44 )
  {
    if ( P != v48 && P )
    {
      ExFreePoolWithTag(P, 0);
      v16 = v44;
    }
    P = 0LL;
    v49 = 0;
    if ( v16 != v45 )
    {
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
    v44 = 0LL;
    v46 = 0;
    return 3221225495LL;
  }
  v17 = v46;
  ObjectHandleArray = Src.ObjectHandleArray;
  if ( &Src.ObjectHandleArray[v17] < Src.ObjectHandleArray
    || &Src.ObjectHandleArray[v17] > (const D3DKMT_HANDLE *)MmUserProbeAddress )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v16, ObjectHandleArray, v17 * 4);
  Src.ObjectHandleArray = (const D3DKMT_HANDLE *)v44;
  NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, ObjectCount);
  v19 = P;
  if ( !P )
  {
    P = 0LL;
    v49 = 0;
    if ( v44 != v45 && v44 )
      ExFreePoolWithTag(v44, 0);
    v44 = 0LL;
    v46 = 0;
    return 3221225495LL;
  }
  v20 = v49;
  FenceValueArray = Src.FenceValueArray;
  if ( &Src.FenceValueArray[v20] < Src.FenceValueArray || &Src.FenceValueArray[v20] > (const UINT64 *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v19, FenceValueArray, v20 * 8);
  Src.FenceValueArray = (const UINT64 *)P;
  v39 = 0LL;
  hDevice = Src.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v38, Src.hDevice, (struct _KTHREAD **)Current, &v39);
  if ( !v39 )
  {
    v25 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v25 + 24) = hDevice;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_56:
    if ( v38[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v38[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38[0] + 2), v38[0]);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    v49 = 0;
    P = 0LL;
    if ( v44 != v45 && v44 )
      ExFreePoolWithTag(v44, 0);
    return 3221225485LL;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v40, v39);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v39, 0, v26, 0);
  v28 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50, 0LL);
  if ( v28 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    if ( v40 && v41 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v40 + 136));
      KeLeaveCriticalRegion();
    }
    if ( v38[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v38[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38[0] + 2), v38[0]);
    if ( P != v48 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v49 = 0;
    if ( v44 != v45 && v44 )
      ExFreePoolWithTag(v44, 0);
    return (unsigned int)v28;
  }
  v30 = *((_QWORD *)v39 + 2);
  v31 = *(_QWORD *)(v30 + 16);
  if ( !v31 )
  {
    v32 = WdLogNewEntry5_WdError(v30, v27);
    *(_QWORD *)(v32 + 24) = hDevice;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
LABEL_53:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    if ( v40 && v41 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v40 + 136));
      KeLeaveCriticalRegion();
    }
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v31 + 1872) >= 0x5020u )
  {
    v27 = (UINT *)(a1 + 24);
    v30 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v27 = (UINT *)MmUserProbeAddress;
    Src.Flags.Value = *v27;
    Value = (struct _D3DDDICB_SIGNALFLAGS::$F4BAD952F0EA0A4BEFA84782466716D0::$DE86B16C121A84B75DA0E945D4B81535)Src.Flags.Value;
    if ( (Src.Flags.Value & 0x7FFFFFF8) != 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v27, v29);
      *(_QWORD *)(v34 + 24) = (*(unsigned int *)&Value >> 3) & 0xFFFFFFF;
LABEL_52:
      WdLogEvent5_WdWarning(v34);
      goto LABEL_53;
    }
    if ( (Src.Flags.Value & 0x80000000) != 0 )
    {
      v34 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v27, v29);
      *(_QWORD *)(v34 + 24) = 5483LL;
      goto LABEL_52;
    }
  }
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v30, (__int64)v27);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v43, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v43, v36);
  v37 = SignalSynchronizationObjectFromCpu(&Src, Current, v39);
  if ( v43[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v43);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  if ( v40 && v41 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v40 + 136));
    KeLeaveCriticalRegion();
  }
  if ( v38[0] && _InterlockedExchangeAdd64((volatile signed __int64 *)v38[0] + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38[0] + 2), v38[0]);
  if ( P != v48 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v49 = 0;
  if ( v44 != v45 && v44 )
    ExFreePoolWithTag(v44, 0);
  return v37;
}
