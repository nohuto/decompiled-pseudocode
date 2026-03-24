/*
 * XREFs of CmpSetKeySecurity @ 0x1406E6CFC
 * Callers:
 *     CmpSecurityMethod @ 0x1406DDF10 (CmpSecurityMethod.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeSetSecurityAccessMask @ 0x14067BB98 (SeSetSecurityAccessMask.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpReleaseShutdownRundown @ 0x1406CE440 (CmpReleaseShutdownRundown.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmpAcquireShutdownRundown @ 0x1406CF870 (CmpAcquireShutdownRundown.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1406DDEE8 (CmpTryAcquireIXLockExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x1406DEBC0 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmUnlockHiveSecurity @ 0x1406E2FD4 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x1406E2FF4 (CmLockHiveSecurityExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1406E4DC4 (CmpGetKeyNodeForKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406E5AEC (CmpSetSecurityDescriptorInfo.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E54 (CmpReleaseKeyNodeForKcb.c)
 *     CmpCheckKcbStackAccess @ 0x140871734 (CmpCheckKcbStackAccess.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087829C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 *     CmpPartialPromoteSubkeys @ 0x140880110 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 */

__int64 __fastcall CmpSetKeySecurity(__int64 a1, int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  char v9; // si
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  __int64 v17; // r8
  struct _LOOKASIDE_LIST_EX *v18; // r9
  int started; // ebx
  __int64 v20; // r13
  char v21; // r10
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  BOOLEAN v25; // r13
  char v26; // di
  __int64 v27; // r8
  _QWORD *UnitOfWork; // rax
  char v30; // r15
  __int64 v31; // rcx
  __int64 KeyNodeForKcb; // rax
  __int64 v33; // [rsp+20h] [rbp-E0h]
  BOOLEAN v34; // [rsp+50h] [rbp-B0h]
  char v35; // [rsp+52h] [rbp-AEh]
  unsigned int v36; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v44[2]; // [rsp+98h] [rbp-68h] BYREF
  int *v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  __int64 v48; // [rsp+C0h] [rbp-40h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v50[3]; // [rsp+E8h] [rbp-18h] BYREF

  v46 = a6;
  v42 = 0xFFFFFFFFLL;
  v37 = 0LL;
  WORD1(v37) = -1;
  v47 = a4;
  v48 = a3;
  v44[1] = v44;
  v7 = 0;
  v45 = a2;
  v44[0] = v44;
  v8 = 0;
  v36 = 0;
  v9 = 0;
  v41 = 0LL;
  v10 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v39 = 0;
  v43 = 0LL;
  memset(v50, 0, sizeof(v50));
  v35 = 0;
  v40 = 0;
  v38 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v50, v11, v12, v13);
  while ( 1 )
  {
    v34 = CmpAcquireShutdownRundown();
    if ( !v34 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive(v15, v14);
    else
      CmpLockRegistry();
    v16 = *(_QWORD *)(a1 + 8);
    if ( CmpIsKcbImmutable(v16) )
    {
LABEL_35:
      started = -1073741790;
      goto LABEL_36;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v37, v16, v17, v18);
    if ( started < 0 )
      goto LABEL_36;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v37);
      v9 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v43);
      if ( started < 0 )
        goto LABEL_36;
      started = CmpPerformKeyBodyDeletionCheck(a1, v43);
      if ( started < 0 )
        goto LABEL_36;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 4152LL) & 0x20) != 0 )
      goto LABEL_35;
    if ( !*(_WORD *)(v16 + 66) || (unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) || v7 )
    {
      v20 = v43;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v45, &v39);
        LOBYTE(v22) = v21;
        started = CmpCheckKcbStackAccess((unsigned int)&v37, v20, v22, v39, 0);
        if ( started < 0 )
          goto LABEL_36;
      }
      if ( *(_WORD *)(v16 + 66) )
      {
        if ( !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
        {
          LOBYTE(v23) = 1;
          started = CmpPromoteKey(&v37, v23, 0LL);
          if ( started < 0 )
            goto LABEL_36;
          started = CmpPartialPromoteSubkeys(&v37);
          if ( started < 0 )
            goto LABEL_36;
        }
      }
      if ( v20 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v16 + 32) + 160LL) & 2) != 0 )
        {
          started = -1072103423;
        }
        else
        {
          UnitOfWork = CmpAllocateUnitOfWork();
          v10 = UnitOfWork;
          if ( UnitOfWork )
          {
            CmpTransEnlistUowInKcb(UnitOfWork, v16);
            started = CmpTransEnlistUowInCmTrans(v10, v20);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockExclusive(v16 + 248, v10, 0LL)
                && (unsigned __int8)CmpLockIXLockExclusive(v16 + 264, v10, 1LL) )
              {
LABEL_55:
                if ( !v35 )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                  v8 = 1;
                  CmLockHiveSecurityExclusive(*(_QWORD *)(v16 + 32));
                }
                LODWORD(v33) = a5;
                started = CmpSetSecurityDescriptorInfo(v16, v45, v48, v47, v33, v46, v20, v10, &SubjectContext);
                v30 = v8;
                if ( started >= 0 )
                {
                  started = 0;
                  v10 = 0LL;
                  if ( v8 )
                  {
                    CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
                    v30 = 0;
                  }
                  if ( *(_WORD *)(v16 + 66) && !(unsigned int)CmpGetEffectiveKcbSemantics(v16, 0LL) )
                  {
                    KeyNodeForKcb = CmpGetKeyNodeForKcb(v31, (__int64)&v42, v8);
                    *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
                    CmpReleaseKeyNodeForKcb(v16, &v42);
                    *(_BYTE *)(v16 + 65) = 2;
                  }
                  if ( v8 )
                  {
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
                    v8 = 0;
                  }
                  CmpReportNotifyForKcbStack((__int64)&v37, v20, 10, (__int64)v44);
                }
                if ( v30 )
                  CmUnlockHiveSecurity(*(_QWORD *)(v16 + 32));
                if ( v8 )
                  HvUnlockHiveFlusherShared(*(_QWORD *)(v16 + 32));
              }
              else
              {
                started = -1072103423;
              }
            }
            if ( v10 )
            {
              CmpRundownUnitOfWork((ULONG_PTR)v10);
              CmpFreeUnitOfWork(v10);
            }
          }
          else
          {
            started = -1073741670;
          }
        }
LABEL_36:
        v26 = 1;
        goto LABEL_37;
      }
      if ( CmpTryAcquireIXLockExclusive((_DWORD *)(v16 + 248)) && CmpTryAcquireIXLockExclusive((_DWORD *)(v16 + 264)) )
        goto LABEL_55;
      v25 = 0;
      started = CmpSnapshotTxOwnerArray(v24, &v36, &v41);
      if ( started < 0 )
        goto LABEL_36;
      if ( v9 )
        CmpUnlockKcbStack((__int64)&v37);
      v9 = 0;
      CmpCleanupKcbStack((__int64)&v37);
      v37 = 0LL;
      WORD1(v37) = -1;
      v38 = 0LL;
      CmpUnlockRegistry();
      v26 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v36, v41, v27, &v40);
      if ( started < 0 )
        goto LABEL_38;
      v7 = v35;
    }
    else
    {
      v7 = 1;
      v35 = 1;
      CmpUnlockKcbStack((__int64)&v37);
      v9 = 0;
      CmpCleanupKcbStack((__int64)&v37);
      v37 = 0LL;
      WORD1(v37) = -1;
      v38 = 0LL;
      CmpUnlockRegistry();
      CmpReleaseShutdownRundown();
    }
  }
  started = -1073741431;
  v26 = 0;
LABEL_37:
  v25 = v34;
LABEL_38:
  if ( v9 )
    CmpUnlockKcbStack((__int64)&v37);
  CmpCleanupKcbStack((__int64)&v37);
  if ( v26 )
    CmpUnlockRegistry();
  if ( v44[0] != v44 )
    CmpSignalDeferredPosts(v44);
  if ( v25 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess((__int64)v50);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
