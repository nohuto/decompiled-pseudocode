/*
 * XREFs of CmpPerformUnloadKey @ 0x14074A194
 * Callers:
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1406C00DC (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1406C0154 (UNLOCK_HIVE_LOAD.c)
 *     CmpCleanupRollbackPacket @ 0x14074A888 (CmpCleanupRollbackPacket.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpFlushNotify @ 0x14074B6C4 (CmpFlushNotify.c)
 *     CmpDoesKeyHaveOpenSubkeys @ 0x14074B804 (CmpDoesKeyHaveOpenSubkeys.c)
 *     CmpPrepareForSubtreeInvalidation @ 0x14074C0F0 (CmpPrepareForSubtreeInvalidation.c)
 *     CmpTryAcquireKcbIXLocks @ 0x14074C150 (CmpTryAcquireKcbIXLocks.c)
 *     CmpInvalidateSubtree @ 0x14074C208 (CmpInvalidateSubtree.c)
 *     CmCloseRmHandle @ 0x14074C258 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14074C280 (CmCloseTmHandle.c)
 *     CmSnapshotRMTxArray @ 0x14074C2A8 (CmSnapshotRMTxArray.c)
 *     CmpStopRMLog @ 0x14074C3C4 (CmpStopRMLog.c)
 *     CmpRunDownCmRM @ 0x14074C420 (CmpRunDownCmRM.c)
 *     CmpAbortRollbackPacket @ 0x14074C8DC (CmpAbortRollbackPacket.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFreezeHive @ 0x1408726EC (CmpFreezeHive.c)
 *     CmpUnfreezeHive @ 0x140A14108 (CmpUnfreezeHive.c)
 *     CmObliterateRMTxArray @ 0x140A19310 (CmObliterateRMTxArray.c)
 *     CmpLogUnsupportedOperation @ 0x140A1D140 (CmpLogUnsupportedOperation.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpPerformUnloadKey(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // edi
  __int64 v13; // r14
  int v14; // ebx
  int v15; // r15d
  __int64 v16; // rdx
  char v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  void *v32; // rdi
  void *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  signed __int32 v40[8]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v41; // [rsp+20h] [rbp-89h]
  __int64 v42; // [rsp+28h] [rbp-81h]
  __int64 v43; // [rsp+30h] [rbp-79h] BYREF
  __int128 v44; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v45[2]; // [rsp+48h] [rbp-61h] BYREF
  __int128 v46; // [rsp+58h] [rbp-51h] BYREF
  __int64 v47; // [rsp+68h] [rbp-41h]
  __int128 v48; // [rsp+70h] [rbp-39h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-29h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  v47 = a4;
  v45[1] = v45;
  LOWORD(v43) = 0;
  v45[0] = v45;
  v48 = 0LL;
  WORD1(v48) = -1;
  memset(&ApcState, 0, sizeof(ApcState));
  v46 = 0LL;
  v44 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  CmpInitializeDelayDerefContext(&v46);
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 6;
  HIDWORD(v43) = 6;
  v13 = *(_QWORD *)(v11 + 32);
  if ( (*(_DWORD *)(v11 + 8) & 0x80u) != 0 )
    goto LABEL_61;
  v14 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v14 < 0 )
    goto LABEL_52;
  if ( (*(_DWORD *)(v11 + 8) & 0x40000) != 0 )
  {
    v14 = -1073740763;
    goto LABEL_52;
  }
  v15 = a2 & 1;
  if ( *(_BYTE *)(v13 + 2944) && (!v15 || (*(_DWORD *)(v13 + 4112) & 0x20) == 0) )
  {
    v14 = -1073741431;
    goto LABEL_52;
  }
  if ( (int)CmpStartKcbStackForTopLayerKcb(&v48, v11) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_52;
  }
  CmpReportNotifyForKcbStack(&v48, 0LL, 4LL, v45, v41, v42, v43);
  LOBYTE(v16) = 1;
  CmpFlushNotify(a1, v16, v45);
  v8 = *(_QWORD *)(v11 + 32);
  if ( v8 == CmpMasterHive || (*(_DWORD *)(v11 + 184) & 0x40000) == 0 )
  {
    v14 = -1073741811;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)(v8 + 4112) & 4) != 0 )
  {
LABEL_61:
    v14 = -1073741790;
    goto LABEL_52;
  }
  if ( !v15 )
  {
    if ( !(unsigned __int8)CmpDoesKeyHaveOpenSubkeys(v11) && *(_QWORD *)v11 == 2LL )
      goto LABEL_12;
    if ( a3 )
    {
      v14 = CmpFreezeHive(v11, v47);
      if ( v14 >= 0 )
      {
        v14 = 259;
        goto LABEL_20;
      }
      goto LABEL_52;
    }
    goto LABEL_51;
  }
  v25 = *(_QWORD *)(v11 + 192);
  if ( v25 && *(_QWORD *)(v25 + 32) != v25 + 32 )
  {
    CmpLogUnsupportedOperation(3LL);
LABEL_51:
    v14 = -1073741535;
    goto LABEL_52;
  }
  LOBYTE(v7) = 1;
  v26 = CmpTryAcquireKcbIXLocks(v11, v7, v9, &v44);
  v14 = v26;
  if ( v26 == -1073741267 )
  {
LABEL_68:
    LODWORD(v41) = v44;
    CmpLogTransactionAbortedWithChildName(v11, 0LL, 10LL);
    CmpUnlockRegistry(v37, v36, v38, v39);
    UNLOCK_HIVE_LOAD();
    v12 = 0;
    HIDWORD(v43) = 0;
    v14 = CmpAbortRollbackPacket(&v44, 0LL);
    if ( v14 >= 0 )
      v14 = -1073741267;
    v17 = 0;
    goto LABEL_53;
  }
  if ( v26 < 0 )
  {
LABEL_52:
    v17 = v43;
    goto LABEL_53;
  }
  v27 = CmpPrepareForSubtreeInvalidation(v11, 0LL, &v44);
  v14 = v27;
  if ( v27 == -1073741267 )
    goto LABEL_68;
  if ( v27 < 0 )
    goto LABEL_52;
  CmpInvalidateSubtree(v11, 1, 1, (unsigned int)&v46, 0LL);
  CmpFlushNotifiesOnKeyBodyList(v11, 1LL, &v46);
LABEL_12:
  *(_DWORD *)(v11 + 8) |= 0x40000u;
  v17 = 1;
  if ( *(_BYTE *)(v13 + 2944) == 1 )
  {
    CmpUnfreezeHive(v13);
    ++CmpActiveAppHiveUnloadCount;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v46);
  CmpUnlockRegistry(v19, v18, v20, v21);
  UNLOCK_HIVE_LOAD();
  _InterlockedIncrement(&CmpActiveHiveRundownCount);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(v13 + 1640));
  _InterlockedExchange64((volatile __int64 *)(v13 + 1640), 1LL);
  LOCK_HIVE_LOAD();
  CmpLockRegistryFreezeAware(1);
  v22 = *(_QWORD *)(v13 + 4152);
  HIDWORD(v43) = 6;
  if ( !v22 )
    goto LABEL_15;
  v14 = CmSnapshotRMTxArray(v22, &v44);
  if ( v14 >= 0 )
  {
    LODWORD(v41) = v44;
    CmpLogTransactionAbortedWithChildName(v11, 0LL, 9LL);
    CmpUnlockRegistry(v29, v28, v30, v31);
    UNLOCK_HIVE_LOAD();
    v12 = 0;
    HIDWORD(v43) = 0;
    v14 = CmpAbortRollbackPacket(&v44, (char *)&v43 + 1);
    if ( v14 >= 0 )
    {
      CmpCleanupRollbackPacket(&v44);
      v44 = 0LL;
      if ( BYTE1(v43) )
        CmObliterateRMTxArray(*(_QWORD *)(v13 + 4152));
      LOCK_HIVE_LOAD();
      v32 = (void *)CmCloseRmHandle(*(_QWORD *)(v13 + 4152), 0LL);
      v33 = (void *)CmCloseTmHandle(*(_QWORD *)(v13 + 4152));
      UNLOCK_HIVE_LOAD();
      if ( v32 )
        ZwClose(v32);
      if ( v33 )
        ZwClose(v33);
      LOCK_HIVE_LOAD();
      v35 = *(_QWORD *)(v13 + 4152);
      if ( v35 )
      {
        if ( *(_DWORD *)(v35 + 64) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v35 + 64));
          if ( !*(_DWORD *)(v35 + 64) )
            CmpStopRMLog(v35);
        }
      }
      LOBYTE(v34) = 1;
      CmpRunDownCmRM(v35, v34);
      CmpLockRegistryFreezeAware(1);
      HIDWORD(v43) = 6;
LABEL_15:
      CmpAttachToRegistryProcess(&ApcState);
      CmpCompleteUnloadKey(v11, v23, (char *)&v43 + 4);
      CmpDetachFromRegistryProcess(&ApcState);
      v14 = 0;
      goto LABEL_16;
    }
  }
LABEL_53:
  if ( (v12 & 4) == 0 )
  {
    LOCK_HIVE_LOAD();
    v12 |= 4u;
    HIDWORD(v43) = v12;
  }
  if ( (v12 & 2) == 0 )
  {
    CmpLockRegistryFreezeAware(1);
    v12 |= 2u;
    HIDWORD(v43) = v12;
  }
  if ( v17 )
  {
    _InterlockedExchange64((volatile __int64 *)(v13 + 1640), 0LL);
    *(_DWORD *)(v11 + 8) &= ~0x40000u;
LABEL_16:
    if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
    {
      _InterlockedOr(v40, 0);
      if ( CmpActiveHiveRundownEvent )
        ExfUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL);
    }
    LOBYTE(v12) = BYTE4(v43);
  }
LABEL_20:
  if ( (v12 & 2) != 0 )
    CmpUnlockRegistry(v8, v7, v9, v10);
  if ( (v12 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( v45[0] != v45 )
    CmpSignalDeferredPosts(v45);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpCleanupRollbackPacket(&v44);
  return (unsigned int)v14;
}
