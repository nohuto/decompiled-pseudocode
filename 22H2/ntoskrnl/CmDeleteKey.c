/*
 * XREFs of CmDeleteKey @ 0x1406E47E4
 * Callers:
 *     NtDeleteKey @ 0x1406E5000 (NtDeleteKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpCleanUpSubKeyInfo @ 0x1406E2E9C (CmpCleanUpSubKeyInfo.c)
 *     CmGetVisibleSubkeyCount @ 0x1406E3FDC (CmGetVisibleSubkeyCount.c)
 *     CmpFreeKeyByCell @ 0x1406E4070 (CmpFreeKeyByCell.c)
 *     CmpGetKeyNodeForKcb @ 0x1406E4DC4 (CmpGetKeyNodeForKcb.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406E4E40 (CmpUnlockHashEntryByKcb.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406E4EF0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1406E4F28 (CmpLockKcbStackExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1406E4F6C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDiscardKcb @ 0x1406E5718 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406E5970 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406E59F0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071C810 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x14071CD40 (CmEqualTrans.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140734DA4 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140863E54 (CmpReleaseKeyNodeForKcb.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876004 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140876448 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087829C (CmpSnapshotTxOwnerArray.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 */

__int64 __fastcall CmDeleteKey(__int64 a1)
{
  _QWORD *v1; // r15
  char v2; // di
  char v3; // r14
  _QWORD *UnitOfWork; // r12
  __int64 v5; // rbx
  _QWORD *v6; // r13
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _LOOKASIDE_LIST_EX *v13; // r9
  int started; // edi
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  char v17; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdx
  int *v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  char v31; // bl
  char v32; // r15
  char v34; // al
  char v35; // al
  char v36; // al
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  char v43; // [rsp+28h] [rbp-E0h]
  __int16 v44; // [rsp+2Ah] [rbp-DEh]
  unsigned int v45; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v46; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v48[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *v49; // [rsp+58h] [rbp-B0h]
  __int64 v50; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v51[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+78h] [rbp-90h] BYREF
  __int128 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v56; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-50h]
  __int64 v58; // [rsp+C8h] [rbp-40h] BYREF
  int v59; // [rsp+D0h] [rbp-38h]
  int v60; // [rsp+D4h] [rbp-34h]
  _QWORD v61[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v62[3]; // [rsp+E8h] [rbp-20h] BYREF

  v49 = (_QWORD *)a1;
  v47 = 0LL;
  v45 = 0;
  v51[1] = v51;
  v1 = (_QWORD *)a1;
  v51[0] = v51;
  v43 = 0;
  memset(v62, 0, sizeof(v62));
  v2 = 0;
  v3 = 0;
  v44 = 0;
  v54 = 0LL;
  UnitOfWork = 0LL;
  *(_OWORD *)&v48[1] = 0LL;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = 0LL;
  v7 = 0LL;
  v50 = 0xFFFFFFFFLL;
  v48[0] = 0xFFFFFFFFLL;
  v52 = 0LL;
  WORD1(v52) = -1;
  v56 = 0LL;
  WORD1(v56) = -1;
  v61[1] = v61;
  v61[0] = v61;
  v53 = 0LL;
  LODWORD(v46) = 0;
  v57 = 0LL;
  KeyNodeForKcb = 0LL;
  v58 = 0LL;
  v60 = 0;
  v59 = -1073741823;
  CmpInitializeDelayDerefContext(&v48[1]);
  CmpAttachToRegistryProcess((__int64)v62, v8, v9, v10);
  while ( (CmpShutdownRundown & 1) == 0 )
  {
    if ( v2 )
      CmpLockRegistryExclusive(0LL, v11);
    else
      CmpLockRegistry();
    v7 = v1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_91;
    }
    if ( !*(_QWORD *)(v7 + 72) )
    {
      started = -1073741535;
LABEL_94:
      v31 = 0;
LABEL_32:
      v32 = 1;
      goto LABEL_33;
    }
    if ( *(_WORD *)(v7 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)v1, (__int64)v51, (__int64)&v48[1]);
      goto LABEL_91;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v56, v7, v12, v13);
    if ( started < 0 )
      goto LABEL_91;
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v52, *(_QWORD *)(v7 + 72), v15, v16);
    if ( started < 0 )
      goto LABEL_94;
    v17 = HIBYTE(v44);
    if ( !HIBYTE(v44) )
    {
      CmpLockHashEntryExclusiveByKcb(v7);
      v3 = 1;
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v52);
      CmpLockKcbStackExclusive(&v56);
      LOBYTE(v44) = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody((__int64)v1, 0LL);
    v20 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_88:
      started = 0;
      v31 = 0;
      goto LABEL_32;
    }
    if ( v1[7] || v1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(v1, &v54);
      if ( started < 0 )
        goto LABEL_91;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_91:
        v31 = 0;
        goto LABEL_32;
      }
      v21 = v54;
      v34 = CmpIsKeyDeletedForKeyBody((__int64)v49, v54);
      v20 = 0LL;
      if ( v34 )
        goto LABEL_88;
      if ( !v21 )
      {
        v17 = HIBYTE(v44);
        goto LABEL_16;
      }
LABEL_17:
      v23 = *(_QWORD *)(v7 + 240);
      if ( v23 )
      {
        v36 = CmEqualTrans(v21, v23);
        v20 = 0LL;
        if ( !v36 )
        {
          started = -1073741535;
          goto LABEL_79;
        }
      }
      if ( v21 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        if ( !UnitOfWork )
        {
          started = -1073741670;
          v31 = 0;
          goto LABEL_32;
        }
        v6 = CmpAllocateUnitOfWork();
        if ( v6 )
        {
          CmpTransEnlistUowInKcb(UnitOfWork, *(_QWORD *)(v7 + 72));
          started = CmpTransEnlistUowInCmTrans(UnitOfWork, v21);
          if ( started >= 0 )
          {
            CmpTransEnlistUowInKcb(v6, v7);
            started = CmpTransEnlistUowInCmTrans(v6, v21);
            if ( started >= 0 )
            {
              if ( (unsigned __int8)CmpLockIXLockIntent(*(_QWORD *)(v7 + 72) + 248LL, UnitOfWork)
                && (unsigned __int8)CmpLockIXLockExclusive(v7 + 248, v6, 0LL) )
              {
                v35 = CmpLockIXLockExclusive(v7 + 264, v6, 1LL);
                v20 = 0LL;
                if ( !v35 )
                {
                  started = -1072103423;
LABEL_79:
                  v31 = 0;
                  goto LABEL_32;
                }
LABEL_22:
                if ( !HIBYTE(v44) )
                {
                  HvLockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                  v43 = 1;
                }
                LOBYTE(v20) = 1;
                KeyNodeForKcb = CmpGetKeyNodeForKcb(v7, &v50, v20, v19);
                v25 = KeyNodeForKcb;
                if ( (unsigned int)CmGetVisibleSubkeyCount(v7, KeyNodeForKcb, v21) || (*(_BYTE *)(v25 + 2) & 8) != 0 )
                {
                  started = -1073741535;
                }
                else
                {
                  CmpReleaseKeyNodeForKcb(v7, &v50);
                  KeyNodeForKcb = 0LL;
                  if ( v21 )
                  {
                    *((_DWORD *)UnitOfWork + 17) = 3;
                    UnitOfWork[11] = v7;
                    *((_DWORD *)v6 + 17) = 2;
                    v6[10] = UnitOfWork;
                    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
                    v31 = 0;
                    started = CmAddLogForAction((__int64)v6, 1);
                    if ( started >= 0 )
                    {
                      v6 = 0LL;
                      UnitOfWork = 0LL;
                      CmpReportNotifyForKcbStack((__int64)&v52, v21, 1, (__int64)v51);
                      started = 0;
                    }
                    goto LABEL_32;
                  }
                  v27 = *(_QWORD *)(v7 + 192);
                  if ( !v27 || *(_QWORD *)(v27 + 32) == v27 + 32 )
                  {
                    CmpReportNotifyForKcbStack((__int64)&v52, 0, 1, (__int64)v51);
                    started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), 1);
                    if ( started >= 0 )
                    {
                      CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v48[1]);
                      CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), 1);
                      LOBYTE(v28) = 1;
                      v30 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), v48, v28, v29);
                      *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v30 + 52);
                      ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                      *(_QWORD *)(v30 + 4) = v5;
                      *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                      CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), v48);
                      CmpMarkKeyUnbacked(v7, &v48[1]);
                      CmpDiscardKcb(v7);
                      goto LABEL_30;
                    }
                  }
                  else
                  {
                    started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v7, &v58, v26);
                    if ( started >= 0 )
                    {
                      CmpReportNotifyForKcbStack((__int64)&v52, 0, 1, (__int64)v51);
                      started = CmpFreeKeyByCell(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40), 1);
                      if ( started >= 0 )
                      {
                        LOBYTE(v39) = 1;
                        CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(v7, v38, &v48[1], v39);
                        CmpFlushNotifiesOnKeyBodyList(v7, 8LL, &v48[1]);
                        CmpCleanUpSubKeyInfo(*(_QWORD *)(v7 + 72), 1);
                        LOBYTE(v40) = 1;
                        v42 = CmpGetKeyNodeForKcb(*(_QWORD *)(v7 + 72), v48, v40, v41);
                        *(_WORD *)(*(_QWORD *)(v7 + 72) + 176LL) = *(_WORD *)(v42 + 52);
                        ++*(_QWORD *)(*(_QWORD *)(v7 + 72) + 304LL);
                        *(_QWORD *)(v42 + 4) = v5;
                        *(_QWORD *)(*(_QWORD *)(v7 + 72) + 168LL) = v5;
                        CmpReleaseKeyNodeForKcb(*(_QWORD *)(v7 + 72), v48);
                        CmpMarkKeyUnbacked(v7, &v48[1]);
                        CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v7);
LABEL_30:
                        started = 0;
                      }
                    }
                  }
                }
              }
              else
              {
                started = -1072103423;
              }
            }
          }
        }
        else
        {
          started = -1073741670;
        }
        v31 = v43;
        goto LABEL_32;
      }
      v24 = (int *)(*(_QWORD *)(v7 + 72) + 248LL);
      if ( *v24 >= 0 )
      {
        v24 = (int *)(v7 + 248);
        if ( !*(_DWORD *)(v7 + 248) )
        {
          v24 = (int *)(v7 + 264);
          if ( !*(_DWORD *)(v7 + 264) )
            goto LABEL_22;
        }
      }
      v32 = 0;
      started = CmpSnapshotTxOwnerArray(v24, &v45, &v47);
      if ( started < 0 )
        goto LABEL_91;
      if ( (_BYTE)v44 )
      {
        CmpUnlockKcbStack((__int64)&v56);
        CmpUnlockKcbStack((__int64)&v52);
        LOBYTE(v44) = 0;
      }
      if ( v3 )
        CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpDrainDelayDerefContext((_QWORD **)&v48[1]);
      CmpUnlockRegistry();
      started = CmpRollbackTransactionArray(v45, v47, v37, &v46);
      if ( started < 0 )
      {
        v31 = 0;
        goto LABEL_33;
      }
      v1 = v49;
      v2 = HIBYTE(v44);
    }
    else
    {
      v21 = v54;
LABEL_16:
      v22 = *(_QWORD *)(v7 + 192);
      if ( !v22 || *(_QWORD *)(v22 + 32) == v22 + 32 || v17 )
        goto LABEL_17;
      v2 = 1;
      CmpUnlockKcbStack((__int64)&v56);
      CmpUnlockKcbStack((__int64)&v52);
      v44 = 256;
      CmpUnlockHashEntryByKcb(v7);
      v3 = 0;
      CmpCleanupKcbStack((__int64)&v56);
      v56 = 0LL;
      WORD1(v56) = -1;
      v57 = 0LL;
      CmpCleanupKcbStack((__int64)&v52);
      v52 = 0LL;
      WORD1(v52) = -1;
      v53 = 0LL;
      CmpUnlockRegistry();
      v1 = v49;
    }
  }
  started = -1073741431;
  v32 = 0;
  v31 = 0;
LABEL_33:
  CmpCleanupDiscardReplaceContext(&v58, &v48[1]);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v7, &v50);
  if ( v31 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v7 + 32));
  if ( v6 )
  {
    CmpRundownUnitOfWork((ULONG_PTR)v6);
    CmpFreeUnitOfWork(v6);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((ULONG_PTR)UnitOfWork);
    CmpFreeUnitOfWork(UnitOfWork);
  }
  if ( (_BYTE)v44 )
  {
    CmpUnlockKcbStack((__int64)&v56);
    CmpUnlockKcbStack((__int64)&v52);
  }
  if ( v3 )
    CmpUnlockHashEntryByKcb(v7);
  CmpCleanupKcbStack((__int64)&v56);
  CmpCleanupKcbStack((__int64)&v52);
  CmpDrainDelayDerefContext((_QWORD **)&v48[1]);
  if ( v32 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v62);
  if ( v51[0] != v51 )
    CmpSignalDeferredPosts(v51);
  return (unsigned int)started;
}
