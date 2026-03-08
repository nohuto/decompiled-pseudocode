/*
 * XREFs of CmDeleteKey @ 0x1406B762C
 * Callers:
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14024185C (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402C0814 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpUnlockHashEntryByKcb @ 0x1406B6550 (CmpUnlockHashEntryByKcb.c)
 *     CmpLockIXLockIntent @ 0x1406B7020 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1406B70A0 (CmpLockIXLockExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     CmGetVisibleSubkeyCount @ 0x1406B7D28 (CmGetVisibleSubkeyCount.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406B7DC0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLockKcbStackExclusive @ 0x1406B7DF8 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmAddLogForAction @ 0x14073485C (CmAddLogForAction.c)
 *     CmpMarkKeyUnbacked @ 0x14074AD64 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDiscardKcb @ 0x14074B098 (CmpDiscardKcb.c)
 *     CmpAllocateUnitOfWork @ 0x140784388 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCleanUpSubKeyInfo @ 0x1407A5570 (CmpCleanUpSubKeyInfo.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     CmpRollbackTransactionArray @ 0x140A1BA5C (CmpRollbackTransactionArray.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1CBE4 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1CE0C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1D2A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A1E144 (CmpSnapshotTxOwnerArray.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpIsShutdownRundownActive @ 0x140AF24D4 (CmpIsShutdownRundownActive.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmDeleteKey(_QWORD *a1)
{
  char v2; // di
  char v3; // r14
  __int64 UnitOfWork; // r13
  __int64 v5; // r15
  ULONG_PTR v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  int started; // edi
  char v14; // di
  char IsKeyDeletedForKeyBody; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  int *v20; // rcx
  signed __int64 *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // bl
  char v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char v38; // al
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  PPRIVILEGE_SET v46; // rcx
  char v47; // al
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // [rsp+28h] [rbp-E0h]
  __int64 v59; // [rsp+30h] [rbp-D8h]
  __int64 v60; // [rsp+38h] [rbp-D0h]
  char v61; // [rsp+48h] [rbp-C0h]
  __int16 v62; // [rsp+4Ah] [rbp-BEh]
  char v63; // [rsp+4Ch] [rbp-BCh]
  __int64 v64; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v66; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD *v67[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+80h] [rbp-88h] BYREF
  _QWORD *v69[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v70; // [rsp+98h] [rbp-70h] BYREF
  __int64 KeyNodeForKcb; // [rsp+A0h] [rbp-68h]
  __int128 v72; // [rsp+A8h] [rbp-60h] BYREF
  PPRIVILEGE_SET v73[2]; // [rsp+B8h] [rbp-50h]
  __int128 v74; // [rsp+C8h] [rbp-40h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+D8h] [rbp-30h]
  __int64 v76; // [rsp+E8h] [rbp-20h] BYREF
  int v77; // [rsp+F0h] [rbp-18h]
  int v78; // [rsp+F4h] [rbp-14h]
  _QWORD v79[3]; // [rsp+F8h] [rbp-10h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+110h] [rbp+8h] BYREF

  v69[1] = v69;
  v69[0] = v69;
  v2 = 0;
  memset(v67, 0, sizeof(v67));
  v65 = 0LL;
  v3 = 0;
  v78 = 0;
  UnitOfWork = 0LL;
  v66 = 0LL;
  v5 = 0LL;
  v64 = 0LL;
  v6 = 0LL;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v68 = 0LL;
  KeyNodeForKcb = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = MEMORY[0xFFFFF78000000014];
  v72 = 0LL;
  WORD1(v72) = -1;
  v74 = 0LL;
  WORD1(v74) = -1;
  *(_OWORD *)v73 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  HvpGetCellContextReinitialize(v67);
  HvpGetCellContextReinitialize(&v65);
  v77 = -1073741823;
  v76 = 0LL;
  v78 = 0;
  v79[1] = v79;
  v79[0] = v79;
  CmpInitializeDelayDerefContext(&v67[1]);
  CmpAttachToRegistryProcess(&ApcState);
  if ( (unsigned __int8)CmpIsShutdownRundownActive() )
    goto LABEL_99;
  v12 = v68;
  do
  {
    if ( v2 )
      CmpLockRegistryExclusive();
    else
      CmpLockRegistry(v9, v8, v10, v11, v58, v59, v60);
    v6 = a1[1];
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_117;
    }
    if ( !*(_QWORD *)(v6 + 72) )
    {
      started = -1073741535;
LABEL_120:
      v30 = 0;
      goto LABEL_39;
    }
    if ( *(_WORD *)(v6 + 66) )
    {
      started = CmDeleteLayeredKey((__int64)a1, (__int64)v69, &v67[1]);
      goto LABEL_117;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v74, v6);
    if ( started < 0 )
      goto LABEL_120;
    started = CmpStartKcbStackForTopLayerKcb(&v72, *(_QWORD *)(v6 + 72));
    if ( started < 0 )
      goto LABEL_120;
    v14 = v63;
    if ( !v63 )
    {
      CmpLockHashEntryExclusiveByKcb(v6);
      HIBYTE(v62) = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v72);
      CmpLockKcbStackExclusive(&v74);
      v61 = 1;
    }
    IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
    v17 = 0LL;
    if ( IsKeyDeletedForKeyBody )
    {
LABEL_100:
      started = 0;
LABEL_101:
      v30 = 0;
      goto LABEL_39;
    }
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &v68);
      if ( started < 0 )
        goto LABEL_120;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_117:
        v30 = 0;
        goto LABEL_39;
      }
      v12 = v68;
      v38 = CmpIsKeyDeletedForKeyBody(a1, v68);
      v17 = 0LL;
      if ( v38 )
        goto LABEL_100;
      if ( v12 )
        goto LABEL_16;
      v14 = v63;
    }
    v18 = *(_QWORD *)(v6 + 192);
    if ( v18 && *(_QWORD *)(v18 + 32) != v18 + 32 && !v14 )
    {
      v2 = 1;
      v63 = 1;
      CmpUnlockKcbStack(&v74);
      CmpUnlockKcbStack(&v72);
      v61 = 0;
      CmpUnlockHashEntryByKcb(v6);
      HIBYTE(v62) = 0;
      if ( Privileges[1] )
        CmSiFreeMemory(Privileges[1]);
      v74 = 0LL;
      WORD1(v74) = -1;
      v46 = v73[1];
      *(_OWORD *)Privileges = 0LL;
      if ( v73[1] )
        CmSiFreeMemory(v73[1]);
      v72 = 0LL;
      WORD1(v72) = -1;
      *(_OWORD *)v73 = 0LL;
      CmpUnlockRegistry(v46, v43, v44, v45);
      continue;
    }
LABEL_16:
    v19 = *(_QWORD *)(v6 + 240);
    if ( v19 )
    {
      v47 = CmEqualTrans(v12, v19);
      v17 = 0LL;
      if ( !v47 )
      {
        started = -1073741535;
        goto LABEL_101;
      }
    }
    if ( v12 )
    {
      UnitOfWork = CmpAllocateUnitOfWork(v16, v19, 0LL);
      if ( UnitOfWork )
      {
        v5 = CmpAllocateUnitOfWork(v40, v39, v41);
        if ( !v5 )
        {
          started = -1073741670;
          goto LABEL_38;
        }
        CmpTransEnlistUowInKcb((_QWORD *)UnitOfWork, *(_QWORD *)(v6 + 72));
        started = CmpTransEnlistUowInCmTrans((_QWORD *)UnitOfWork, v12);
        if ( started < 0 )
          goto LABEL_38;
        CmpTransEnlistUowInKcb((_QWORD *)v5, v6);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v5, v12);
        if ( started < 0 )
          goto LABEL_38;
        if ( !CmpLockIXLockIntent((unsigned int *)(*(_QWORD *)(v6 + 72) + 248LL), UnitOfWork)
          || !CmpLockIXLockExclusive(v6 + 248, (_QWORD *)v5, 0)
          || !CmpLockIXLockExclusive(v6 + 264, (_QWORD *)v5, 1) )
        {
          started = -1072103423;
          goto LABEL_38;
        }
LABEL_21:
        if ( !v63 )
        {
          v21 = (signed __int64 *)(*(_QWORD *)(v6 + 32) + 72LL);
          v22 = KeAbPreAcquire((__int64)v21, 0LL);
          if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v21, 0, v22, (__int64)v21);
          if ( v22 )
            *(_BYTE *)(v22 + 18) = 1;
          v12 = v68;
          LOBYTE(v62) = 1;
        }
        LOBYTE(v17) = 1;
        KeyNodeForKcb = CmpGetKeyNodeForKcb(v6, v67, v17);
        v23 = KeyNodeForKcb;
        if ( (unsigned int)CmGetVisibleSubkeyCount(v6, KeyNodeForKcb, v12) || (*(_BYTE *)(v23 + 2) & 8) != 0 )
        {
          started = -1073741535;
          goto LABEL_38;
        }
        v24 = *(_QWORD *)(v6 + 32);
        if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v24, v67);
        else
          HvpReleaseCellPaged(v24, v67);
        KeyNodeForKcb = 0LL;
        if ( v12 )
        {
          *(_DWORD *)(UnitOfWork + 68) = 3;
          *(_QWORD *)(UnitOfWork + 88) = v6;
          *(_DWORD *)(v5 + 68) = 2;
          *(_QWORD *)(v5 + 80) = UnitOfWork;
          v42 = *(_QWORD *)(v6 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v42 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v42 + 72));
          KeAbPostRelease(v42 + 72);
          v30 = 0;
          started = CmAddLogForAction(v5, 1LL);
          if ( started >= 0 )
          {
            v5 = 0LL;
            UnitOfWork = 0LL;
            CmpReportNotifyForKcbStack(&v72, v68, 1LL, v69, v58, v59, v60);
            started = 0;
          }
        }
        else
        {
          v25 = *(_QWORD *)(v6 + 192);
          if ( !v25 || *(_QWORD *)(v25 + 32) == v25 + 32 )
          {
            CmpReportNotifyForKcbStack(&v72, 0LL, 1LL, v69, v58, v59, v60);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started < 0 )
              goto LABEL_38;
            CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v67[1]);
            LOBYTE(v26) = 1;
            CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v26);
            LOBYTE(v27) = 1;
            v28 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v65, v27);
            *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v28 + 52);
            ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
            *(_QWORD *)(v28 + 4) = v7;
            *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v7;
            v29 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
            if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v29, &v65);
            else
              HvpReleaseCellPaged(v29, &v65);
            CmpMarkKeyUnbacked(v6, &v67[1]);
            CmpDiscardKcb(v6);
            goto LABEL_37;
          }
          started = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(v6, &v76);
          if ( started >= 0 )
          {
            CmpReportNotifyForKcbStack(&v72, 0LL, 1LL, v69, v58, v59, v60);
            started = CmpFreeKeyByCell(*(_QWORD *)(v6 + 32), *(unsigned int *)(v6 + 40));
            if ( started >= 0 )
            {
              v70 = 0x10100000008LL;
              CmpEnumerateAllHigherLayerKcbs(
                v6,
                (unsigned int)CmpFlushNotifiesPreCallback,
                (unsigned int)CmpFlushNotifiesPostCallback,
                (unsigned int)&v67[1],
                (__int64)&v70,
                1,
                1);
              CmpFlushNotifiesOnKeyBodyList(v6, 8LL, &v67[1]);
              LOBYTE(v53) = 1;
              CmpCleanUpSubKeyInfo(*(_QWORD *)(v6 + 72), v53);
              LOBYTE(v54) = 1;
              v55 = CmpGetKeyNodeForKcb(*(_QWORD *)(v6 + 72), &v65, v54);
              *(_WORD *)(*(_QWORD *)(v6 + 72) + 176LL) = *(_WORD *)(v55 + 52);
              ++*(_QWORD *)(*(_QWORD *)(v6 + 72) + 304LL);
              *(_QWORD *)(v55 + 4) = v7;
              *(_QWORD *)(*(_QWORD *)(v6 + 72) + 168LL) = v7;
              v56 = *(_QWORD *)(*(_QWORD *)(v6 + 72) + 32LL);
              if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v56, &v65);
              else
                HvpReleaseCellPaged(v56, &v65);
              CmpMarkKeyUnbacked(v6, &v67[1]);
              CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v6);
LABEL_37:
              started = 0;
            }
          }
LABEL_38:
          v30 = v62;
        }
      }
      else
      {
        started = -1073741670;
        v30 = 0;
      }
LABEL_39:
      v31 = 1;
LABEL_40:
      v3 = v61;
      goto LABEL_41;
    }
    v20 = (int *)(*(_QWORD *)(v6 + 72) + 248LL);
    if ( *v20 >= 0 )
    {
      v20 = (int *)(v6 + 248);
      if ( !*(_DWORD *)(v6 + 248) )
      {
        v20 = (int *)(v6 + 264);
        if ( !*(_DWORD *)(v6 + 264) )
          goto LABEL_21;
      }
    }
    started = CmpSnapshotTxOwnerArray(v20, &v64, &v66);
    if ( started < 0 )
      goto LABEL_120;
    if ( v61 )
    {
      CmpUnlockKcbStack(&v74);
      CmpUnlockKcbStack(&v72);
      v61 = 0;
    }
    if ( HIBYTE(v62) )
    {
      CmpUnlockHashEntryByKcb(v6);
      HIBYTE(v62) = 0;
    }
    CmpDrainDelayDerefContext(&v67[1]);
    CmpUnlockRegistry(v49, v48, v50, v51);
    started = CmpRollbackTransactionArray((unsigned int)v64, v66, v52, (char *)&v64 + 4);
    if ( started < 0 )
    {
      v31 = 0;
      v30 = 0;
      goto LABEL_40;
    }
    v2 = v63;
  }
  while ( !(unsigned __int8)CmpIsShutdownRundownActive() );
  v3 = v61;
LABEL_99:
  started = -1073741431;
  v31 = 0;
  v30 = 0;
LABEL_41:
  CmpCleanupDiscardReplaceContext(&v76, &v67[1]);
  if ( KeyNodeForKcb )
  {
    v57 = *(_QWORD *)(v6 + 32);
    if ( (*(_BYTE *)(v57 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v57, v67);
    else
      HvpReleaseCellPaged(v57, v67);
  }
  if ( v30 )
  {
    v32 = *(_QWORD *)(v6 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v32 + 72));
    KeAbPostRelease(v32 + 72);
  }
  if ( v5 )
  {
    CmpRundownUnitOfWork((_QWORD *)v5);
    ExFreePoolWithTag((PVOID)v5, 0x77554D43u);
  }
  if ( UnitOfWork )
  {
    CmpRundownUnitOfWork((_QWORD *)UnitOfWork);
    ExFreePoolWithTag((PVOID)UnitOfWork, 0x77554D43u);
  }
  if ( v3 )
  {
    CmpUnlockKcbStack(&v74);
    CmpUnlockKcbStack(&v72);
  }
  if ( HIBYTE(v62) )
    CmpUnlockHashEntryByKcb(v6);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v73[1] )
    CmSiFreeMemory(v73[1]);
  CmpDrainDelayDerefContext(&v67[1]);
  if ( v31 )
    CmpUnlockRegistry(v34, v33, v35, v36);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( v69[0] != v69 )
    CmpSignalDeferredPosts(v69);
  return (unsigned int)started;
}
