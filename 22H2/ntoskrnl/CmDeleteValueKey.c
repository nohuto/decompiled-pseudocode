/*
 * XREFs of CmDeleteValueKey @ 0x1406DF334
 * Callers:
 *     NtDeleteValueKey @ 0x1406E1EF0 (NtDeleteValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405EF510 (CmpGetEffectiveKcbSemantics.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x140688570 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x140695E60 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14069FBF0 (CmpCloneKCBValueListForTrans.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x1406DED6C (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpMarkValueDataDirty @ 0x1406DFD78 (CmpMarkValueDataDirty.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1406E4228 (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1406E42A4 (CmpFreeValueData.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071C810 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpSetValueKeyTombstone @ 0x14086EA4C (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408720C4 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140874CB4 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087829C (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x14087B430 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D39C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  ULONG_PTR v5; // rsi
  __int64 v6; // r12
  __int64 KcbAtLayerHeight; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  char v11; // r15
  __int64 v12; // rbx
  __int64 v13; // r8
  struct _LOOKASIDE_LIST_EX *v14; // r9
  int started; // edi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r13
  ULONG_PTR v19; // rcx
  __int16 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r15d
  char v24; // r14
  ULONG_PTR v25; // rbx
  void *v26; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // ecx
  _QWORD *UnitOfWork; // rax
  _QWORD *v36; // r14
  __int64 v37; // r8
  __int64 v38; // r8
  char v39; // al
  _WORD *v40; // r15
  unsigned int v41; // eax
  char v42; // al
  ULONG_PTR v43; // rdx
  char v44; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-B8h]
  char v46[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+58h] [rbp-A8h]
  char v48; // [rsp+60h] [rbp-A0h]
  unsigned int v49; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v50; // [rsp+68h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int128 v56; // [rsp+98h] [rbp-68h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h] BYREF
  _WORD *v60; // [rsp+C8h] [rbp-38h]
  _QWORD v61[2]; // [rsp+D0h] [rbp-30h] BYREF
  void *v62; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v63; // [rsp+E8h] [rbp-18h]
  __int128 v64; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v65[2]; // [rsp+100h] [rbp+0h] BYREF
  _OWORD v66[3]; // [rsp+120h] [rbp+20h] BYREF

  v47 = a1;
  v4 = a1;
  v49 = 0;
  v61[1] = v61;
  v5 = 0LL;
  v59 = 0LL;
  v61[0] = v61;
  v6 = 0LL;
  BugCheckParameter4 = 0LL;
  v48 = a4;
  v55 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v58 = 0xFFFFFFFFLL;
  v52 = 0xFFFFFFFFLL;
  v56 = 0LL;
  WORD1(v56) = -1;
  BugCheckParameter3 = 0xFFFFFFFFLL;
  v50 = -1;
  v63 = a3;
  v60 = (_WORD *)a2;
  memset(v66, 0, sizeof(v66));
  v46[0] = 0;
  v54 = 0LL;
  v64 = 0LL;
  v51 = 0LL;
  v57 = 0LL;
  CmpInitializeDelayDerefContext(&v64);
  v62 = 0LL;
  memset(v65, 0, sizeof(v65));
  CmpAttachToRegistryProcess((__int64)v66, v8, v9, v10);
  while ( 1 )
  {
    v11 = 1;
    if ( (CmpShutdownRundown & 1) != 0 )
    {
      started = -1073741431;
      v44 = 0;
LABEL_114:
      v11 = 0;
      v24 = 0;
      v25 = BugCheckParameter4;
      goto LABEL_27;
    }
    v12 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v5 = *(_QWORD *)(v4 + 8);
    v44 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_114;
    }
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v56, v5, v13, v14);
    if ( started < 0 )
      goto LABEL_114;
    CmpLockKcbStackTopExclusiveRestShared(&v56);
    v16 = v47;
    LOBYTE(v17) = 0;
    if ( *(_QWORD *)(v47 + 56) || *(_QWORD *)(v47 + 64) )
    {
      if ( CmpIsKeyDeletedForKeyBody(v47, 0LL) )
      {
        v24 = 0;
        v42 = *(_BYTE *)(v16 + 48) & 1;
        goto LABEL_110;
      }
      started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v16, &v54);
      if ( started < 0 )
        goto LABEL_86;
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_86:
        v24 = v17;
        goto LABEL_25;
      }
LABEL_69:
      v16 = v47;
    }
    v18 = v54;
    v11 = 0;
    if ( CmpIsKeyDeletedForKeyBody(v16, v54) )
    {
      v24 = 0;
      v11 = 1;
      v42 = *(_BYTE *)(v16 + 48) & 1;
LABEL_110:
      started = v42 != 0 ? -1073740763 : -1073741444;
      goto LABEL_25;
    }
    if ( v18 )
      break;
    v19 = v5 + 248;
    if ( *(int *)(v5 + 248) >= 0 )
    {
      v19 = v5 + 264;
      if ( !*(_DWORD *)(v5 + 264) )
        goto LABEL_11;
    }
    started = CmpSnapshotTxOwnerArray(v19, &v49, &v59);
    if ( started < 0 )
      goto LABEL_23;
    CmpLogTransactionAborted(v5, 1LL, v37, v49);
    CmpUnlockKcbStack((__int64)&v56);
    CmpCleanupKcbStack((__int64)&v56);
    v56 = 0LL;
    WORD1(v56) = -1;
    v57 = 0LL;
    CmpUnlockRegistry();
    v44 = 0;
    started = CmpRollbackTransactionArray(v49, v59, v38, (char *)&BugCheckParameter3 + 4);
    if ( started < 0 )
      goto LABEL_24;
    v4 = v47;
  }
  UnitOfWork = CmpAllocateUnitOfWork();
  BugCheckParameter4 = (ULONG_PTR)UnitOfWork;
  v36 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v4 = v47;
    started = -1073741670;
    v24 = 0;
    v11 = 1;
    goto LABEL_29;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v5);
  started = CmpTransEnlistUowInCmTrans(v36, v18);
  if ( started < 0 )
    goto LABEL_23;
  if ( !(unsigned __int8)CmpLockIXLockIntent(v5 + 248, v36)
    || !(unsigned __int8)CmpLockIXLockExclusive(v5 + 264, v36, 1LL) )
  {
    started = -1072103423;
LABEL_23:
    v11 = 1;
LABEL_24:
    v24 = 0;
LABEL_25:
    v25 = BugCheckParameter4;
    goto LABEL_26;
  }
  HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  v24 = 1;
  if ( !CmpCloneKCBValueListForTrans(v5, v18, v46) )
  {
    started = -1073741670;
    v11 = 1;
    goto LABEL_25;
  }
  HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  v16 = v47;
  KcbAtLayerHeight = v51;
LABEL_11:
  v20 = *(_WORD *)(v5 + 66);
  if ( v20 < 0 )
    goto LABEL_21;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v56, v20);
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v16) == 1 )
    {
LABEL_20:
      KcbAtLayerHeight = v51;
      goto LABEL_21;
    }
    v21 = *(unsigned int *)(KcbAtLayerHeight + 40);
    if ( (_DWORD)v21 != -1 )
      break;
LABEL_19:
    if ( --v20 < 0 )
      goto LABEL_20;
  }
  if ( v18 && *(_QWORD *)(KcbAtLayerHeight + 288) == v18 )
  {
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (unsigned int *)(KcbAtLayerHeight + 280),
                (__int64)v60,
                0,
                (__int64)&v50,
                (__int64)&BugCheckParameter3);
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
            *(_QWORD *)(KcbAtLayerHeight + 32),
            v21,
            &v58);
    started = CmpFindNameInListWithStatus(
                *(_QWORD *)(KcbAtLayerHeight + 32),
                (unsigned int *)(v22 + 36),
                (__int64)v60,
                0,
                (__int64)&v50,
                (__int64)&BugCheckParameter3);
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v58);
  }
  if ( started < 0 )
  {
    if ( started != -1073741772 )
      goto LABEL_23;
    v16 = v47;
    if ( (unsigned int)CmpGetEffectiveKcbSemantics(KcbAtLayerHeight, v47) )
      goto LABEL_20;
    goto LABEL_19;
  }
  v51 = KcbAtLayerHeight;
LABEL_21:
  v23 = BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 == -1 )
  {
    started = -1073741772;
    goto LABEL_23;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
          *(_QWORD *)(KcbAtLayerHeight + 32),
          (unsigned int)BugCheckParameter3,
          &v52);
  if ( CmpIsValueTombstone(*(_QWORD *)(KcbAtLayerHeight + 32), v17) )
  {
    started = -1073741772;
    v24 = 0;
    goto LABEL_104;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v52);
  v17 = 0LL;
  if ( *(_DWORD *)(v5 + 40) == -1 )
  {
    CmpUnlockKcbStack((__int64)&v56);
    v11 = 0;
    started = CmpPromoteKey(&v56, 0LL, 1LL);
    if ( started < 0 )
      goto LABEL_86;
    goto LABEL_69;
  }
  v29 = *(_QWORD *)(v5 + 32);
  ++*(_QWORD *)(v5 + 304);
  HvLockHiveFlusherShared(v29);
  v30 = v54;
  v24 = 1;
  if ( !v54 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v5 + 40), 0LL) )
  {
    started = -1073741443;
    v11 = 1;
    goto LABEL_25;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
         *(_QWORD *)(v5 + 32),
         *(unsigned int *)(v5 + 40),
         &v55);
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v5 + 32), v6, *(_DWORD *)(v5 + 40));
  if ( !v48 )
    goto LABEL_50;
  started = CmpSnapshotKcbStackSecurity(&v56, v30, 843140419LL, &v62);
  if ( started < 0 || (started = CmpGetValueForAudit(*(_QWORD *)(v51 + 32), v23, v65, 826363203LL), started < 0) )
  {
LABEL_92:
    v25 = BugCheckParameter4;
    goto LABEL_62;
  }
  v30 = v54;
LABEL_50:
  v31 = *(_QWORD *)(v5 + 32);
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(v31 + 16))(v31, &v55);
    v6 = 0LL;
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    v24 = 0;
    v25 = BugCheckParameter4;
    *(_DWORD *)(BugCheckParameter4 + 88) = v23;
    v11 = 1;
    *(_DWORD *)(BugCheckParameter4 + 68) = 6;
    started = CmAddLogForAction(BugCheckParameter4, 1);
    if ( started < 0 )
      goto LABEL_26;
    HvLockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v50, (unsigned int *)(v5 + 280));
    goto LABEL_59;
  }
  v32 = *(unsigned int *)(v5 + 40);
  if ( *(_WORD *)(v5 + 66) )
  {
    v39 = HvMarkCellDirty(v31, v32, 0LL);
    if ( v5 == v51 )
    {
      if ( v39 && (unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v23, 0LL) )
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 8LL))(
                *(_QWORD *)(v5 + 32),
                v23,
                &v52);
        if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v5 + 32)) )
        {
          CmpFreeValueData(*(_QWORD *)(v5 + 32), *(unsigned int *)(v17 + 8));
          *(_DWORD *)(v17 + 8) = -1;
          *(_WORD *)(v17 + 16) |= 2u;
          *(_DWORD *)(v17 + 12) = 0;
          *(_DWORD *)(v17 + 4) = 0;
          *(_QWORD *)(v6 + 4) = v12;
          *(_QWORD *)(v5 + 168) = v12;
          goto LABEL_58;
        }
        goto LABEL_93;
      }
      goto LABEL_91;
    }
    if ( !v39 )
    {
LABEL_91:
      started = -1073741443;
      goto LABEL_92;
    }
    v40 = v60;
    started = CmpSetValueKeyTombstone(*(_QWORD *)(v5 + 32), *(_DWORD *)(v5 + 40) >> 31);
    if ( started < 0 )
      goto LABEL_92;
    *(_QWORD *)(v6 + 4) = v12;
    *(_QWORD *)(v5 + 168) = v12;
    v41 = (unsigned __int16)*v40;
    if ( *(_DWORD *)(v6 + 60) < v41 )
    {
      *(_DWORD *)(v6 + 60) = v41;
      *(_WORD *)(v5 + 178) = *v40;
    }
LABEL_58:
    CmpCleanUpKcbCachedSymlink(v5);
    v34 = *(_DWORD *)(v6 + 40);
    *(_DWORD *)(v5 + 96) = *(_DWORD *)(v6 + 36);
    *(_DWORD *)(v5 + 100) = v34;
LABEL_59:
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
    started = 0;
    v24 = 0;
    v46[0] = 0;
    v25 = 0LL;
    CmpReportNotifyForKcbStack((__int64)&v56, v54, 4, (__int64)v61);
    goto LABEL_60;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(v31, v32, 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), *(unsigned int *)(v6 + 40), 0LL)
    || !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v5 + 32), v23, 0LL) )
  {
    goto LABEL_91;
  }
  v33 = v51;
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v51 + 32) + 8LL))(
          *(_QWORD *)(v51 + 32),
          v23,
          &v52);
  if ( (unsigned __int8)CmpMarkValueDataDirty(*(_QWORD *)(v33 + 32)) )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v33 + 32) + 16LL))(*(_QWORD *)(v33 + 32), &v52);
    v17 = 0LL;
    CmpRemoveValueFromList(*(_QWORD *)(v5 + 32), v50, (unsigned int *)(v6 + 36));
    CmpFreeValue(*(_QWORD *)(v5 + 32), v23);
    *(_QWORD *)(v6 + 4) = v12;
    *(_QWORD *)(v5 + 168) = v12;
    if ( !*(_DWORD *)(v6 + 36) )
    {
      *(_DWORD *)(v6 + 60) = 0;
      *(_WORD *)(v5 + 178) = 0;
      *(_DWORD *)(v6 + 64) = 0;
      *(_DWORD *)(v5 + 180) = 0;
    }
    goto LABEL_58;
  }
LABEL_93:
  started = -1073741443;
LABEL_104:
  v25 = BugCheckParameter4;
LABEL_60:
  if ( v17 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v51 + 32) + 16LL))(*(_QWORD *)(v51 + 32), &v52);
LABEL_62:
  v11 = 1;
  if ( v6 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v5 + 32) + 16LL))(*(_QWORD *)(v5 + 32), &v55);
LABEL_26:
  v4 = v47;
LABEL_27:
  if ( v25 )
  {
    CmpRundownUnitOfWork(v25);
    CmpFreeUnitOfWork(v25);
  }
LABEL_29:
  if ( v46[0] )
  {
    v43 = *(unsigned int *)(v5 + 284);
    if ( (_DWORD)v43 != -1 )
      HvFreeCell(*(_QWORD *)(v5 + 32), v43);
    *(_DWORD *)(v5 + 284) = -1;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
  }
  if ( v24 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v5 + 32));
  if ( v11 )
    CmpUnlockKcbStack((__int64)&v56);
  CmpDrainDelayDerefContext((_QWORD **)&v64);
  if ( v44 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v61[0] != v61 )
    CmpSignalDeferredPosts(v61);
  CmpDetachFromRegistryProcess((__int64)v66);
  v26 = v62;
  if ( started >= 0 && v48 && v62 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v62, 0, (_DWORD)v60, v4, v63, (__int64)v65, 2);
  if ( *((_QWORD *)&v65[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v65[0] + 1), 0x34414D43u);
  if ( v26 )
    CmpFreeTransientPoolWithTag(v26, 0x33414D43u);
  CmpCleanupKcbStack((__int64)&v56);
  return (unsigned int)started;
}
