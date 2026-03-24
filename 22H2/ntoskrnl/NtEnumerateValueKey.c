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

__int64 __fastcall NtEnumerateValueKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        size_t Size,
        _DWORD *a6)
{
  unsigned int v8; // r15d
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v13; // di
  int v14; // r15d
  struct _DMA_ADAPTER *v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rax
  int v19; // r9d
  int v20; // eax
  unsigned int v21; // eax
  struct _KTHREAD *v22; // rcx
  __int64 v24; // rcx
  int v26; // ebx
  _DMA_OPERATIONS *v27; // r14
  KPROCESSOR_MODE PreviousMode; // r9
  BOOLEAN v29; // [rsp+50h] [rbp-1E8h]
  char v30; // [rsp+51h] [rbp-1E7h]
  char v31; // [rsp+52h] [rbp-1E6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-1D8h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+68h] [rbp-1D0h]
  unsigned int v36; // [rsp+70h] [rbp-1C8h]
  PADAPTER_OBJECT v37; // [rsp+78h] [rbp-1C0h] BYREF
  _DMA_OPERATIONS *v38; // [rsp+80h] [rbp-1B8h]
  _QWORD v39[2]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID v40; // [rsp+98h] [rbp-1A0h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-198h] BYREF
  PVOID v42; // [rsp+A8h] [rbp-190h]
  PADAPTER_OBJECT v43; // [rsp+B0h] [rbp-188h] BYREF
  int v44; // [rsp+B8h] [rbp-180h]
  int v45; // [rsp+BCh] [rbp-17Ch]
  _QWORD *v46; // [rsp+C0h] [rbp-178h]
  int v47; // [rsp+C8h] [rbp-170h]
  __int128 v48; // [rsp+CCh] [rbp-16Ch]
  __int64 v49; // [rsp+DCh] [rbp-15Ch]
  int v50; // [rsp+E4h] [rbp-154h]
  _QWORD v51[9]; // [rsp+F0h] [rbp-148h] BYREF
  _OWORD v52[2]; // [rsp+138h] [rbp-100h] BYREF
  _OWORD v53[3]; // [rsp+158h] [rbp-E0h] BYREF
  void *Src[2]; // [rsp+190h] [rbp-A8h] BYREF
  char v55; // [rsp+1A0h] [rbp-98h]
  _BYTE v56[71]; // [rsp+1A1h] [rbp-97h] BYREF

  v8 = a2;
  v36 = a2;
  memset(v53, 0, sizeof(v53));
  memset(v56, 0, sizeof(v56));
  memset(v52, 0, sizeof(v52));
  DmaOperations = 0LL;
  v38 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v52, 0x20000LL, v10, v11);
  v30 = 0;
  v31 = 0;
  memset(v51, 0, 0x40uLL);
  DmaAdapter = 0LL;
  LODWORD(v34) = 0;
  *(_OWORD *)Src = 0LL;
  v55 = 0;
  v39[1] = v39;
  v39[0] = v39;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v29 = v13;
  if ( !v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v26 = -1073741431;
    v27 = 0LL;
    goto LABEL_39;
  }
  if ( a3 > 2 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v40 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v40, 0LL) >= 0) )
    {
      v27 = (_DMA_OPERATIONS *)*((_QWORD *)v40 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v40);
    }
    else
    {
      v27 = 0LL;
    }
    v26 = -1073741811;
    goto LABEL_39;
  }
  v14 = KeGetCurrentThread()->PreviousMode;
  v51[8] = 0LL;
  Object = 0LL;
  v26 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)CmKeyObjectType, v14, &Object, 0LL);
  v15 = (struct _DMA_ADAPTER *)Object;
  v42 = Object;
  if ( v26 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v15 = 0LL;
      v42 = 0LL;
      v26 = 0;
    }
    else
    {
      v26 = -1073741816;
    }
  }
  if ( v15 )
    HalPutDmaAdapter(v15);
  if ( v26 < 0 )
  {
    v8 = a2;
    v27 = 0LL;
    goto LABEL_39;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v38 = DmaOperations;
  }
  if ( (_BYTE)v14 == 1 )
  {
    v16 = Size;
    if ( (_DWORD)Size )
    {
      if ( ((unsigned __int8)a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a4[(unsigned int)Size] > 0x7FFFFFFF0000LL || &a4[(unsigned int)Size] < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v17 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  else
  {
    v16 = Size;
  }
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v31 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v51[0] = DmaAdapter;
    v51[1] = __PAIR64__(a3, a2);
    v51[2] = a4;
    LODWORD(v51[3]) = v16;
    v51[4] = a6;
    LOBYTE(v19) = 1;
    v20 = CmpCallCallBacksEx(6, (unsigned int)v51, 0, v19, 21, (__int64)DmaAdapter, (__int64)v39);
    v26 = v20;
    if ( v20 < 0 )
    {
      v13 = v29;
      v8 = a2;
      v27 = DmaOperations;
      if ( v20 == -1073740541 )
        v26 = 0;
      goto LABEL_39;
    }
    v30 = 1;
  }
  v26 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, (unsigned __int8)v14, 1LL, &v37);
  if ( v26 < 0 || (v26 = CmpBounceContextStart((__int64)Src, a4, v16, v14, 1), v26 < 0) )
  {
    v8 = a2;
LABEL_57:
    v27 = DmaOperations;
    v13 = v29;
    goto LABEL_39;
  }
  if ( v37 )
  {
    CmpAttachToRegistryProcess(v53);
    v8 = a2;
    v26 = CmEnumerateValueKeyFromMergedView(
            (int)DmaAdapter,
            (int)v37,
            0,
            a2,
            a3,
            (size_t)Src[1],
            v16,
            (__int64)&v34,
            0LL);
    KiUnstackDetachProcess((__int64)v53, 0);
  }
  else
  {
    v8 = a2;
    v26 = CmEnumerateValueKey(DmaAdapter, a2, a3, Src[1], v16, &v34);
  }
  if ( v26 < 0 && v26 != -2147483643 && v26 != -1073741789 )
    goto LABEL_57;
  v21 = v34;
  *a6 = v34;
  if ( v26 != -1073741789 )
  {
    if ( v16 >= v21 )
      v16 = v21;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v16);
  }
  v13 = v29;
  v27 = DmaOperations;
LABEL_39:
  if ( v37 )
    HalPutDmaAdapter(v37);
  if ( v30
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v39[0] != v39 )
  {
    v45 = 0;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v43 = DmaAdapter;
    v44 = v26;
    v47 = v26;
    v46 = v51;
    CmpCallCallBacksEx(21, (unsigned int)&v43, 0, 0, 21, (__int64)DmaAdapter, (__int64)v39);
    v26 = v47;
  }
  if ( v31 )
  {
    v22 = KeGetCurrentThread();
    if ( v22->KernelApcDisable++ == -1
      && ($C459BD0D405E8E46662177FB3D0A143F *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v22);
    }
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v24) = 18;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v24,
      v52,
      (unsigned int)v26,
      v8,
      v27,
      0LL);
  }
  if ( v13 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v26;
}
