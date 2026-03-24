/*
 * XREFs of CmpPerformUnloadKey @ 0x14066CBFC
 * Callers:
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402517A0 (ExRundownCompleted.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x1403427F0 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1403F8BE0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpFreezeHive @ 0x14066C5D0 (CmpFreezeHive.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14066D074 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmShutdownCmRM @ 0x14066D518 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14066D82C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14066D854 (CmCloseRmHandle.c)
 *     CmpLogTransactionAbortedForRollbackPacket @ 0x14066D87C (CmpLogTransactionAbortedForRollbackPacket.c)
 *     CmSnapshotRMTxArray @ 0x14066E8B8 (CmSnapshotRMTxArray.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmpFlushNotify @ 0x1406E3C7C (CmpFlushNotify.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406EB3B0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1406EB4E0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406EB544 (LOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x14071B8E8 (CmpCleanupRollbackPacket.c)
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 *     CmpUnfreezeHive @ 0x140730F8C (CmpUnfreezeHive.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14076D874 (CmpTryAcquireKcbIXLocks.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x140772784 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpInvalidateSubtree @ 0x1407729A0 (CmpInvalidateSubtree.c)
 *     CmpAbortRollbackPacket @ 0x14077A7CC (CmpAbortRollbackPacket.c)
 *     CmObliterateRMTxArray @ 0x140872A64 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x14087639C (CmpLogUnsupportedOperation.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  int v10; // edi
  __int64 v11; // r14
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  char v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  void *v27; // rdi
  void *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-A9h] BYREF
  char v32; // [rsp+30h] [rbp-79h]
  _BYTE v33[3]; // [rsp+31h] [rbp-78h] BYREF
  int v34; // [rsp+34h] [rbp-75h] BYREF
  __int128 v35; // [rsp+38h] [rbp-71h] BYREF
  _QWORD v36[2]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v37; // [rsp+58h] [rbp-51h] BYREF
  __int64 v38; // [rsp+68h] [rbp-41h]
  _OWORD v39[2]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v40[3]; // [rsp+90h] [rbp-19h] BYREF

  v38 = a4;
  v33[0] = 0;
  v36[1] = v36;
  v32 = 0;
  v36[0] = v36;
  memset(v39, 0, sizeof(v39));
  WORD1(v39[0]) = -1;
  memset(v40, 0, sizeof(v40));
  v37 = 0LL;
  v35 = 0LL;
  CmpInitializeDelayDerefContext(&v37);
  LOCK_HIVE_LOAD();
  LOBYTE(v7) = 1;
  CmpLockRegistryFreezeAware(v7);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = 6;
  v34 = 6;
  v11 = *(_QWORD *)(v9 + 32);
  if ( (*(_DWORD *)(v9 + 8) & 0x80u) != 0 )
    goto LABEL_58;
  v12 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v12 < 0 )
    goto LABEL_50;
  if ( (*(_DWORD *)(v9 + 8) & 0x40000) != 0 )
  {
    v12 = -1073740763;
    goto LABEL_50;
  }
  if ( *(_BYTE *)(v11 + 2936) && ((a2 & 1) == 0 || (*(_DWORD *)(v11 + 4152) & 0x20) == 0) )
  {
    v12 = -1073741431;
    goto LABEL_50;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb(v39, v9) < 0 )
  {
    v12 = -1073741670;
    goto LABEL_50;
  }
  CmpReportNotifyForKcbStack((__int64)v39, 0, 4, (__int64)v36);
  LOBYTE(v13) = 1;
  CmpFlushNotify(a1, v13, v36);
  v8 = *(_QWORD *)(v9 + 32);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v9 + 184) & 0x40000) == 0 )
  {
    v12 = -1073741811;
    goto LABEL_50;
  }
  if ( (*(_DWORD *)(v8 + 4152) & 4) != 0 )
  {
LABEL_58:
    v12 = -1073741790;
    goto LABEL_50;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v9) || *(_QWORD *)v9 != 2LL )
    {
      if ( a3 )
      {
        v12 = CmpFreezeHive(v9, v38);
        if ( v12 >= 0 )
        {
          v12 = 259;
          goto LABEL_14;
        }
        goto LABEL_50;
      }
      goto LABEL_49;
    }
    goto LABEL_27;
  }
  v17 = *(_QWORD *)(v9 + 192);
  if ( v17 && *(_QWORD *)(v17 + 32) != v17 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_49:
    v12 = -1073741535;
    goto LABEL_50;
  }
  LOBYTE(v14) = 1;
  v18 = CmpTryAcquireKcbIXLocks(v9, v14, v15, &v35);
  v12 = v18;
  if ( v18 == -1073741267 )
  {
LABEL_65:
    CmpLogTransactionAbortedForRollbackPacket(v9, 10LL, &v35);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v34 = 0;
    v12 = CmpAbortRollbackPacket(&v35, 0LL);
    if ( v12 >= 0 )
      v12 = -1073741267;
    v20 = 0;
    goto LABEL_51;
  }
  if ( v18 < 0 )
  {
LABEL_50:
    v20 = v32;
    goto LABEL_51;
  }
  v19 = CmpPrepareForSubtreeInvalidation(v9, 0LL, &v35);
  v12 = v19;
  if ( v19 == -1073741267 )
    goto LABEL_65;
  if ( v19 < 0 )
    goto LABEL_50;
  CmpInvalidateSubtree(v9, 1, 1, (unsigned int)&v37, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v9, 1LL, &v37);
LABEL_27:
  *(_DWORD *)(v9 + 8) |= 0x40000u;
  v20 = 1;
  if ( *(_BYTE *)(v11 + 2936) == 1 )
  {
    CmpUnfreezeHive((PVOID)v11);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v37);
  CmpUnlockRegistry();
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v11 + 1632));
  ExRundownCompleted((PEX_RUNDOWN_REF)(v11 + 1632));
  LOCK_HIVE_LOAD();
  LOBYTE(v21) = 1;
  CmpLockRegistryFreezeAware(v21);
  v25 = *(_QWORD *)(v11 + 4192);
  if ( !v25 )
    goto LABEL_30;
  v12 = CmSnapshotRMTxArray(v25, &v35);
  if ( v12 >= 0 )
  {
    CmpLogTransactionAbortedForRollbackPacket(v9, 9LL, &v35);
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    v10 = 0;
    v34 = 0;
    v12 = CmpAbortRollbackPacket(&v35, v33);
    if ( v12 < 0 )
      goto LABEL_51;
    CmpCleanupRollbackPacket(&v35);
    v35 = 0LL;
    if ( v33[0] )
      CmObliterateRMTxArray(*(_QWORD *)(v11 + 4192));
    LOCK_HIVE_LOAD();
    v27 = (void *)CmCloseRmHandle(*(_QWORD *)(v11 + 4192), 0LL);
    v28 = (void *)CmCloseTmHandle(*(_QWORD *)(v11 + 4192));
    UNLOCK_HIVE_LOAD();
    if ( v27 )
      ZwClose(v27);
    if ( v28 )
      ZwClose(v28);
    LOCK_HIVE_LOAD();
    LOBYTE(v29) = 1;
    CmShutdownCmRM(*(_QWORD *)(v11 + 4192), v29);
    LOBYTE(v30) = 1;
    CmpLockRegistryFreezeAware(v30);
    v34 = 6;
LABEL_30:
    CmpAttachToRegistryProcess((__int64)v40, v22, v23, v24);
    CmpCompleteUnloadKey(v9, v26, &v34);
    CmpDetachFromRegistryProcess((__int64)v40);
    v12 = 0;
    goto LABEL_31;
  }
  v10 = v34;
LABEL_51:
  if ( (v10 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v10 |= 4u;
    v34 = v10;
  }
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v8) = 1;
    CmpLockRegistryFreezeAware(v8);
    v10 |= 2u;
    v34 = v10;
  }
  if ( v20 )
  {
    _InterlockedExchange64((volatile __int64 *)(v11 + 1632), 0LL);
    *(_DWORD *)(v9 + 8) &= ~0x40000u;
LABEL_31:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v31, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v10) = v34;
  }
LABEL_14:
  if ( (v10 & 2) != 0 )
    CmpUnlockRegistry();
  if ( (v10 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( (_QWORD *)v36[0] != v36 )
    CmpSignalDeferredPosts(v36);
  CmpCleanupKcbStack((__int64)v39);
  CmpCleanupRollbackPacket(&v35);
  return (unsigned int)v12;
}
