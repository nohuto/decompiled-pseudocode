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

NTSTATUS __cdecl NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // r14
  int v7; // r12d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // di
  int v10; // r8d
  int v11; // r9d
  int MultipleValueKey; // edi
  int PreviousMode; // esi
  int v14; // r8d
  PULONG v15; // rax
  _DWORD *v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct _KTHREAD *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  __int64 i; // r8
  __int64 v25; // rdx
  PPRIVILEGE_SET v26; // rcx
  __int64 v27; // rcx
  char v29; // [rsp+40h] [rbp-1D8h]
  char v30; // [rsp+41h] [rbp-1D7h]
  ULONG Length; // [rsp+44h] [rbp-1D4h] BYREF
  BOOLEAN Length_4; // [rsp+48h] [rbp-1D0h]
  ULONG v33; // [rsp+50h] [rbp-1C8h]
  PADAPTER_OBJECT v34; // [rsp+58h] [rbp-1C0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+60h] [rbp-1B8h] BYREF
  ULONG v36; // [rsp+68h] [rbp-1B0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-1A8h]
  int v38; // [rsp+78h] [rbp-1A0h]
  volatile void *v39; // [rsp+80h] [rbp-198h]
  PADAPTER_OBJECT DmaAdapter[3]; // [rsp+88h] [rbp-190h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-178h]
  PPRIVILEGE_SET v42; // [rsp+A8h] [rbp-170h] BYREF
  PPRIVILEGE_SET v43; // [rsp+B0h] [rbp-168h] BYREF
  _QWORD v44[3]; // [rsp+B8h] [rbp-160h] BYREF
  _QWORD v45[10]; // [rsp+D0h] [rbp-148h] BYREF
  _OWORD v46[2]; // [rsp+120h] [rbp-F8h] BYREF
  _OWORD v47[3]; // [rsp+140h] [rbp-D8h] BYREF
  __int64 v48[12]; // [rsp+170h] [rbp-A8h] BYREF

  v39 = ValueBuffer;
  v6 = EntryCount;
  Address = ValueEntries;
  v7 = (int)KeyHandle;
  DmaAdapter[1] = (PADAPTER_OBJECT)ValueEntries;
  v33 = EntryCount;
  DmaAdapter[2] = (PADAPTER_OBJECT)BufferLength;
  Length = 0;
  v36 = 0;
  memset(v47, 0, sizeof(v47));
  memset(v48, 0, 0x58uLL);
  memset(v46, 0, sizeof(v46));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v46, 0x20000u);
  v29 = 0;
  v30 = 0;
  v34 = 0LL;
  memset(v45, 0, 0x48uLL);
  v44[1] = v44;
  v44[0] = v44;
  DmaAdapter[0] = 0LL;
  Privileges = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  Length_4 = v9;
  if ( !v9 )
  {
    MultipleValueKey = -1073741431;
LABEL_36:
    v16 = Address;
    goto LABEL_37;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v11) = PreviousMode;
  MultipleValueKey = CmObReferenceObjectByHandle(v7, 1, v10, v11, (__int64)&v34, 0LL);
  if ( MultipleValueKey < 0 )
    goto LABEL_36;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v34 )
    DmaOperations = v34->DmaOperations;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v15 = BufferLength;
    if ( (unsigned __int64)BufferLength >= 0x7FFFFFFF0000LL )
      v15 = (PULONG)0x7FFFFFFF0000LL;
    Length = *v15;
    if ( (unsigned int)v6 > 0x10000 )
      RtlRaiseStatus(-1073741670);
    v16 = Address;
    ProbeForWrite(Address, 24 * v6, 4u);
    if ( RequiredBufferLength )
    {
      v17 = (__int64)RequiredBufferLength;
      if ( (unsigned __int64)RequiredBufferLength >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v17 = *(_DWORD *)v17;
    }
    ProbeForWrite(v39, Length, 4u);
  }
  else
  {
    Length = *BufferLength;
    v16 = Address;
  }
  LOBYTE(v14) = PreviousMode;
  MultipleValueKey = CmpCaptureKeyValueArray(
                       (_DWORD)v16,
                       v6,
                       v14,
                       (unsigned int)&Privileges,
                       (__int64)&v42,
                       (__int64)&v43);
  if ( MultipleValueKey >= 0 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v30 = 1;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v45[0] = v34;
      v45[1] = Privileges;
      LODWORD(v45[2]) = v6;
      v45[3] = v39;
      v45[4] = &Length;
      v45[5] = RequiredBufferLength;
      v20 = CmpCallCallBacksEx(9u, (__int64)v45, 0LL, 1, 0x18u, (__int64)v34, (__int64)v44);
      MultipleValueKey = v20;
      if ( v20 < 0 )
      {
        if ( v20 == -1073740541 )
          MultipleValueKey = 0;
        goto LABEL_37;
      }
      v29 = 1;
    }
    LOBYTE(v18) = PreviousMode;
    MultipleValueKey = CmKeyBodyRemapToVirtualForEnum(&v34, v18, 1LL, DmaAdapter);
    if ( MultipleValueKey >= 0 )
    {
      MultipleValueKey = CmpBounceContextStart((__int64)v48, (void *)v39, Length, PreviousMode, 4);
      if ( MultipleValueKey >= 0 )
      {
        CmpAttachToRegistryProcess((__int64)v47, v21, v22, v23);
        MultipleValueKey = CmQueryMultipleValueKey(
                             (_DWORD)v34,
                             DmaAdapter[0],
                             (_DWORD)Privileges,
                             v6,
                             v48[1],
                             (__int64)&Length,
                             (__int64)&v36);
        KiUnstackDetachProcess((__int64)v47, 0);
        if ( RequiredBufferLength )
          *RequiredBufferLength = v36;
        if ( (int)(MultipleValueKey + 0x80000000) < 0 || MultipleValueKey == -2147483643 )
          CmpBounceContextCopyDataToCallerBuffer(v48, Length);
      }
    }
  }
LABEL_37:
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( v29 )
    MultipleValueKey = CmPostCallbackNotificationEx(0x18u, (__int64)v34, MultipleValueKey, (__int64)v45, 0LL, v44);
  if ( Privileges )
  {
    *BufferLength = Length;
    if ( ((MultipleValueKey + 0x80000000) & 0x80000000) != 0 || MultipleValueKey == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v38 = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v25 = 3 * i;
        v26 = Privileges;
        v16[2 * v25 + 2] = Privileges->Privilege[2 * i].Luid.LowPart;
        v16[2 * v25 + 3] = v26->Privilege[2 * i].Luid.HighPart;
        v16[2 * v25 + 4] = v26->Privilege[2 * i].Attributes;
      }
    }
  }
  if ( v30 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v34 )
    HalPutDmaAdapter(v34);
  CmpBounceContextCleanup((__int64)v48);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v27) = 19;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v27,
      v46,
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
  if ( v42 )
    CmSiFreeMemory(v42);
  if ( v43 )
    CmSiFreeMemory(v43);
  return MultipleValueKey;
}
