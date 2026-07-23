/*
 * XREFs of NtSetValueKey @ 0x1406DCBB0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140696830 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x14094C020 (ExpWatchLicenseInfoWork.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140A414BC (ExpUpdateProductSuiteTypeInRegistry.c)
 *     CmpAddDockingInfo @ 0x140A589C8 (CmpAddDockingInfo.c)
 *     IopStoreSystemPartitionInformation @ 0x140A615B8 (IopStoreSystemPartitionInformation.c)
 *     InitSafeBoot @ 0x140A8C3D0 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032A994 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140347F68 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406A5B3C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406DD3DC (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        ULONG TitleIndex,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  char v7; // r13
  char v8; // r12
  unsigned __int8 v9; // di
  char v10; // si
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r8d
  BOOLEAN v13; // r14
  signed __int8 v14; // al
  unsigned __int16 Length; // di
  ULONG v16; // ebx
  void *v17; // r15
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r12d
  __int64 v22; // rcx
  PPRIVILEGE_SET v23; // rsi
  size_t v24; // r8
  wchar_t *v25; // rdi
  char v26; // bl
  struct _KTHREAD *v27; // rax
  int v28; // r14d
  int v30; // r8d
  int v31; // edi
  bool v32; // zf
  _DMA_OPERATIONS *v33; // rcx
  unsigned __int8 v34; // [rsp+40h] [rbp-198h]
  BOOLEAN v35; // [rsp+41h] [rbp-197h]
  char v36; // [rsp+42h] [rbp-196h]
  NTSTATUS v37; // [rsp+44h] [rbp-194h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-188h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp-178h] BYREF
  void *Src; // [rsp+68h] [rbp-170h]
  void *v41; // [rsp+70h] [rbp-168h]
  int v42; // [rsp+78h] [rbp-160h]
  ULONG v43; // [rsp+7Ch] [rbp-15Ch]
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-158h]
  ULONG v45; // [rsp+88h] [rbp-150h]
  __int64 v46; // [rsp+90h] [rbp-148h] BYREF
  HANDLE v47; // [rsp+98h] [rbp-140h]
  _DMA_OPERATIONS *DmaOperations; // [rsp+A0h] [rbp-138h]
  _QWORD v49[2]; // [rsp+A8h] [rbp-130h] BYREF
  struct _PRIVILEGE_SET *v50; // [rsp+B8h] [rbp-120h]
  __int128 v51; // [rsp+C0h] [rbp-118h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-108h] BYREF
  _QWORD v53[8]; // [rsp+F0h] [rbp-E8h] BYREF
  _OWORD v54[2]; // [rsp+130h] [rbp-A8h] BYREF
  _BYTE v55[64]; // [rsp+150h] [rbp-88h] BYREF

  v43 = Type;
  v45 = TitleIndex;
  v47 = KeyHandle;
  Src = Data;
  DestinationString = 0LL;
  v46 = 0LL;
  memset(v54, 0, sizeof(v54));
  DmaOperations = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v54, 0x20000u);
  v7 = 0;
  DmaAdapter = 0LL;
  v8 = 0;
  v36 = 0;
  v49[1] = v49;
  v49[0] = v49;
  memset(v53, 0, sizeof(v53));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v41 = 0LL;
  v50 = 0LL;
  v42 = 0;
  Privileges = 0LL;
  v9 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v34 = v9;
  v10 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v35 = v13;
  if ( !v13 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v31 = -1073741431;
    v37 = -1073741431;
LABEL_96:
    v26 = 0;
    goto LABEL_73;
  }
  v31 = CmObReferenceObjectByHandle((_DWORD)v47, 2, v12, v9, (__int64)&DmaAdapter, (__int64)&v46);
  v37 = v31;
  if ( v31 != -1073741790 )
  {
LABEL_6:
    v10 = v8;
    if ( v31 < 0 )
      goto LABEL_96;
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter )
      DmaOperations = DmaAdapter->DmaOperations;
    v14 = v34;
    if ( v34 == 1 )
    {
      v51 = 0LL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      LODWORD(v51) = *(_DWORD *)&ValueName->Length;
      *((_QWORD *)&v51 + 1) = ValueName->Buffer;
      DestinationString = (UNICODE_STRING)v51;
      DestinationString.MaximumLength = v51;
      Length = v51;
      if ( (_WORD)v51 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v51) > (wchar_t *)0x7FFFFFFF0000LL
          || (char *)DestinationString.Buffer + (unsigned __int16)v51 < (char *)DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v16 = DataSize;
      v17 = Src;
      if ( DataSize && ((unsigned __int64)Src + DataSize > 0x7FFFFFFF0000LL || (char *)Src + DataSize < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        Length = DestinationString.Length;
      }
    }
    else
    {
      DestinationString = *ValueName;
      v41 = 0LL;
      v16 = DataSize;
      if ( !DataSize )
      {
        Length = DestinationString.Length;
        v17 = Src;
        goto LABEL_19;
      }
      Length = DestinationString.Length;
      v17 = Src;
    }
    v14 = v34;
LABEL_19:
    if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v16 > 0x7FFFF000 )
    {
      v31 = -1073741811;
      v37 = -1073741811;
      v10 = v8;
      v26 = 0;
      goto LABEL_73;
    }
    v18 = Length;
    v19 = (Length + 7) & 0xFFFFFFF8;
    v20 = v19 + v16;
    if ( v19 + v16 < v16 )
    {
      v31 = -1073741811;
      v37 = -1073741811;
      v10 = v8;
      v13 = v35;
      v7 = 0;
      v26 = 0;
      goto LABEL_73;
    }
    v21 = v14;
    if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v14, DestinationString.Buffer)
      || (unsigned __int8)CmpDoesBufferRequireCapturing(v21, v17) )
    {
      if ( v20 )
      {
        if ( v20 <= 0x40 )
          goto LABEL_26;
        if ( v16 <= 0x40 )
        {
          if ( Length <= 0x40u && v16 < Length )
            v18 = v16;
        }
        else
        {
          v18 = Length > 0x40u ? v19 + v16 : v16;
        }
        if ( v18 )
        {
          Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v22, v18, 0x6E566D43u);
          if ( !Privileges )
          {
            v31 = -1073741670;
            v37 = -1073741670;
            v10 = v36;
            v13 = v35;
            v7 = 0;
            v26 = 0;
            goto LABEL_73;
          }
          Length = DestinationString.Length;
          if ( v18 == v16 )
          {
            v41 = v55;
            v23 = Privileges;
          }
          else
          {
            v41 = Privileges;
            if ( v18 == DestinationString.Length )
              v23 = (PPRIVILEGE_SET)v55;
            else
              v23 = (PPRIVILEGE_SET)((char *)Privileges + v19);
          }
        }
        else
        {
LABEL_26:
          v41 = v55;
          v23 = (PPRIVILEGE_SET)&v55[v19];
        }
      }
      else
      {
        v23 = v50;
      }
      if ( Length )
      {
        v24 = Length;
        v25 = (wchar_t *)v41;
        memmove(v41, DestinationString.Buffer, v24);
        DestinationString.Buffer = v25;
        Length = DestinationString.Length;
      }
      else
      {
        DestinationString.Buffer = 0LL;
      }
      if ( v16 )
      {
        memmove(v23, v17, v16);
        Src = v23;
        Length = DestinationString.Length;
      }
      else
      {
        Src = 0LL;
      }
    }
    if ( Length )
    {
      do
      {
        if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
          break;
        v32 = Length == 2;
        Length -= 2;
        DestinationString.Length = Length;
      }
      while ( !v32 );
    }
    if ( (LODWORD(DmaAdapter->DmaOperations->PutDmaAdapter) & 0x80u) != 0 )
    {
      v31 = -1073741790;
      v37 = -1073741790;
      v10 = v36;
      v7 = 0;
      v26 = 0;
      goto LABEL_72;
    }
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v28 = (int)Src;
      v7 = 0;
    }
    else
    {
      v53[0] = DmaAdapter;
      v53[1] = &DestinationString;
      v53[2] = __PAIR64__(v43, v45);
      v28 = (int)Src;
      v53[3] = Src;
      LODWORD(v53[4]) = v16;
      v31 = CmpCallCallBacksEx(1u, (__int64)v53, 0LL, 1, 0x10u, (__int64)DmaAdapter, (__int64)v49);
      if ( v31 < 0 )
      {
        if ( v31 == -1073740541 )
          v31 = 0;
        v37 = v31;
        v10 = v36;
        v7 = 0;
        goto LABEL_71;
      }
      v7 = 1;
    }
    if ( !v36
      || (v31 = CmKeyBodyReplicateToVirtual(&DmaAdapter, v34, 2u, (__int64)&SubjectContext),
          v37 = v31,
          v10 = v36,
          v31 >= 0) )
    {
      v31 = CmSetValueKey(
              (_DWORD)DmaAdapter,
              (unsigned int)&DestinationString,
              v43,
              v28,
              v16,
              (__int64)v47,
              (v46 & 4) != 0);
      v37 = v31;
      v10 = v36;
    }
LABEL_71:
    v26 = 1;
LABEL_72:
    v13 = v35;
    goto LABEL_73;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v10 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext) )
  {
    v31 = -1073741790;
    v37 = -1073741790;
    v26 = 0;
    goto LABEL_73;
  }
  v31 = CmObReferenceObjectByHandle((_DWORD)v47, 131097, v30, v34, (__int64)&DmaAdapter, (__int64)&v46);
  v37 = v31;
  if ( v31 < 0 )
    goto LABEL_96;
  if ( CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter) )
  {
    v8 = 1;
    v36 = 1;
    goto LABEL_6;
  }
  v31 = -1073741790;
  v37 = -1073741790;
  v26 = 0;
LABEL_73:
  if ( v10 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v31 = CmPostCallbackNotificationEx(0x10u, (__int64)DmaAdapter, v31, (__int64)v53, 0LL, v49);
    v37 = v31;
  }
  if ( v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v31 = v37;
  }
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v33 = DmaOperations;
    LOBYTE(v33) = 14;
    (*(void (__fastcall **)(_DMA_OPERATIONS *, _OWORD *, _QWORD, _QWORD, _DMA_OPERATIONS *, UNICODE_STRING *))((char *)&NlsMbCodePageTag + 7))(
      v33,
      v54,
      (unsigned int)v31,
      0LL,
      DmaOperations,
      &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v13 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v37;
  }
  return v31;
}
