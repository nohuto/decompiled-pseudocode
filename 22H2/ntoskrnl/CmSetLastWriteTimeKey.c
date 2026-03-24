/*
 * XREFs of CmSetLastWriteTimeKey @ 0x14086E18C
 * Callers:
 *     NtSetInformationKey @ 0x1405F3A00 (NtSetInformationKey.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14066D87C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpGetKeyNodeForKcb @ 0x1406E4DC4 (CmpGetKeyNodeForKcb.c)
 *     CmpCleanupRollbackPacket @ 0x14071B8E8 (CmpCleanupRollbackPacket.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071C810 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076D874 (CmpTryAcquireKcbIXLocks.c)
 *     CmpAbortRollbackPacket @ 0x14077A7CC (CmpAbortRollbackPacket.c)
 *     CmpRetryBackOff @ 0x140875090 (CmpRetryBackOff.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 */

__int64 __fastcall CmSetLastWriteTimeKey(_QWORD *a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rsi
  __int64 v7; // r8
  struct _LOOKASIDE_LIST_EX *v8; // r9
  ULONG_PTR v9; // rdi
  char v10; // r12
  int started; // ebx
  __int64 v12; // r8
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *UnitOfWork; // rax
  __int64 v19; // [rsp+28h] [rbp-49h] BYREF
  __int128 v20; // [rsp+30h] [rbp-41h] BYREF
  __int128 v21; // [rsp+40h] [rbp-31h]
  int v22; // [rsp+50h] [rbp-21h] BYREF
  __int128 v23; // [rsp+58h] [rbp-19h] BYREF
  __int64 v24; // [rsp+68h] [rbp-9h] BYREF
  _OWORD v25[3]; // [rsp+70h] [rbp-1h] BYREF

  v24 = 0LL;
  v22 = 0;
  v4 = 0LL;
  v19 = 0xFFFFFFFFLL;
  v20 = 0LL;
  memset(v25, 0, sizeof(v25));
  WORD1(v20) = -1;
  v21 = 0LL;
  v23 = 0LL;
  CmpAttachToRegistryProcess((__int64)v25, (__int64)a2, a3, a4);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    CmpLockRegistry();
    v9 = a1[1];
    v10 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_39;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v20, a1[1], v7, v8);
    if ( started < 0 )
      goto LABEL_39;
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v20);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_36;
    if ( *(_BYTE *)(v9 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_36;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v24);
      if ( started < 0 )
        goto LABEL_36;
      v13 = v24;
      started = CmpPerformKeyBodyDeletionCheck((__int64)a1, v24);
      if ( started < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
        goto LABEL_36;
      }
      if ( v13 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v4 = (__int64)UnitOfWork;
        if ( !UnitOfWork )
        {
          started = -1073741670;
LABEL_36:
          CmpUnlockKcbStack((__int64)&v20);
          goto LABEL_39;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v4, v13);
        if ( started >= 0 )
        {
          if ( CmpLockIXLockIntent((unsigned int *)(v9 + 248), v4) && CmpLockIXLockExclusive(v9 + 264, (_QWORD *)v4, 1) )
          {
            *(_DWORD *)(v4 + 68) = 8;
            *(_QWORD *)(v4 + 88) = *a2;
            started = CmAddLogForAction(v4, 1);
            if ( started >= 0 )
            {
              started = 0;
              goto LABEL_36;
            }
          }
          else
          {
            started = -1072103423;
          }
        }
LABEL_32:
        if ( v4 )
        {
          CmpRundownUnitOfWork((_QWORD *)v4);
          CmpFreeUnitOfWork(v4);
        }
        goto LABEL_36;
      }
    }
    v14 = CmpTryAcquireKcbIXLocks(v9, 0LL, v12, (__int64)&v23);
    started = v14;
    if ( v14 == -1073741267 )
    {
      CmpLogTransactionAbortedForRollbackPacket(v9, 2u);
      CmpUnlockKcbStack((__int64)&v20);
      CmpCleanupKcbStack((__int64)&v20);
      v20 = 0LL;
      WORD1(v20) = -1;
      v21 = 0LL;
      CmpUnlockRegistry();
      v10 = 0;
      started = CmpAbortRollbackPacket((__int64)&v23, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpRetryBackOff(&v22);
      CmpCleanupRollbackPacket((__int64)&v23);
      v23 = 0LL;
    }
    else
    {
      if ( v14 < 0 )
        goto LABEL_36;
      if ( *(_DWORD *)(v9 + 40) != -1 )
      {
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        if ( (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
        {
          *(_QWORD *)(CmpGetKeyNodeForKcb(v9, (__int64)&v19, 1) + 4) = *a2;
          v15 = *a2;
          v16 = *(_QWORD *)(v9 + 32);
          ++*(_QWORD *)(v9 + 304);
          *(_QWORD *)(v9 + 168) = v15;
          (*(void (__fastcall **)(__int64, __int64 *))(v16 + 16))(v16, &v19);
          started = 0;
        }
        else
        {
          started = -1073741443;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        goto LABEL_32;
      }
      CmpUnlockKcbStack((__int64)&v20);
      started = CmpPromoteKey(&v20, 0LL, 0LL);
      if ( started < 0 )
        goto LABEL_39;
      CmpUnlockRegistry();
      CmpCleanupKcbStack((__int64)&v20);
      v20 = 0LL;
      WORD1(v20) = -1;
      v21 = 0LL;
    }
  }
  started = -1073741431;
  v10 = 0;
LABEL_39:
  CmpCleanupKcbStack((__int64)&v20);
  CmpCleanupRollbackPacket((__int64)&v23);
  if ( v10 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v25);
  return (unsigned int)started;
}
