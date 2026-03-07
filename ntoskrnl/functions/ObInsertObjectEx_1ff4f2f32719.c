__int64 __fastcall ObInsertObjectEx(
        char *Object,
        PACCESS_STATE AccessState,
        unsigned int a3,
        int a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _SLIST_ENTRY *v9; // rsi
  char *v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // rbx
  KPROCESSOR_MODE PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v18; // rax
  ULONG_PTR v19; // rax
  _SLIST_ENTRY *v20; // r13
  char *v21; // rax
  PSECURITY_DESCRIPTOR v22; // rdx
  int v23; // r13d
  PVOID v24; // r12
  _SLIST_ENTRY *v25; // rcx
  struct _SLIST_ENTRY *v26; // rax
  int v27; // eax
  PVOID v28; // rcx
  int v29; // r12d
  __int64 v30; // r8
  __int64 v31; // r9
  _SLIST_ENTRY *v32; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  signed __int64 v35; // r8
  _KPROCESS *v36; // rdx
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  PACCESS_TOKEN v39; // rcx
  int v41; // ecx
  unsigned int Handle; // ebx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  PVOID v46; // r15
  struct _KTHREAD *v47; // rax
  char *v48; // rcx
  char *v49; // rax
  ULONG_PTR v50; // rcx
  _QWORD *ClientToken; // rax
  _QWORD *v52; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  _QWORD *PrimaryToken; // rax
  int v55; // [rsp+30h] [rbp-D0h]
  int v56; // [rsp+40h] [rbp-C0h]
  __int64 v57; // [rsp+48h] [rbp-B8h]
  KPROCESSOR_MODE v58; // [rsp+60h] [rbp-A0h]
  unsigned int v59; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v60; // [rsp+68h] [rbp-98h]
  PVOID Objecta; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+78h] [rbp-88h]
  char *v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp-70h] BYREF
  struct _KTHREAD *v66; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  _QWORD *v70; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v71; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *Flink; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v73; // [rsp+D8h] [rbp-28h]
  _QWORD v74[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v75[28]; // [rsp+180h] [rbp+80h] BYREF

  v59 = a3;
  Objecta = Object;
  v69 = a6;
  v62 = a4;
  memset(v75, 0, sizeof(v75));
  memset(v74, 0, sizeof(v74));
  v9 = (struct _SLIST_ENTRY *)*((_QWORD *)Object - 2);
  v10 = Object - 48;
  v11 = 0LL;
  v12 = 0x140000000uLL;
  v13 = 0LL;
  v14 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v63 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  if ( (*(Object - 22) & 2) != 0 )
  {
    v48 = (char *)ObpInfoMaskToOffset[*(Object - 22) & 3];
    v49 = (char *)(v10 - v48);
    if ( v10 != v48 )
    {
      v13 = v49 + 8;
      v63 = v49 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v58 = PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !v9[2].Next )
  {
    *((_QWORD *)v10 + 4) = 0LL;
    if ( a7 )
    {
      v41 = v62 + 1;
      v57 = v69;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0LL, Object, v59, 0LL, v41, v9->Next, PreviousMode, 0LL, 0, v57, a7);
    }
    else
    {
      Handle = 0;
    }
    Next = v9[2].Next;
    if ( Next )
    {
      LOBYTE(v11) = 1;
      SeReleaseSecurityDescriptor(Next, LOBYTE(v9[1].Next), v11, v12);
      v9[2].Next = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v9);
      ObfDereferenceObject(Object);
      return Handle;
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *))P->FreeEx)(v9);
      ObfDereferenceObject(Object);
      return Handle;
    }
  }
  if ( !AccessState )
  {
    CurrentThread = KeGetCurrentThread();
    AccessState = (PACCESS_STATE)v74;
    v66 = CurrentThread;
    v71 = 0LL;
    Process = CurrentThread->ApcState.Process;
    Flink = Process[1].Header.WaitListHead.Flink;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v73 = KeGetCurrentThread();
      --v73->KernelApcDisable;
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&v66[1].SwapListEntry + 1) & 8) != 0 )
      {
        v60 = (PVOID)(*(_QWORD *)((char *)&v66[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v60, 0x75536553u);
        LODWORD(v71) = *((_DWORD *)&v66[1].0 + 1) & 3;
      }
      else
      {
        v60 = 0LL;
      }
      v50 = BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        v50 = BugCheckParameter2;
      }
      KeAbPostRelease(v50);
      KeLeaveCriticalRegionThread((__int64)v73);
      v18 = v60;
    }
    else
    {
      v18 = 0LL;
      v60 = 0LL;
    }
    v70 = v18;
    v19 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
    *((_QWORD *)&v71 + 1) = v19;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 1144) + 284LL));
        if ( *((_QWORD *)&v71 + 1) == SepTokenLeakToken )
          __debugbreak();
        v52 = v70;
      }
      else
      {
        v52 = v60;
      }
      if ( v52 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v52[143] + 284LL));
        if ( v70 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v60) = SepCreateAccessStateFromSubjectContext(
                     &v70,
                     v74,
                     v75,
                     v59,
                     &v15->TypeInfo.GenericMapping.GenericRead);
    if ( (int)v60 < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v60;
    }
  }
  v20 = v9[2].Next;
  AccessState->SecurityDescriptor = v20;
  if ( v20 )
  {
    if ( !RtlValidSecurityDescriptor(v20) )
    {
      ObfDereferenceObject(Objecta);
      if ( AccessState == (PACCESS_STATE)v74 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (BYTE2(v20->Next) & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v20);
  }
  v21 = v63;
  if ( !v63 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || v9[2].Next) )
  {
    v22 = AccessState->SecurityDescriptor;
    v59 = 0;
    SecurityDescriptor = 0LL;
    v64 = 8LL;
    v23 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, (__int64)v22, 0LL, &v59, &v64);
    if ( v23 < 0 )
    {
      v24 = Objecta;
    }
    else
    {
      v59 |= 16 * (a5 & 1);
      v23 = SeAssignSecurityEx2(
              0,
              (int)AccessState->SecurityDescriptor,
              (int)&SecurityDescriptor,
              0LL,
              v15 == ObpDirectoryObjectType,
              v59,
              &v64,
              (__int64)&AccessState->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v23 < 0 )
      {
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        v24 = Objecta;
        goto LABEL_92;
      }
      v24 = Objecta;
      LOBYTE(v56) = KeGetCurrentThread()->PreviousMode;
      v23 = v15->TypeInfo.SecurityProcedure(
              Objecta,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v15->TypeInfo.GenericMapping,
              v56);
      if ( v23 >= 0 )
      {
        v25 = v9[2].Next;
        if ( LOBYTE(v9[1].Next) <= 1u && v25 )
          ExFreePoolWithTag(v25, 0);
        PreviousMode = v58;
        v21 = v63;
        v9[2].Next = 0LL;
        AccessState->SecurityDescriptor = 0LL;
        goto LABEL_19;
      }
      SeDeassignSecurity(&SecurityDescriptor);
    }
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
LABEL_92:
    ObfDereferenceObject(v24);
    if ( AccessState == (PACCESS_STATE)v74 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(p_SubjectSecurityContext);
    }
    return (unsigned int)v23;
  }
LABEL_19:
  *((_QWORD *)v10 + 4) = 0LL;
  if ( a7 )
  {
    *a7 = 0LL;
    if ( v21 )
      v26 = v9;
    else
      v26 = 0LL;
    LOBYTE(v55) = PreviousMode;
    v27 = ObpCreateHandle(0LL, Objecta, 0LL, AccessState, v62 + 1, v9->Next, v55, v26, 0, v69, a7);
    v28 = Objecta;
    v29 = v27;
    goto LABEL_23;
  }
  if ( AccessState == (PACCESS_STATE)v74 )
  {
    v46 = Objecta;
    goto LABEL_52;
  }
  if ( ((__int64)v9->Next & 0x400) != 0 )
    PreviousMode = 1;
  v46 = Objecta;
  v29 = ObpAdjustCreatorAccessState(AccessState, PreviousMode, v15, (__int64)Objecta);
  if ( v29 >= 0 )
  {
LABEL_52:
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 16), 0LL);
    v29 = ObpChargeQuotaForObject((__int64)v10, (__int64)KeGetCurrentThread()->ApcState.Process);
    ExReleasePushLockEx((__int64 *)v10 + 2, 0LL);
    KeLeaveCriticalRegion();
    if ( v29 >= 0 )
      goto LABEL_24;
  }
  v28 = v46;
LABEL_23:
  ObfDereferenceObject(v28);
LABEL_24:
  v32 = v9[2].Next;
  if ( v32 )
  {
    LOBYTE(v30) = 1;
    SeReleaseSecurityDescriptor(v32, LOBYTE(v9[1].Next), v30, v31);
    v9[2].Next = 0LL;
  }
  v33 = KeGetCurrentPrcb();
  L = v33->PPLookasideList[4].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = v33->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, v9);
  }
  else
  {
    ++L->FreeMisses;
    ((void (__fastcall *)(struct _SLIST_ENTRY *))L->FreeEx)(v9);
  }
  if ( AccessState == (PACCESS_STATE)v74 )
  {
    SepDeleteAccessState((__int64)AccessState);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      ClientToken = AccessState->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v35 = (signed __int64)AccessState->SubjectSecurityContext.PrimaryToken;
    v36 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v36[1].Affinity.StaticBitmap[5]);
    v37 = v36[1].Affinity.StaticBitmap[5];
    if ( (v35 ^ (unsigned __int64)v37) >= 0xF )
    {
LABEL_69:
      ObfDereferenceObjectWithTag((PVOID)v35, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)&v36[1].Affinity.StaticBitmap[5], v37 + 1, v37);
        if ( v38 == v37 )
          break;
        if ( (v35 ^ (unsigned __int64)v37) >= 0xF )
          goto LABEL_69;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v35 - 48, 0, 1u, 0x75536553u);
    }
    v39 = AccessState->SubjectSecurityContext.ClientToken;
    AccessState->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v39 )
      ObfDereferenceObjectWithTag(v39, 0x75536553u);
    AccessState->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v29;
}
