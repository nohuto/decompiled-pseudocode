/*
 * XREFs of NtDeleteValueKey @ 0x1406E1EF0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x140696830 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     CmDoVirtualTest @ 0x14032A994 (CmDoVirtualTest.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140347F68 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     CmPostCallbackNotificationEx @ 0x140645BA0 (CmPostCallbackNotificationEx.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406A5B3C (CmKeyBodyNeedsVirtualImage.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406DD3DC (CmpDoesBufferRequireCapturing.c)
 *     CmObReferenceObjectByHandle @ 0x1406DD40C (CmObReferenceObjectByHandle.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 */

NTSTATUS __cdecl NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  char v3; // r14
  _DMA_OPERATIONS *DmaOperations; // r13
  int PreviousMode; // r12d
  char v6; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // eax
  wchar_t *Buffer; // rcx
  unsigned int v12; // ebx
  char *v13; // rsi
  __int64 v14; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v16; // r15
  char v17; // r14
  char *i; // rcx
  struct _KTHREAD *v19; // rax
  __int64 v21; // r8
  int v22; // ebx
  void **v23; // rcx
  char v24; // [rsp+40h] [rbp-138h]
  NTSTATUS v25; // [rsp+44h] [rbp-134h]
  BOOLEAN v26; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v29; // [rsp+70h] [rbp-108h] BYREF
  __int64 v30; // [rsp+78h] [rbp-100h] BYREF
  HANDLE v31; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v33; // [rsp+90h] [rbp-E8h]
  _QWORD v34[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v35; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v37[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v38; // [rsp+100h] [rbp-78h]
  __int128 v39; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v40[4]; // [rsp+120h] [rbp-58h] BYREF

  v31 = KeyHandle;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v30 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v3 = 0;
  v29 = 0;
  memset(v40, 0, sizeof(v40));
  DmaOperations = 0LL;
  v33 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v40, 0x20000u);
  v24 = 0;
  DmaAdapter[0] = 0LL;
  v34[1] = v34;
  v34[0] = v34;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v26 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v22 = -1073741431;
LABEL_53:
    v25 = v22;
    goto LABEL_54;
  }
  v22 = CmObReferenceObjectByHandle(v31, 2u, v8, PreviousMode, DmaAdapter, &v30);
  v25 = v22;
  if ( v22 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_52;
    v22 = CmObReferenceObjectByHandle(v31, 0x20019u, v21, PreviousMode, DmaAdapter, &v30);
    v25 = v22;
    if ( v22 < 0 )
      goto LABEL_54;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter[0]) )
    {
LABEL_52:
      v22 = -1073741790;
      goto LABEL_53;
    }
    v3 = 1;
  }
  v6 = v3;
  if ( v22 < 0 )
  {
LABEL_54:
    v16 = 0;
    v17 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v33 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v35 = 0LL;
    if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
      ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)&ValueName->Length;
    LODWORD(v35) = v10;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v35 + 1) = Buffer;
    *(_OWORD *)Src = v35;
    if ( (_WORD)v10 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (unsigned __int64)Buffer + (unsigned __int16)v10;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
  }
  v12 = LOWORD(Src[0]);
  v13 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v13;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)v13) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v14, v12, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v22 = -1073741670;
      v25 = -1073741670;
      v6 = v3;
      v16 = 0;
      v17 = 0;
      goto LABEL_36;
    }
    v13 = (char *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v13;
    LOWORD(v12) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v22 = -1073741811;
  }
  else
  {
    if ( (LODWORD(DmaAdapter[0]->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
    {
      for ( i = &v13[2 * ((unsigned __int64)(unsigned __int16)v12 >> 1) - 2]; (_WORD)v12 && !*(_WORD *)i; i -= 2 )
      {
        LOWORD(v12) = v12 - 2;
        LOWORD(Src[0]) = v12;
      }
      v19 = KeGetCurrentThread();
      --v19->KernelApcDisable;
      v16 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(PADAPTER_OBJECT *)&v37[0] = DmaAdapter[0];
        *((_QWORD *)&v37[0] + 1) = Src;
        v22 = CmpCallCallBacksEx(2u, (__int64)v37, 0LL, 1, 0x11u, (__int64)DmaAdapter[0], (__int64)v34);
        if ( v22 < 0 )
        {
          if ( v22 == -1073740541 )
            v22 = 0;
          goto LABEL_68;
        }
        v24 = 1;
      }
      if ( !v3 )
        goto LABEL_33;
      LOBYTE(v9) = PreviousMode;
      v22 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v9, 2, (unsigned int)&SubjectContext, (__int64)&v29);
      v25 = v22;
      v6 = v3;
      if ( v22 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v39 = *(_OWORD *)Src;
        v22 = CmDeleteValueKey((__int64)DmaAdapter[0], (__int64)&v39, (__int64)v31, (v30 & 4) != 0);
        v25 = v22;
LABEL_34:
        v6 = v3;
LABEL_35:
        v17 = v24;
        goto LABEL_36;
      }
      v22 = -1073741790;
LABEL_68:
      v25 = v22;
      goto LABEL_34;
    }
    v22 = -1073741790;
  }
  v25 = v22;
  v6 = v3;
  v16 = 0;
  v17 = 0;
LABEL_36:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v17 )
  {
    v22 = CmPostCallbackNotificationEx(0x11u, (__int64)DmaAdapter[0], v22, (__int64)v37, 0LL, v34);
    v25 = v22;
  }
  if ( v16 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v22 = v25;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v23 = Src;
    LOBYTE(v23) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v23,
      v40,
      (unsigned int)v22,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v26 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v25;
  }
  return v22;
}
