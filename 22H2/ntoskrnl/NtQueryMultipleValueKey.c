/*
 * XREFs of NtQueryMultipleValueKey @ 0x140686BA0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1406871B4 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmpCaptureKeyValueArray @ 0x1406DFEF0 (CmpCaptureKeyValueArray.c)
 *     CmQueryMultipleValueKey @ 0x1406E2464 (CmQueryMultipleValueKey.c)
 */

__int64 __fastcall NtQueryMultipleValueKey(
        int a1,
        struct _DMA_ADAPTER *a2,
        unsigned int a3,
        volatile void *a4,
        struct _DMA_ADAPTER *a5,
        _DWORD *a6)
{
  __int64 v6; // r14
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // di
  int v12; // r8d
  int v13; // r9d
  signed int MultipleValueKey; // edi
  int PreviousMode; // esi
  int v16; // r8d
  __int64 v17; // rax
  _DWORD *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct _KTHREAD *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 i; // r8
  __int64 v27; // rdx
  PPRIVILEGE_SET v28; // rcx
  __int64 v29; // rcx
  char v31; // [rsp+40h] [rbp-1D8h]
  char v32; // [rsp+41h] [rbp-1D7h]
  unsigned int Length; // [rsp+44h] [rbp-1D4h] BYREF
  BOOLEAN Length_4; // [rsp+48h] [rbp-1D0h]
  unsigned int v35; // [rsp+50h] [rbp-1C8h]
  PADAPTER_OBJECT v36; // [rsp+58h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1B8h] BYREF
  int v38; // [rsp+68h] [rbp-1B0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-1A8h]
  int v40; // [rsp+78h] [rbp-1A0h]
  volatile void *v41; // [rsp+80h] [rbp-198h]
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+88h] [rbp-190h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-178h]
  PPRIVILEGE_SET v44; // [rsp+A8h] [rbp-170h] BYREF
  PPRIVILEGE_SET v45; // [rsp+B0h] [rbp-168h] BYREF
  _QWORD v46[3]; // [rsp+B8h] [rbp-160h] BYREF
  _QWORD v47[10]; // [rsp+D0h] [rbp-148h] BYREF
  _OWORD v48[2]; // [rsp+120h] [rbp-F8h] BYREF
  _OWORD v49[3]; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v50[12]; // [rsp+170h] [rbp-A8h] BYREF

  v41 = a4;
  v6 = a3;
  Address = a2;
  DmaAdapter[1] = a2;
  v35 = a3;
  DmaAdapter[2] = a5;
  Length = 0;
  v38 = 0;
  memset(v49, 0, sizeof(v49));
  memset(v50, 0, 0x58uLL);
  memset(v48, 0, sizeof(v48));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v48, 0x20000LL, v8, v9);
  v31 = 0;
  v32 = 0;
  v36 = 0LL;
  memset(v47, 0, 0x48uLL);
  v46[1] = v46;
  v46[0] = v46;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v11 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  Length_4 = v11;
  if ( !v11 )
  {
    MultipleValueKey = -1073741431;
LABEL_36:
    v18 = Address;
    goto LABEL_37;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v13) = PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(a1, 1, v12, v13, (__int64)&v36, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_36;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v36 )
    DmaOperations = v36->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v17 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    Length = *(_DWORD *)v17;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(0xC000009A);
    v18 = Address;
    ProbeForWrite(Address, 24 * v6, 4u);
    if ( a6 )
    {
      v19 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v19 = *(_DWORD *)v19;
    }
    ProbeForWrite(v41, Length, 4u);
  }
  else
  {
    Length = *(_DWORD *)&a5->Version;
    v18 = Address;
  }
  LOBYTE(v16) = PreviousMode;
  MultipleValueKey = CmpCaptureKeyValueArray(
                       (_DWORD)v18,
                       v6,
                       v16,
                       (unsigned int)&Privileges,
                       (__int64)&v44,
                       (__int64)&v45);
  if ( MultipleValueKey >= 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v32 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v47[0] = v36;
      v47[1] = Privileges;
      LODWORD(v47[2]) = v6;
      v47[3] = v41;
      v47[4] = &Length;
      v47[5] = a6;
      v22 = CmpCallCallBacksEx(9u, (__int64)v47, 0LL, 1, 0x18u, (__int64)v36, (__int64)v46);
      MultipleValueKey = v22;
      if ( v22 < 0 )
      {
        if ( v22 == -1073740541 )
          MultipleValueKey = 0;
        goto LABEL_37;
      }
      v31 = 1;
    }
    LOBYTE(v20) = PreviousMode;
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&v36, v20, 1LL, DmaAdapter);
    if ( MultipleValueKey >= 0 )
    {
      MultipleValueKey = CmpBounceContextStart((__int64)v50, (void *)v41, Length, PreviousMode, 4);
      if ( MultipleValueKey >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v49, v23, v24, v25);
        MultipleValueKey = CmQueryMultipleValueKey(
                             (_DWORD)v36,
                             DmaAdapter[0],
                             (_DWORD)Privileges,
                             v6,
                             v50[1],
                             (__int64)&Length,
                             (__int64)&v38);
        KiUnstackDetachProcess((__int64)v49, 0);
        if ( a6 )
          *a6 = v38;
        if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          CmpBounceContextCopyDataToCallerBuffer(v50, Length);
      }
    }
  }
LABEL_37:
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( v31 )
    MultipleValueKey = CmPostCallbackNotificationEx(0x18u, (__int64)v36, MultipleValueKey, (__int64)v47, 0LL, v46);
  if ( Privileges )
  {
    *(_DWORD *)&a5->Version = Length;
    if ( ((MultipleValueKey + 0x80000000) & 0x80000000) != 0 || MultipleValueKey == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v40 = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v27 = 3 * i;
        v28 = Privileges;
        v18[2 * v27 + 2] = Privileges->Privilege[2 * i].Luid.LowPart;
        v18[2 * v27 + 3] = v28->Privilege[2 * i].Luid.HighPart;
        v18[2 * v27 + 4] = v28->Privilege[2 * i].Attributes;
      }
    }
  }
  if ( v32 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v36 )
    HalPutDmaAdapter(v36);
  CmpBounceContextCleanup((__int64)v50);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v29) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v29,
      v48,
      (unsigned int)MultipleValueKey,
      (unsigned int)v6,
      DmaOperations,
      0LL);
  }
  if ( Length_4 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v44 )
    CmSiFreeMemory(v44);
  if ( v45 )
    CmSiFreeMemory(v45);
  return (unsigned int)MultipleValueKey;
}
