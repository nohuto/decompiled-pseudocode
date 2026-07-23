/*
 * XREFs of NtSetInformationKey @ 0x1405F3A00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032A994 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406A5B3C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 */

NTSTATUS __cdecl NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v6; // r13
  char v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v9; // r12
  KPROCESSOR_MODE PreviousMode; // di
  unsigned int v11; // ecx
  char *v12; // rdx
  ACCESS_MASK v13; // edx
  struct _KTHREAD *v14; // rax
  int v15; // r9d
  int v17; // ebx
  struct _DMA_ADAPTER *v18; // rdi
  char v19; // r14
  KPROCESSOR_MODE v20; // r9
  KPROCESSOR_MODE v21; // r9
  _DMA_OPERATIONS *v22; // rcx
  __int32 v23; // r14d
  __int32 v24; // r14d
  __int32 v25; // r14d
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  _DMA_OPERATIONS *v29; // rcx
  char v30; // [rsp+40h] [rbp-158h]
  char v31; // [rsp+41h] [rbp-157h]
  unsigned __int8 v32; // [rsp+42h] [rbp-156h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-150h] BYREF
  __int64 v34; // [rsp+50h] [rbp-148h] BYREF
  ULONG v35; // [rsp+58h] [rbp-140h]
  int v36; // [rsp+5Ch] [rbp-13Ch] BYREF
  _DMA_OPERATIONS *DmaOperations; // [rsp+60h] [rbp-138h]
  HANDLE Handle; // [rsp+68h] [rbp-130h]
  _QWORD v39[2]; // [rsp+70h] [rbp-128h] BYREF
  PVOID v40; // [rsp+80h] [rbp-118h] BYREF
  PVOID v41; // [rsp+88h] [rbp-110h] BYREF
  PVOID Object; // [rsp+90h] [rbp-108h] BYREF
  PVOID v43; // [rsp+98h] [rbp-100h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-F0h] BYREF
  __int128 v45; // [rsp+C8h] [rbp-D0h] BYREF
  __int128 v46; // [rsp+D8h] [rbp-C0h]
  __int128 v47; // [rsp+E8h] [rbp-B0h]
  __int64 v48; // [rsp+F8h] [rbp-A0h]
  struct _DMA_ADAPTER *v49; // [rsp+100h] [rbp-98h] BYREF
  int v50; // [rsp+108h] [rbp-90h]
  int v51; // [rsp+10Ch] [rbp-8Ch]
  __int128 *v52; // [rsp+110h] [rbp-88h]
  int v53; // [rsp+118h] [rbp-80h]
  __int128 v54; // [rsp+11Ch] [rbp-7Ch]
  __int64 v55; // [rsp+12Ch] [rbp-6Ch]
  int v56; // [rsp+134h] [rbp-64h]
  _OWORD v57[2]; // [rsp+138h] [rbp-60h] BYREF

  v35 = KeySetInformationLength;
  Handle = KeyHandle;
  v34 = 0LL;
  memset(v57, 0, sizeof(v57));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v57, 0x20000u);
  v31 = 0;
  DmaAdapter = 0LL;
  v6 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v39[1] = v39;
  v39[0] = v39;
  v36 = 0;
  v7 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = -1073741431;
    v18 = DmaAdapter;
    v19 = 0;
    goto LABEL_28;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    goto LABEL_6;
  if ( KeySetInformationClass )
  {
    if ( KeySetInformationClass != KeyWow64FlagsInformation )
    {
      if ( KeySetInformationClass == KeyControlFlagsInformation
        || KeySetInformationClass == KeySetVirtualizationInformation )
      {
LABEL_6:
        v30 = 0;
LABEL_7:
        v11 = 4;
        goto LABEL_8;
      }
      if ( KeySetInformationClass != KeySetDebugInformation )
      {
        if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
        {
          if ( Handle )
          {
            v20 = KeGetCurrentThread()->PreviousMode;
            v40 = 0LL;
            if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v20, &v40, 0LL) >= 0 )
            {
              DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v40 + 1);
              HalPutDmaAdapter((PADAPTER_OBJECT)v40);
            }
          }
        }
        v17 = -1073741821;
        v18 = DmaAdapter;
        v19 = 0;
        goto LABEL_28;
      }
    }
    v30 = 1;
    goto LABEL_7;
  }
  v11 = 8;
  v30 = 1;
LABEL_8:
  if ( v35 != v11 )
  {
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    {
      if ( Handle )
      {
        v21 = KeGetCurrentThread()->PreviousMode;
        v41 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, v21, &v41, 0LL) >= 0 )
        {
          DmaOperations = (_DMA_OPERATIONS *)*((_QWORD *)v41 + 1);
          HalPutDmaAdapter((PADAPTER_OBJECT)v41);
        }
      }
    }
    v17 = -1073741820;
    v18 = DmaAdapter;
    v19 = 0;
    goto LABEL_28;
  }
  if ( PreviousMode )
  {
    v12 = (char *)KeySetInformation + v11;
    if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < KeySetInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v34, KeySetInformation, v11);
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
    v13 = 0;
  else
    v13 = 2;
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v18 = (struct _DMA_ADAPTER *)Object;
  DmaAdapter = (PADAPTER_OBJECT)Object;
  if ( v17 == -1073741790 )
  {
    if ( !v30 )
    {
      v17 = -1073741790;
      goto LABEL_67;
    }
    SeCaptureSubjectContext(&SubjectContext);
    v7 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
    {
      v17 = -1073741790;
      v19 = 0;
      v6 = 0;
      goto LABEL_28;
    }
    v43 = 0LL;
    v17 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v32, &v43, 0LL);
    v18 = (struct _DMA_ADAPTER *)v43;
    DmaAdapter = (PADAPTER_OBJECT)v43;
    if ( v17 < 0 )
    {
LABEL_67:
      v19 = 0;
      v6 = 0;
      goto LABEL_28;
    }
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v43) )
    {
      v17 = -1073741790;
      v19 = 0;
      v6 = 0;
      goto LABEL_28;
    }
    v17 = 0;
    v6 = 1;
  }
  v7 = v6;
  if ( v17 < 0 )
    goto LABEL_67;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && v18 )
    DmaOperations = v18->DmaOperations;
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
  {
LABEL_19:
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      v18 = DmaAdapter;
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(_QWORD *)&v45 = DmaAdapter;
        DWORD2(v45) = KeySetInformationClass;
        *(_QWORD *)&v46 = &v34;
        DWORD2(v46) = v35;
        LOBYTE(v15) = 1;
        v17 = CmpCallCallBacksEx(3, (unsigned int)&v45, 0, v15, 18, (__int64)DmaAdapter, (__int64)v39);
        if ( v17 < 0 )
        {
          if ( v17 == -1073740541 )
            v17 = 0;
          v19 = 0;
          goto LABEL_27;
        }
        v31 = 1;
      }
    }
    else
    {
      v18 = DmaAdapter;
    }
    if ( !v6
      || (v17 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v32, 2LL, &SubjectContext, &v36), v18 = DmaAdapter, v17 >= 0) )
    {
      v7 = v6;
      if ( KeySetInformationClass != KeySetHandleTagsInformation )
      {
        if ( KeySetInformationClass )
        {
          v23 = KeySetInformationClass - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              v25 = v24 - 1;
              if ( v25 )
              {
                if ( v25 != 1 )
                  goto LABEL_26;
                v26 = (unsigned int)v34;
                v27 = 4LL;
              }
              else
              {
                v26 = (unsigned int)v34;
                v27 = 3LL;
              }
            }
            else
            {
              v26 = (unsigned int)v34;
              v27 = 2LL;
            }
          }
          else
          {
            v26 = (unsigned int)v34;
            v27 = 1LL;
          }
          v28 = CmSetKeyFlags(v18, v27, v26);
        }
        else
        {
          v28 = CmSetLastWriteTimeKey(v18, &v34);
        }
        v17 = v28;
        goto LABEL_26;
      }
      v18[3].Size = v34;
      v17 = 0;
    }
LABEL_26:
    v19 = v31;
LABEL_27:
    v6 = 1;
    goto LABEL_28;
  }
  v22 = v18->DmaOperations;
  if ( (LODWORD(v22->PutDmaAdapter) & 0x80u) == 0 )
  {
    if ( (*((_DWORD *)v22->AllocateAdapterChannel + 40) & 0x100000) == 0 )
      goto LABEL_19;
    v17 = -1073741790;
    v19 = 0;
    v6 = 0;
  }
  else
  {
    v17 = -1073741790;
    v19 = 0;
    v6 = 0;
  }
LABEL_28:
  if ( v7 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v19
    && CmpCallBackCount
    && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock)
    && (_QWORD *)v39[0] != v39 )
  {
    v51 = 0;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0;
    v49 = v18;
    v50 = v17;
    v53 = v17;
    v52 = &v45;
    CmpCallCallBacksEx(18, (unsigned int)&v49, 0, 0, 18, (__int64)v18, (__int64)v39);
    v17 = v53;
  }
  if ( v6 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v18 = DmaAdapter;
  }
  if ( v18 )
    HalPutDmaAdapter(v18);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v29 = DmaOperations;
    LOBYTE(v29) = 20;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, _QWORD))((char *)&NlsMbCodePageTag + 7))(
      v29,
      v57,
      (unsigned int)v17,
      0LL,
      DmaOperations,
      0LL);
  }
  if ( v9 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v17;
}
