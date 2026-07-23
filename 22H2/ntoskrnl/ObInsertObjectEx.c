/*
 * XREFs of ObInsertObjectEx @ 0x1406520B0
 * Callers:
 *     NtFilterToken @ 0x1405D9FB0 (NtFilterToken.c)
 *     AlpcpCreateClientPort @ 0x1405E054C (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x1405E103C (AlpcpAcceptConnectPort.c)
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     SeSubProcessToken @ 0x140603E44 (SeSubProcessToken.c)
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 *     MmCreateSpecialImageSection @ 0x140608BE4 (MmCreateSpecialImageSection.c)
 *     NtCreateEvent @ 0x140651360 (NtCreateEvent.c)
 *     NtCreateSemaphore @ 0x1406526A0 (NtCreateSemaphore.c)
 *     NtDuplicateToken @ 0x1406527E0 (NtDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140653590 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 *     NtCreateWaitCompletionPacket @ 0x1406783D0 (NtCreateWaitCompletionPacket.c)
 *     EtwpCreateUmReplyObject @ 0x14068051C (EtwpCreateUmReplyObject.c)
 *     NtCreateIoCompletion @ 0x1406806F0 (NtCreateIoCompletion.c)
 *     ObpCreateDirectoryObject @ 0x1406868E0 (ObpCreateDirectoryObject.c)
 *     AlpcpCreateConnectionPort @ 0x14068D758 (AlpcpCreateConnectionPort.c)
 *     ObCreateSymbolicLink @ 0x14068F21C (ObCreateSymbolicLink.c)
 *     NtAllocateReserveObject @ 0x1406962C0 (NtAllocateReserveObject.c)
 *     EtwpRealtimeConnect @ 0x14069B8B8 (EtwpRealtimeConnect.c)
 *     ExCreateCallback @ 0x1406A0050 (ExCreateCallback.c)
 *     NtCreateRegistryTransaction @ 0x1406A0E10 (NtCreateRegistryTransaction.c)
 *     WmipCreateGuidObject @ 0x1406B8578 (WmipCreateGuidObject.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     NtCreateTimer @ 0x1406C5B20 (NtCreateTimer.c)
 *     SepCreateClientSecurityEx @ 0x1406D6F20 (SepCreateClientSecurityEx.c)
 *     SeCopyClientToken @ 0x1406DAAF4 (SeCopyClientToken.c)
 *     PopPowerRequestCreateInfo @ 0x1406F73C0 (PopPowerRequestCreateInfo.c)
 *     ObInsertObject @ 0x140701A90 (ObInsertObject.c)
 *     NtCreateTimer2 @ 0x140702200 (NtCreateTimer2.c)
 *     NtCreateMutant @ 0x1407114E0 (NtCreateMutant.c)
 *     NtCreatePrivateNamespace @ 0x140718720 (NtCreatePrivateNamespace.c)
 *     IoCreateDevice @ 0x140719130 (IoCreateDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140719B60 (IoCreateStreamFileObjectEx2.c)
 *     PspCreateActivityReference @ 0x1407317E8 (PspCreateActivityReference.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407640AC (HalpDmaAllocateChildAdapterV2.c)
 *     MiSessionObjectCreate @ 0x140786384 (MiSessionObjectCreate.c)
 *     SeFilterToken @ 0x140798D50 (SeFilterToken.c)
 *     IoCreateDriver @ 0x1407A5330 (IoCreateDriver.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3E68 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x1407C59D0 (NtCreateKeyedEvent.c)
 *     PopEtEnergyTrackerCreate @ 0x1407CB968 (PopEtEnergyTrackerCreate.c)
 *     PspAllocatePartition @ 0x1407CC1D4 (PspAllocatePartition.c)
 *     NtCreateDebugObject @ 0x140885BD0 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140893950 (IoCreateController.c)
 *     TtmiCreateTerminal @ 0x1408FD57C (TtmiCreateTerminal.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C690 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeGetLogonSessionToken @ 0x140922A00 (SeGetLogonSessionToken.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     SeAssignSecurityEx2 @ 0x1402D6640 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402D66D0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140345810 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     SeDeassignSecurity @ 0x1406842B0 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x140689B54 (SeObjectCreateSaclAccessBits.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSecurityDescriptor @ 0x1406D5510 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1406D7CC0 (RtlValidSecurityDescriptor.c)
 *     ObpChargeQuotaForObject @ 0x1406D8FF8 (ObpChargeQuotaForObject.c)
 *     ObpAdjustCreatorAccessState @ 0x1406DBB88 (ObpAdjustCreatorAccessState.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        PADAPTER_OBJECT DmaAdapter,
        struct _ACCESS_STATE *a2,
        ACCESS_MASK a3,
        int a4,
        char a5,
        __int64 a6,
        unsigned __int64 *a7)
{
  __int64 v9; // rsi
  PADAPTER_OBJECT v10; // r15
  __int64 v11; // r9
  char *v12; // rdx
  int Handle; // ebx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // r13
  struct _DMA_ADAPTER *v16; // rax
  char *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int64 v21; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  _BYTE *v25; // rbx
  char *v26; // rcx
  __int64 v27; // rdx
  int v28; // ebx
  PSECURITY_DESCRIPTOR v29; // rdx
  void *v30; // rcx
  bool v31; // zf
  int v32; // ecx
  struct _KTHREAD *v33; // rax
  int v34; // r15d
  __int64 v35; // r8
  __int64 v36; // r9
  struct _KTHREAD *v37; // rax
  int v38; // eax
  ULONG_PTR v39; // rcx
  __int64 v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  int v43; // [rsp+40h] [rbp-C0h]
  PVOID *v44; // [rsp+48h] [rbp-B8h]
  PVOID *v45; // [rsp+48h] [rbp-B8h]
  char PreviousMode; // [rsp+60h] [rbp-A0h]
  int v48; // [rsp+68h] [rbp-98h] BYREF
  int v49; // [rsp+6Ch] [rbp-94h]
  ULONG Index[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+80h] [rbp-80h] BYREF
  char *v53; // [rsp+88h] [rbp-78h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v56[20]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v57[28]; // [rsp+160h] [rbp+60h] BYREF

  v54 = a6;
  v49 = a4;
  memset(v57, 0, sizeof(v57));
  memset(v56, 0, sizeof(v56));
  v9 = *(_QWORD *)&DmaAdapter[-1].Version;
  v10 = DmaAdapter - 3;
  v11 = 0LL;
  v12 = 0LL;
  Handle = 0;
  v14 = LOBYTE(DmaAdapter[-2].DmaOperations) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)DmaAdapter - 48) >> 8);
  v53 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  if ( (BYTE2(DmaAdapter[-2].DmaOperations) & 2) != 0 )
  {
    v16 = (struct _DMA_ADAPTER *)ObpInfoMaskToOffset[BYTE2(DmaAdapter[-2].DmaOperations) & 3];
    v17 = (char *)((char *)v10 - (char *)v16);
    if ( v10 != v16 )
    {
      v12 = v17 + 8;
      v53 = v17 + 8;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v19 = (unsigned __int8)CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  PreviousMode = CurrentThread->PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v12 && !*(_QWORD *)(v9 + 32) )
  {
    *(_QWORD *)&v10[2].Version = 0LL;
    if ( a7 )
    {
      v20 = v49 + 1;
      v44 = (PVOID *)v54;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, DmaAdapter, a3, 0LL, v20, *(_DWORD *)v9, v19, 0LL, 0, v44, a7);
    }
    v21 = *(_QWORD *)(v9 + 32);
    if ( v21 )
    {
      LOBYTE(v19) = 1;
      SeReleaseSecurityDescriptor(v21, *(unsigned __int8 *)(v9 + 16), v19, v11);
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    L = CurrentPrcb->PPLookasideList[4].P;
    ++L->TotalFrees;
    if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
    {
      ++L->FreeMisses;
      L = CurrentPrcb->PPLookasideList[4].L;
      ++L->TotalFrees;
      if ( LOWORD(L->ListHead.Alignment) >= L->Depth )
      {
        ++L->FreeMisses;
        ((void (__fastcall *)(__int64))L->FreeEx)(v9);
        HalPutDmaAdapter(DmaAdapter);
        return (unsigned int)Handle;
      }
    }
    RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v9);
    goto LABEL_15;
  }
  if ( !a2 )
  {
    a2 = (struct _ACCESS_STATE *)v56;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->ApcState.Process, &SubjectContext);
    Handle = SepCreateAccessStateFromSubjectContext(&SubjectContext, v56, v57, a3, &v15->TypeInfo.GenericMapping);
    if ( Handle < 0 )
    {
LABEL_15:
      HalPutDmaAdapter(DmaAdapter);
      return (unsigned int)Handle;
    }
  }
  v25 = *(_BYTE **)(v9 + 32);
  a2->SecurityDescriptor = v25;
  if ( !v25 )
  {
LABEL_23:
    v26 = v53;
    if ( !v53 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || *(char **)(v9 + 32) != v53) )
    {
      v27 = (__int64)a2->SecurityDescriptor;
      Index[1] = 0;
      v48 = 0;
      SecurityDescriptor = 0LL;
      P = 0LL;
      Index[0] = 8;
      v28 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, v27, 0LL, &v48, Index);
      if ( v28 < 0 )
      {
LABEL_32:
        HalPutDmaAdapter(DmaAdapter);
        if ( a2 == (struct _ACCESS_STATE *)v56 )
        {
          SepDeleteAccessState((__int64)a2);
          SeReleaseSubjectContext(&a2->SubjectSecurityContext);
        }
        return (unsigned int)v28;
      }
      LODWORD(v29) = (_DWORD)P;
      if ( !P )
        v29 = a2->SecurityDescriptor;
      v28 = SeAssignSecurityEx2(
              0,
              (int)v29,
              (int)&SecurityDescriptor,
              0LL,
              v15 == ObpDirectoryObjectType,
              (16 * (a5 & 1)) | (unsigned int)v48,
              Index,
              (__int64)&a2->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v28 < 0 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_32;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      LOBYTE(v43) = KeGetCurrentThread()->PreviousMode;
      v28 = v15->TypeInfo.SecurityProcedure(
              DmaAdapter,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v15->TypeInfo.GenericMapping,
              v43);
      if ( v28 < 0 )
      {
        SeDeassignSecurity(&SecurityDescriptor);
        goto LABEL_32;
      }
      v30 = *(void **)(v9 + 32);
      if ( *(_BYTE *)(v9 + 16) <= 1u && v30 )
        ExFreePoolWithTag(v30, 0);
      v26 = v53;
      v10 = DmaAdapter - 3;
      *(_QWORD *)(v9 + 32) = 0LL;
      a2->SecurityDescriptor = 0LL;
    }
    *(_QWORD *)&v10[2].Version = 0LL;
    if ( a7 )
    {
      v31 = v26 == 0LL;
      v32 = v49;
      v33 = 0LL;
      if ( !v31 )
        v33 = (struct _KTHREAD *)v9;
      v45 = (PVOID *)v54;
      *a7 = 0LL;
      v34 = ObpCreateHandle(0, DmaAdapter, 0, a2, v32 + 1, *(_DWORD *)v9, PreviousMode, v33, 0, v45, a7);
      HalPutDmaAdapter(DmaAdapter);
      goto LABEL_55;
    }
    if ( a2 != (struct _ACCESS_STATE *)v56 )
    {
      v34 = ObpAdjustCreatorAccessState(a2);
      if ( v34 < 0 )
        goto LABEL_54;
      v10 = DmaAdapter - 3;
    }
    v37 = KeGetCurrentThread();
    --v37->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[1], 0LL);
    v38 = ObpChargeQuotaForObject(v10, KeGetCurrentThread()->ApcState.Process, 0LL);
    v39 = (ULONG_PTR)&v10[1];
    v34 = v38;
    ExReleasePushLockEx(v39, 0LL);
    KeLeaveCriticalRegion();
    if ( v34 >= 0 )
    {
LABEL_55:
      v40 = *(_QWORD *)(v9 + 32);
      if ( v40 )
      {
        LOBYTE(v35) = 1;
        SeReleaseSecurityDescriptor(v40, *(unsigned __int8 *)(v9 + 16), v35, v36);
        *(_QWORD *)(v9 + 32) = 0LL;
      }
      v41 = KeGetCurrentPrcb();
      v42 = v41->PPLookasideList[4].P;
      ++v42->TotalFrees;
      if ( LOWORD(v42->ListHead.Alignment) < v42->Depth
        || (++v42->FreeMisses,
            v42 = v41->PPLookasideList[4].L,
            ++v42->TotalFrees,
            LOWORD(v42->ListHead.Alignment) < v42->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v42->ListHead, (PSLIST_ENTRY)v9);
      }
      else
      {
        ++v42->FreeMisses;
        ((void (__fastcall *)(__int64))v42->FreeEx)(v9);
      }
      if ( a2 == (struct _ACCESS_STATE *)v56 )
      {
        SepDeleteAccessState((__int64)a2);
        SeReleaseSubjectContext(&a2->SubjectSecurityContext);
      }
      return (unsigned int)v34;
    }
LABEL_54:
    HalPutDmaAdapter(DmaAdapter);
    goto LABEL_55;
  }
  if ( RtlValidSecurityDescriptor(v25) )
  {
    if ( (v25[2] & 0x10) != 0 && (a2->PreviouslyGrantedAccess & 0x1000000) == 0 )
      a2->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v25);
    goto LABEL_23;
  }
  HalPutDmaAdapter(DmaAdapter);
  if ( a2 == (struct _ACCESS_STATE *)v56 )
  {
    SepDeleteAccessState((__int64)a2);
    SeReleaseSubjectContext(&a2->SubjectSecurityContext);
  }
  return 3221225593LL;
}
