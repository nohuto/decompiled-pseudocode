__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2)
{
  ULONG_PTR v4; // rdi
  char v5; // r15
  int started; // ebx
  __int64 v7; // r8
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  PPRIVILEGE_SET v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  signed __int64 *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdi
  _QWORD *UnitOfWork; // rax
  __int64 v36; // rsi
  __int64 v37; // [rsp+38h] [rbp-59h] BYREF
  __int128 v38; // [rsp+40h] [rbp-51h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-41h]
  int v40; // [rsp+60h] [rbp-31h] BYREF
  __int128 v41; // [rsp+68h] [rbp-29h] BYREF
  __int64 v42; // [rsp+78h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-9h] BYREF

  v37 = 0LL;
  v42 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v40 = 0;
  HvpGetCellContextReinitialize(&v37);
  v38 = 0LL;
  WORD1(v38) = -1;
  *(_OWORD *)Privileges = 0LL;
  v41 = 0LL;
  CmpAttachToRegistryProcess(&ApcState);
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    {
      started = -1073741431;
      v5 = 0;
      goto LABEL_25;
    }
    CmpLockRegistry(v22, v21, v23, v24);
    v4 = a1[1];
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 0x100000) != 0 )
      break;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v38, a1[1]);
    if ( started < 0 )
      goto LABEL_25;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v38);
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
      goto LABEL_53;
    if ( *(_BYTE *)(v4 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_53;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v42);
      if ( started < 0 )
        goto LABEL_53;
      v8 = v42;
      started = CmpPerformKeyBodyDeletionCheck(a1, v42);
      if ( started < 0 )
        goto LABEL_53;
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_53;
      }
      if ( v8 )
      {
        UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
        v36 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_53:
          CmpUnlockKcbStack((__int64)&v38);
          goto LABEL_25;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v4);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v36, v8);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v4 + 248), v36)
            && CmpLockIXLockExclusive(v4 + 264, (_QWORD *)v36, 1) )
          {
            *(_DWORD *)(v36 + 68) = 8;
            *(_QWORD *)(v36 + 88) = *a2;
            started = CmAddLogForAction(v36, 1u);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_53;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
        CmpRundownUnitOfWork((_QWORD *)v36);
        ExFreePoolWithTag((PVOID)v36, 0x77554D43u);
        goto LABEL_53;
      }
    }
    v9 = CmpTryAcquireKcbIXLocks(v4, 0LL, v7, (__int64)&v41);
    started = v9;
    if ( v9 == -1073741267 )
    {
      CmpLogTransactionAbortedWithChildName(v4, 0LL, 2u, v10, v41);
      CmpUnlockKcbStack((__int64)&v38);
      v14 = Privileges[1];
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v38 = 0LL;
      WORD1(v38) = -1;
      *(_OWORD *)Privileges = 0LL;
      CmpUnlockRegistry(v14, v11, v12, v13);
      v5 = 0;
      started = CmpAbortRollbackPacket((__int64)&v41, 0LL);
      if ( started < 0 )
        goto LABEL_25;
      CmpRetryBackOff(&v40, v15, v16);
      CmpCleanupRollbackPacket((__int64)&v41);
      v41 = 0LL;
    }
    else
    {
      if ( v9 < 0 )
        goto LABEL_53;
      if ( *(_DWORD *)(v4 + 40) != -1 )
      {
        v30 = (signed __int64 *)(*(_QWORD *)(v4 + 32) + 72LL);
        v31 = KeAbPreAcquire((__int64)v30, 0LL);
        if ( _InterlockedCompareExchange64(v30, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v30, 0, v31, (__int64)v30);
        if ( v31 )
          *(_BYTE *)(v31 + 18) = 1;
        started = HvpMarkCellDirty(*(_QWORD *)(v4 + 32), *(unsigned int *)(v4 + 40), 0);
        if ( started >= 0 )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v4, (__int64)&v37, 1) + 4) = *a2;
          v32 = *a2;
          v33 = *(_QWORD *)(v4 + 32);
          ++*(_QWORD *)(v4 + 304);
          *(_QWORD *)(v4 + 168) = v32;
          if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v33, &v37);
          else
            HvpReleaseCellPaged(v33, (unsigned int *)&v37);
          started = 0;
        }
        v34 = *(_QWORD *)(v4 + 32);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v34 + 72));
        KeAbPostRelease(v34 + 72);
        goto LABEL_53;
      }
      CmpUnlockKcbStack((__int64)&v38);
      started = CmpPromoteKey(&v38, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_25;
      CmpUnlockRegistry(v18, v17, v19, v20);
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v38 = 0LL;
      WORD1(v38) = -1;
      *(_OWORD *)Privileges = 0LL;
    }
  }
  started = -1073741790;
LABEL_25:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket((__int64)&v41);
  if ( v5 )
    CmpUnlockRegistry(v26, v25, v27, v28);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)started;
}
