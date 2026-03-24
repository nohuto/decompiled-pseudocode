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

__int64 __fastcall NtDeleteValueKey(void *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r14
  _DMA_OPERATIONS *DmaOperations; // r13
  int PreviousMode; // r12d
  char v8; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  char *v15; // rsi
  __int64 v16; // rcx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  char v18; // r15
  char v19; // r14
  char *i; // rcx
  struct _KTHREAD *v21; // rax
  __int64 v23; // r8
  signed int v24; // ebx
  void **v25; // rcx
  char v26; // [rsp+40h] [rbp-138h]
  unsigned int v27; // [rsp+44h] [rbp-134h]
  BOOLEAN v28; // [rsp+4Ah] [rbp-12Eh]
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+50h] [rbp-128h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-118h] BYREF
  int v31; // [rsp+70h] [rbp-108h] BYREF
  __int64 v32; // [rsp+78h] [rbp-100h] BYREF
  void *v33; // [rsp+80h] [rbp-F8h]
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-F0h]
  _DMA_OPERATIONS *v35; // [rsp+90h] [rbp-E8h]
  _QWORD v36[3]; // [rsp+98h] [rbp-E0h] BYREF
  __int128 v37; // [rsp+B0h] [rbp-C8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-B8h] BYREF
  _OWORD v39[2]; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v40; // [rsp+100h] [rbp-78h]
  __int128 v41; // [rsp+110h] [rbp-68h] BYREF
  LARGE_INTEGER v42[4]; // [rsp+120h] [rbp-58h] BYREF

  v33 = a1;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  v32 = 0LL;
  *(_OWORD *)Src = 0LL;
  Privileges = 0LL;
  v5 = 0;
  v31 = 0;
  memset(v42, 0, sizeof(v42));
  DmaOperations = 0LL;
  v35 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v42, 0x20000LL, a3, a4);
  v26 = 0;
  DmaAdapter[0] = 0LL;
  v36[1] = v36;
  v36[0] = v36;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v28 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v24 = -1073741431;
LABEL_53:
    v27 = v24;
    goto LABEL_54;
  }
  v24 = CmObReferenceObjectByHandle(v33, 2u, v10, PreviousMode, DmaAdapter, &v32);
  v27 = v24;
  if ( v24 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v8 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext) )
      goto LABEL_52;
    v24 = CmObReferenceObjectByHandle(v33, 0x20019u, v23, PreviousMode, DmaAdapter, &v32);
    v27 = v24;
    if ( v24 < 0 )
      goto LABEL_54;
    if ( !CmKeyBodyNeedsVirtualImage((__int64)DmaAdapter[0]) )
    {
LABEL_52:
      v24 = -1073741790;
      goto LABEL_53;
    }
    v5 = 1;
  }
  v8 = v5;
  if ( v24 < 0 )
  {
LABEL_54:
    v18 = 0;
    v19 = 0;
    goto LABEL_36;
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) && DmaAdapter[0] )
  {
    DmaOperations = DmaAdapter[0]->DmaOperations;
    v35 = DmaOperations;
  }
  if ( (_BYTE)PreviousMode == 1 )
  {
    v37 = 0LL;
    if ( a2 >= 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    v12 = *(_DWORD *)a2;
    LODWORD(v37) = v12;
    v13 = *(_QWORD *)(a2 + 8);
    *((_QWORD *)&v37 + 1) = v13;
    *(_OWORD *)Src = v37;
    if ( (_WORD)v12 )
    {
      if ( (v13 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = v13 + (unsigned __int16)v12;
      if ( v11 > 0x7FFFFFFF0000LL || v11 < v13 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a2;
  }
  v14 = LOWORD(Src[0]);
  v15 = (char *)((unsigned __int64)Src[1] & -(__int64)(LOWORD(Src[0]) != 0));
  Src[1] = v15;
  WORD1(Src[0]) = Src[0];
  if ( LOWORD(Src[0]) && CmpDoesBufferRequireCapturing(PreviousMode, (unsigned __int64)v15) )
  {
    TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v16, v14, 0x62634D43u);
    Privileges = TransientPoolWithQuotaTag;
    if ( !TransientPoolWithQuotaTag )
    {
      v24 = -1073741670;
      v27 = -1073741670;
      v8 = v5;
      v18 = 0;
      v19 = 0;
      goto LABEL_36;
    }
    v15 = (char *)TransientPoolWithQuotaTag;
    memmove(TransientPoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v15;
    LOWORD(v14) = Src[0];
  }
  if ( ((__int64)Src[0] & 1) != 0 )
  {
    LOWORD(Src[0]) = 0;
    v24 = -1073741811;
  }
  else
  {
    if ( (LODWORD(DmaAdapter[0]->DmaOperations->PutDmaAdapter) & 0x80u) == 0 )
    {
      for ( i = &v15[2 * ((unsigned __int64)(unsigned __int16)v14 >> 1) - 2]; (_WORD)v14 && !*(_WORD *)i; i -= 2 )
      {
        LOWORD(v14) = v14 - 2;
        LOWORD(Src[0]) = v14;
      }
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      v18 = 1;
      if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
      {
        *(PADAPTER_OBJECT *)&v39[0] = DmaAdapter[0];
        *((_QWORD *)&v39[0] + 1) = Src;
        v24 = CmpCallCallBacksEx(2u, (__int64)v39, 0LL, 1, 0x11u, (__int64)DmaAdapter[0], (__int64)v36);
        if ( v24 < 0 )
        {
          if ( v24 == -1073740541 )
            v24 = 0;
          goto LABEL_68;
        }
        v26 = 1;
      }
      if ( !v5 )
        goto LABEL_33;
      LOBYTE(v11) = PreviousMode;
      v24 = CmKeyBodyRemapToVirtual((unsigned int)DmaAdapter, v11, 2, (unsigned int)&SubjectContext, (__int64)&v31);
      v27 = v24;
      v8 = v5;
      if ( v24 < 0 )
        goto LABEL_35;
      if ( CmpVEEnabled && ((__int64)DmaAdapter[0]->DmaOperations->MapTransferEx & 0x1000000) != 0 )
      {
LABEL_33:
        v41 = *(_OWORD *)Src;
        v24 = CmDeleteValueKey((__int64)DmaAdapter[0], (__int64)&v41, (__int64)v33, (v32 & 4) != 0);
        v27 = v24;
LABEL_34:
        v8 = v5;
LABEL_35:
        v19 = v26;
        goto LABEL_36;
      }
      v24 = -1073741790;
LABEL_68:
      v27 = v24;
      goto LABEL_34;
    }
    v24 = -1073741790;
  }
  v27 = v24;
  v8 = v5;
  v18 = 0;
  v19 = 0;
LABEL_36:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v19 )
  {
    v24 = CmPostCallbackNotificationEx(0x11u, (__int64)DmaAdapter[0], v24, (__int64)v39, 0LL, v36);
    v27 = v24;
  }
  if ( v18 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v24 = v27;
  }
  if ( DmaAdapter[0] )
    HalPutDmaAdapter(DmaAdapter[0]);
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v25 = Src;
    LOBYTE(v25) = 15;
    (*(void (__fastcall **)(void **, LARGE_INTEGER *, _QWORD, _QWORD, _DMA_OPERATIONS *, void **))((char *)&NlsMbCodePageTag
                                                                                                 + 7))(
      v25,
      v42,
      (unsigned int)v24,
      0LL,
      DmaOperations,
      Src);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v28 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v27;
  }
  return (unsigned int)v24;
}
