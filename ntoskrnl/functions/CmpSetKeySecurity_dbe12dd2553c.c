__int64 __fastcall CmpSetKeySecurity(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  char v7; // r13
  char v8; // r12
  _QWORD *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // di
  ULONG_PTR v15; // rdi
  char v16; // si
  int started; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PPRIVILEGE_SET v21; // rcx
  __int64 v22; // rsi
  char v23; // r10
  int v24; // r8d
  ULONG_PTR v25; // rcx
  PPRIVILEGE_SET v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  PPRIVILEGE_SET v29; // rcx
  _QWORD *UnitOfWork; // rax
  signed __int64 *v32; // rbx
  __int64 v33; // rsi
  unsigned __int64 *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rsi
  char v37; // r14
  __int64 KeyNodeForKcb; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  __int64 v45; // [rsp+28h] [rbp-D8h]
  __int64 v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+30h] [rbp-D0h]
  char v48; // [rsp+50h] [rbp-B0h]
  char v49; // [rsp+52h] [rbp-AEh]
  unsigned int v50; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v52; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+80h] [rbp-80h] BYREF
  int v55; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v58[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int *v59; // [rsp+A8h] [rbp-58h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  v60 = a6;
  v56 = 0xFFFFFFFFLL;
  v61 = a4;
  v52 = 0LL;
  WORD1(v52) = -1;
  v62 = a3;
  v7 = 0;
  v59 = a2;
  v8 = 0;
  v50 = 0;
  v9 = 0LL;
  v57 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v54 = 0;
  v51 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v49 = 0;
  v55 = 0;
  *(_OWORD *)Privileges = 0LL;
  HvpGetBinContextInitialize((char *)&v56 + 4);
  v58[1] = v58;
  v58[0] = v58;
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    v48 = CmpAcquireShutdownRundown();
    v14 = v48;
    if ( !v48 )
      break;
    if ( v7 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v11, v10, v12, v13, v42, v44, v46);
    v15 = *(_QWORD *)(a1 + 8);
    v16 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 160LL) & 0x100000) != 0 )
    {
LABEL_39:
      started = -1073741790;
      goto LABEL_43;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v52, v15);
    if ( started < 0 )
      goto LABEL_43;
    if ( !v7 )
    {
      CmpLockKcbStackTopExclusiveRestShared(&v52);
      v49 = 1;
    }
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_43;
    if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
    {
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v51);
      if ( started < 0 )
        goto LABEL_43;
      started = CmpPerformKeyBodyDeletionCheck(a1, v51);
      if ( started < 0 )
        goto LABEL_43;
    }
    if ( KeGetCurrentThread()->PreviousMode && (*(_DWORD *)(*(_QWORD *)(v15 + 32) + 4112LL) & 0x20) != 0 )
      goto LABEL_39;
    if ( !*(_WORD *)(v15 + 66) || *(_BYTE *)(v15 + 65) || v7 )
    {
      v22 = v51;
      if ( *(_WORD *)(a1 + 4) )
      {
        SeSetSecurityAccessMask(*v59, &v54);
        LOBYTE(v24) = v23;
        started = CmpCheckKcbStackAccess((unsigned int)&v52, v22, v24, v54, 0);
        if ( started < 0 )
          goto LABEL_42;
      }
      if ( *(_WORD *)(v15 + 66) )
      {
        if ( !*(_BYTE *)(v15 + 65) )
        {
          LOBYTE(v10) = 1;
          started = CmpPromoteKey(&v52, v10, 0LL);
          if ( started < 0 )
            goto LABEL_42;
          started = CmpPartialPromoteSubkeys(&v52);
          if ( started < 0 )
            goto LABEL_42;
        }
      }
      if ( v22 )
      {
        v28 = *(unsigned int *)(*(_QWORD *)(v15 + 32) + 160LL);
        if ( (v28 & 2) != 0 )
        {
          started = -1072103423;
          goto LABEL_42;
        }
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v28, v10, v12);
        v9 = UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
          goto LABEL_42;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v15);
        started = CmpTransEnlistUowInCmTrans(v9, v22);
        if ( started < 0 )
          goto LABEL_92;
        if ( !CmpLockIXLockExclusive(v15 + 248, v9, 0) || !CmpLockIXLockExclusive(v15 + 264, v9, 1) )
        {
          started = -1072103423;
          goto LABEL_92;
        }
LABEL_61:
        if ( !v7 )
        {
          v32 = (signed __int64 *)(*(_QWORD *)(v15 + 32) + 72LL);
          v33 = KeAbPreAcquire((__int64)v32, 0LL);
          if ( _InterlockedCompareExchange64(v32, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v32, 0, v33, (__int64)v32);
          if ( v33 )
            *(_BYTE *)(v33 + 18) = 1;
          v34 = (unsigned __int64 *)(*(_QWORD *)(v15 + 32) + 1784LL);
          v8 = 1;
          v35 = KeAbPreAcquire((__int64)v34, 0LL);
          v36 = v35;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
            ExfAcquirePushLockExclusiveEx(v34, v35, (__int64)v34);
          if ( v36 )
            *(_BYTE *)(v36 + 18) = 1;
          v22 = v51;
        }
        started = CmpSetSecurityDescriptorInfo(
                    v15,
                    (_DWORD)v59,
                    v62,
                    v61,
                    a5,
                    v60,
                    v22,
                    (__int64)v9,
                    (__int64)&SubjectContext);
        v37 = v8;
        if ( started >= 0 )
        {
          v9 = 0LL;
          if ( v8 )
          {
            CmUnlockHiveSecurity(*(_QWORD *)(v15 + 32));
            v37 = 0;
          }
          if ( *(_WORD *)(v15 + 66) && !*(_BYTE *)(v15 + 65) )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v15, (__int64)&v56, v8);
            *(_BYTE *)(KeyNodeForKcb + 13) = *(_BYTE *)(KeyNodeForKcb + 13) & 0xFC | 2;
            v39 = *(_QWORD *)(v15 + 32);
            if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v39, &v56);
            else
              HvpReleaseCellPaged(v39, &v56);
            *(_BYTE *)(v15 + 65) = 2;
          }
          if ( v8 )
          {
            v40 = *(_QWORD *)(v15 + 32);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 72), 0LL, 17LL) != 17 )
              ExfReleasePushLockShared((signed __int64 *)(v40 + 72));
            KeAbPostRelease(v40 + 72);
            v22 = v51;
            v8 = 0;
          }
          CmpReportNotifyForKcbStack(&v52, v22, 10LL, v58, v43, v45, v47);
          started = 0;
        }
        if ( v37 )
          CmUnlockHiveSecurity(*(_QWORD *)(v15 + 32));
        if ( v8 )
        {
          v41 = *(_QWORD *)(v15 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v41 + 72));
          KeAbPostRelease(v41 + 72);
        }
        if ( v9 )
        {
LABEL_92:
          CmpRundownUnitOfWork(v9);
          ExFreePoolWithTag(v9, 0x77554D43u);
        }
LABEL_42:
        v16 = 1;
LABEL_43:
        v14 = v48;
        goto LABEL_44;
      }
      v25 = v15 + 248;
      if ( !*(_DWORD *)(v15 + 248) )
      {
        v25 = v15 + 264;
        if ( !*(_DWORD *)(v15 + 264) )
          goto LABEL_61;
      }
      v14 = 0;
      started = CmpSnapshotTxOwnerArray(v25, &v50, &v57);
      if ( started < 0 )
        goto LABEL_42;
      if ( v49 )
      {
        CmpUnlockKcbStack(&v52);
        v49 = 0;
      }
      v26 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v52 = 0LL;
      WORD1(v52) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v26, v10, v12, v13);
      v16 = 0;
      CmpReleaseShutdownRundown();
      started = CmpRollbackTransactionArray(v50, v57, v27, &v55);
      if ( started < 0 )
        goto LABEL_44;
    }
    else
    {
      v7 = 1;
      CmpUnlockKcbStack(&v52);
      v21 = Privileges[1];
      v49 = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v52 = 0LL;
      WORD1(v52) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v21, v18, v19, v20);
      CmpReleaseShutdownRundown();
    }
  }
  started = -1073741431;
  v16 = 0;
LABEL_44:
  if ( v49 )
    CmpUnlockKcbStack(&v52);
  v29 = Privileges[1];
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v16 )
    CmpUnlockRegistry(v29, v10, v12, v13);
  if ( v58[0] != v58 )
    CmpSignalDeferredPosts(v58);
  if ( v14 )
    CmpReleaseShutdownRundown();
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)started;
}
