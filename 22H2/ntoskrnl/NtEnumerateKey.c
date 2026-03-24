/*
 * XREFs of NtEnumerateKey @ 0x1405F3E50
 * Callers:
 *     AdtpObjsInitialize @ 0x14079E8F0 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C020 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        _DWORD *a6)
{
  unsigned int v8; // r14d
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // r14d
  struct _DMA_ADAPTER *v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rax
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  NTSTATUS v23; // ebx
  _DMA_OPERATIONS *v24; // rdi
  KPROCESSOR_MODE PreviousMode; // r9
  char v26; // [rsp+40h] [rbp-1B8h]
  char v27; // [rsp+41h] [rbp-1B7h]
  BOOLEAN v28; // [rsp+42h] [rbp-1B6h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-1B0h] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+50h] [rbp-1A8h]
  _DWORD v32[4]; // [rsp+58h] [rbp-1A0h] BYREF
  _DMA_OPERATIONS *v33; // [rsp+68h] [rbp-190h]
  PADAPTER_OBJECT v34; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v35[2]; // [rsp+78h] [rbp-180h] BYREF
  PVOID v36; // [rsp+88h] [rbp-170h] BYREF
  PVOID Object; // [rsp+90h] [rbp-168h] BYREF
  PVOID v38; // [rsp+98h] [rbp-160h]
  PADAPTER_OBJECT v39; // [rsp+A0h] [rbp-158h] BYREF
  NTSTATUS v40; // [rsp+A8h] [rbp-150h]
  int v41; // [rsp+ACh] [rbp-14Ch]
  _QWORD *v42; // [rsp+B0h] [rbp-148h]
  NTSTATUS v43; // [rsp+B8h] [rbp-140h]
  __int128 v44; // [rsp+BCh] [rbp-13Ch]
  __int64 v45; // [rsp+CCh] [rbp-12Ch]
  int v46; // [rsp+D4h] [rbp-124h]
  _QWORD v47[9]; // [rsp+E0h] [rbp-118h] BYREF
  _OWORD v48[2]; // [rsp+128h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+150h] [rbp-A8h] BYREF
  char v50; // [rsp+160h] [rbp-98h]
  _BYTE v51[71]; // [rsp+161h] [rbp-97h] BYREF

  v8 = a2;
  v32[2] = a2;
  memset(v51, 0, sizeof(v51));
  memset(v48, 0, sizeof(v48));
  DmaOperations = 0LL;
  v33 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v48, 0x20000LL, v10, v11);
  v26 = 0;
  v27 = 0;
  memset(v47, 0, 0x40uLL);
  DmaAdapter = 0LL;
  v32[0] = 0;
  *(_OWORD *)Src = 0LL;
  v50 = 0;
  v35[1] = v35;
  v35[0] = v35;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v28 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v23 = -1073741431;
    v24 = 0LL;
    goto LABEL_30;
  }
  if ( a3 > 2 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v36 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v36, 0LL) >= 0) )
    {
      v24 = (_DMA_OPERATIONS *)*((_QWORD *)v36 + 1);
      HalPutDmaAdapter((PADAPTER_OBJECT)v36);
    }
    else
    {
      v24 = 0LL;
    }
    v23 = -1073741811;
    goto LABEL_30;
  }
  v13 = KeGetCurrentThread()->PreviousMode;
  v47[8] = 0LL;
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)CmKeyObjectType, v13, &Object, 0LL);
  v14 = (struct _DMA_ADAPTER *)Object;
  v38 = Object;
  if ( v23 >= 0 )
  {
    if ( *(_DWORD *)Object == 1803104306 )
    {
      DmaAdapter = (PADAPTER_OBJECT)Object;
      v14 = 0LL;
      v38 = 0LL;
      v23 = 0;
    }
    else
    {
      v23 = -1073741816;
    }
  }
  if ( v14 )
    HalPutDmaAdapter(v14);
  if ( v23 < 0 )
  {
    v8 = a2;
    v24 = 0LL;
    goto LABEL_30;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
  {
    DmaOperations = DmaAdapter->DmaOperations;
    v33 = DmaOperations;
  }
  if ( (_BYTE)v13 == 1 )
  {
    v15 = Length;
    ProbeForWrite(a4, (unsigned int)Length, 4u);
    v16 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
  }
  else
  {
    v15 = Length;
  }
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  v27 = 1;
  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
  {
    v47[0] = DmaAdapter;
    v47[1] = __PAIR64__(a3, a2);
    v47[2] = a4;
    LODWORD(v47[3]) = v15;
    v47[4] = a6;
    LOBYTE(v18) = 1;
    v19 = CmpCallCallBacksEx(5, (unsigned int)v47, 0, v18, 20, (__int64)DmaAdapter, (__int64)v35);
    v23 = v19;
    if ( v19 < 0 )
    {
      v8 = a2;
      v24 = DmaOperations;
      if ( v19 == -1073740541 )
        v23 = 0;
      goto LABEL_30;
    }
    v26 = 1;
  }
  v23 = CmKeyBodyRemapToVirtualForEnum(&DmaAdapter, (unsigned __int8)v13, 8LL, &v34);
  if ( v23 < 0 || (v23 = CmpBounceContextStart(Src, a4, v15, v13, 0), v23 < 0) )
  {
    v8 = a2;
LABEL_48:
    v24 = DmaOperations;
    goto LABEL_30;
  }
  v8 = a2;
  v23 = CmEnumerateKey((_DWORD)DmaAdapter, (_DWORD)v34, a2, a3, (__int64)Src[1], v15, (__int64)v32);
  if ( v23 < 0 && v23 != -2147483643 && v23 != -1073741789 )
    goto LABEL_48;
  v20 = v32[0];
  *a6 = v32[0];
  if ( v23 != -1073741789 )
  {
    if ( v15 >= v20 )
      v15 = v20;
    if ( Src[0] != Src[1] )
      memmove(Src[0], Src[1], v15);
  }
  v24 = DmaOperations;
LABEL_30:
  if ( v34 )
    HalPutDmaAdapter(v34);
  if ( v26
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v35[0] != v35 )
  {
    v41 = 0;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0;
    v39 = DmaAdapter;
    v40 = v23;
    v43 = v23;
    v42 = v47;
    CmpCallCallBacksEx(20, (unsigned int)&v39, 0, 0, 20, (__int64)DmaAdapter, (__int64)v35);
    v23 = v43;
  }
  if ( v27 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  CmpBounceContextCleanup(Src);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v21) = 17;
    (*(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v21,
      v48,
      (unsigned int)v23,
      v8,
      v24,
      0LL);
  }
  if ( v28 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v23;
}
