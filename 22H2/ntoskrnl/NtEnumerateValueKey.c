/*
 * XREFs of NtEnumerateValueKey @ 0x1405F48F0
 * Callers:
 *     AdtpObjsInitialize @ 0x14079E8F0 (AdtpObjsInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F460 (CmEnumerateValueKeyFromMergedView.c)
 */

NTSTATUS __cdecl NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  ULONG v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // di
  int v12; // r15d
  struct _DMA_ADAPTER *v13; // rcx
  ULONG v14; // edi
  __int64 v15; // rcx
  struct _KTHREAD *v16; // rax
  int v17; // r9d
  int v18; // eax
  ULONG v19; // eax
  struct _KTHREAD *v20; // rcx
  __int64 v22; // rcx
  NTSTATUS v24; // ebx
  _DMA_OPERATIONS *v25; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  BOOLEAN v27; // [rsp+50h] [rbp-1E8h]
  char v28; // [rsp+51h] [rbp-1E7h]
  char v29; // [rsp+52h] [rbp-1E6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-1D8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-1D0h]
  ULONG v34; // [rsp+70h] [rbp-1C8h]
  PADAPTER_OBJECT v35; // [rsp+78h] [rbp-1C0h] BYREF
  _DMA_OPERATIONS *v36; // [rsp+80h] [rbp-1B8h]
  _QWORD v37[2]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID v38; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v40; // [rsp+A8h] [rbp-190h]
  PADAPTER_OBJECT v41; // [rsp+B0h] [rbp-188h] BYREF
  NTSTATUS v42; // [rsp+B8h] [rbp-180h]
  int v43; // [rsp+BCh] [rbp-17Ch]
  _QWORD *v44; // [rsp+C0h] [rbp-178h]
  NTSTATUS v45; // [rsp+C8h] [rbp-170h]
  __int128 v46; // [rsp+CCh] [rbp-16Ch]
  __int64 v47; // [rsp+DCh] [rbp-15Ch]
  int v48; // [rsp+E4h] [rbp-154h]
  _QWORD v49[9]; // [rsp+F0h] [rbp-148h] BYREF
  _OWORD v50[2]; // [rsp+138h] [rbp-100h] BYREF
  _OWORD v51[3]; // [rsp+158h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-A8h] BYREF
  char v53; // [rsp+1A0h] [rbp-98h]
  _BYTE v54[71]; // [rsp+1A1h] [rbp-97h] BYREF

  v8 = Index;
  v34 = Index;
  memset(v51, 0, sizeof(v51));
  memset(v54, 0, sizeof(v54));
  memset(v50, 0, sizeof(v50));
  DmaOperations = 0LL;
  v36 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v50, 0x20000u);
  v28 = 0;
  v29 = 0;
  memset(v49, 0, 0x40uLL);
  DmaAdapter = 0LL;
  LODWORD(v32) = 0;
  *(_OWORD *)Src = 0LL;
  v53 = 0;
  v37[1] = v37;
  v37[0] = v37;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v27 = v11;
  if ( !v11 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v24 = -1073741431;
    v25 = 0LL;
    goto LABEL_39;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && KeyHandle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v38 = 0LL,
          ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v38, 0LL) >= 0) )
    {
      v25 = (_DMA_OPERATIONS *)*((_QWORD *)v38 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v38);
    }
    else
    {
      v25 = 0LL;
    }
    v24 = -1073741811;
    goto LABEL_39;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v49[8] = 0LL;
  Object = 0LL;
  v24 = ObReferenceObjectByHandle(KeyHandle, 1u, (POBJECT_TYPE)CmKeyObjectType, v12, &Object, 0LL);
  v13 = (struct _DMA_ADAPTER *)Object;
  v40 = Object;
  if ( v24 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v13 = 0LL;
      v40 = 0LL;
      v24 = 0;
    }
    else
    {
      v24 = -1073741816;
    }
  }
  if ( v13 )
    HalPutDmaAdapter(v13);
  if ( v24 < 0 )
  {
    v8 = Index;
    v25 = 0LL;
    goto LABEL_39;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v36 = DmaOperations;
  }
  if ( (_BYTE)v12 == 1 )
  {
    v14 = Length;
    if ( Length )
    {
      if ( ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)KeyValueInformation + Length > 0x7FFFFFFF0000LL
        || (char *)KeyValueInformation + Length < KeyValueInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    v15 = (__int64)ResultLength;
    if ( (unsigned __int64)ResultLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = Length;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v29 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v49[0] = DmaAdapter;
    v49[1] = __PAIR64__(KeyValueInformationClass, Index);
    v49[2] = KeyValueInformation;
    LODWORD(v49[3]) = v14;
    v49[4] = ResultLength;
    LOBYTE(v17) = 1;
    v18 = CmpCallCallBacksEx(6, (unsigned int)v49, 0, v17, 21, (__int64)DmaAdapter, (__int64)v37);
    v24 = v18;
    if ( v18 < 0 )
    {
      v11 = v27;
      v8 = Index;
      v25 = DmaOperations;
      if ( v18 == -1073740541 )
        v24 = 0;
      goto LABEL_39;
    }
    v28 = 1;
  }
  v24 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, (unsigned __int8)v12, 1LL, &v35);
  if ( v24 < 0 || (v24 = CmpBounceContextStart((__int64)Src, KeyValueInformation, v14, v12, 1), v24 < 0) )
  {
    v8 = Index;
LABEL_57:
    v25 = DmaOperations;
    v11 = v27;
    goto LABEL_39;
  }
  if ( v35 )
  {
    CmpAttachToRegistryProcess(v51);
    v8 = Index;
    v24 = CmEnumerateValueKeyFromMergedView(
            (int)DmaAdapter,
            (int)v35,
            0,
            Index,
            KeyValueInformationClass,
            (size_t)Src[1],
            v14,
            (__int64)&v32,
            0LL);
    KiUnstackDetachProcess((__int64)v51, 0);
  }
  else
  {
    v8 = Index;
    v24 = CmEnumerateValueKey(DmaAdapter, Index, (unsigned int)KeyValueInformationClass, Src[1], v14, &v32);
  }
  if ( v24 < 0 && v24 != -2147483643 && v24 != -1073741789 )
    goto LABEL_57;
  v19 = v32;
  *ResultLength = v32;
  if ( v24 != -1073741789 )
  {
    if ( v14 >= v19 )
      v14 = v19;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v14);
  }
  v11 = v27;
  v25 = DmaOperations;
LABEL_39:
  if ( v35 )
    HalPutDmaAdapter(v35);
  if ( v28
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v37[0] != v37 )
  {
    v43 = 0;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    v41 = DmaAdapter;
    v42 = v24;
    v45 = v24;
    v44 = v49;
    CmpCallCallBacksEx(21, (unsigned int)&v41, 0, 0, 21, (__int64)DmaAdapter, (__int64)v37);
    v24 = v45;
  }
  if ( v29 )
  {
    v20 = KeGetCurrentThread();
    if ( v20->KernelApcDisable++ == -1
      && ($C459BD0D405E8E46662177FB3D0A143F *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v20);
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v22) = 18;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v22,
      v50,
      (unsigned int)v24,
      v8,
      v25,
      0LL);
  }
  if ( v11 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v24;
}
