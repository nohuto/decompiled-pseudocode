/*
 * XREFs of CmDeleteValueKey @ 0x1406B9764
 * Callers:
 *     NtDeleteValueKey @ 0x1406B9280 (NtDeleteValueKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14024185C (CmpTransEnlistUowInCmTrans.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpTransEnlistUowInKcb @ 0x1402C0814 (CmpTransEnlistUowInKcb.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpSignalDeferredPosts @ 0x1406B5564 (CmpSignalDeferredPosts.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406B5A64 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x1406B7020 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1406B70A0 (CmpLockIXLockExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406BA388 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x1406BAAE0 (CmpFreeValueData.c)
 *     CmpMarkValueDataDirty @ 0x1406BB14C (CmpMarkValueDataDirty.c)
 *     CmpRemoveValueFromList @ 0x1406BB75C (CmpRemoveValueFromList.c)
 *     CmpIsValueTombstone @ 0x1406BB868 (CmpIsValueTombstone.c)
 *     CmAddLogForAction @ 0x14073485C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x140784388 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x140788FC0 (CmpCloneKCBValueListForTrans.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1407A751C (CmpCleanUpKcbCachedSymlink.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1407A893C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInListWithStatus @ 0x1407A8DA0 (CmpFindNameInListWithStatus.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     CmpSetValueKeyTombstone @ 0x140A14050 (CmpSetValueKeyTombstone.c)
 *     CmpSnapshotKcbStackSecurity @ 0x140A19060 (CmpSnapshotKcbStackSecurity.c)
 *     CmpRollbackTransactionArray @ 0x140A1BA5C (CmpRollbackTransactionArray.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A1E144 (CmpSnapshotTxOwnerArray.c)
 *     CmpGetValueForAudit @ 0x140A22178 (CmpGetValueForAudit.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AF21E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpIsShutdownRundownActive @ 0x140AF24D4 (CmpIsShutdownRundownActive.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmDeleteValueKey(__int64 a1, _WORD *a2, __int64 a3, char a4)
{
  char v4; // r14
  _QWORD *v5; // r15
  _QWORD *v6; // r13
  ULONG_PTR v7; // rsi
  char IsShutdownRundownActive; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  char v14; // r12
  int started; // edi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  ULONG_PTR v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  PPRIVILEGE_SET v25; // rcx
  __int64 v26; // r8
  _QWORD *UnitOfWork; // rax
  signed __int64 *v28; // rdi
  __int64 v29; // r14
  char v30; // r15
  __int64 v31; // rdi
  __int16 v32; // r12
  __int64 v33; // r8
  __int64 KcbAtLayerHeight; // r14
  int v35; // eax
  char v36; // al
  ULONG_PTR v37; // rdx
  ULONG_PTR v38; // rcx
  int NameInListWithStatus; // eax
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // r12
  ULONG_PTR v43; // rcx
  __int64 CellFlat; // rax
  __int64 v45; // r13
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  signed __int64 *v49; // rdi
  __int64 v50; // r14
  ULONG_PTR v51; // rcx
  __int64 CellPaged; // rax
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned int v55; // r12d
  ULONG_PTR v56; // rcx
  ULONG_PTR v57; // rdx
  ULONG_PTR v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdi
  _DWORD *v62; // r12
  int v63; // eax
  ULONG_PTR v64; // rcx
  __int64 v65; // rax
  _WORD *v66; // rcx
  unsigned int v67; // eax
  int v68; // ecx
  __int64 v69; // rbx
  _QWORD *v70; // rcx
  int v71; // eax
  signed __int64 *v72; // rbx
  __int64 v73; // rdi
  __int64 v74; // rbx
  __int64 v75; // rcx
  __int64 v76; // rcx
  ULONG_PTR v77; // rdx
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v84; // [rsp+20h] [rbp-E0h]
  __int64 v85; // [rsp+28h] [rbp-D8h]
  __int64 v86; // [rsp+30h] [rbp-D0h]
  char v87; // [rsp+41h] [rbp-BFh] BYREF
  char v88; // [rsp+42h] [rbp-BEh]
  _DWORD BugCheckParameter4[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v90; // [rsp+50h] [rbp-B0h]
  unsigned int v91; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v92[3]; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v93; // [rsp+68h] [rbp-98h]
  _QWORD *v94; // [rsp+70h] [rbp-90h]
  __int64 v95; // [rsp+78h] [rbp-88h] BYREF
  __int64 v96; // [rsp+80h] [rbp-80h]
  int v97; // [rsp+90h] [rbp-70h] BYREF
  __int64 v98; // [rsp+98h] [rbp-68h] BYREF
  _WORD *v99; // [rsp+A0h] [rbp-60h]
  __int128 v100; // [rsp+A8h] [rbp-58h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+B8h] [rbp-48h]
  __int64 v102; // [rsp+C8h] [rbp-38h] BYREF
  void *v103; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v104[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-18h]
  __int128 v106; // [rsp+F0h] [rbp-10h] BYREF
  _OWORD v107[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0;
  v96 = a1;
  v88 = a4;
  v105 = a3;
  v104[1] = v104;
  v5 = (_QWORD *)a1;
  v99 = a2;
  v104[0] = v104;
  v91 = 0;
  v100 = 0LL;
  WORD1(v100) = -1;
  v6 = 0LL;
  v102 = 0LL;
  v7 = 0LL;
  v95 = 0LL;
  v98 = 0LL;
  *(_QWORD *)&BugCheckParameter4[1] = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v94 = 0LL;
  v87 = 0;
  v97 = 0;
  v106 = 0LL;
  *(_QWORD *)&v92[1] = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v93 = 0LL;
  HvpGetCellContextReinitialize(&v95);
  HvpGetCellContextReinitialize(&v98);
  v90 = 0LL;
  HvpGetCellContextReinitialize(&BugCheckParameter4[1]);
  BugCheckParameter4[0] = -1;
  v92[0] = -1;
  CmpInitializeDelayDerefContext(&v106);
  v103 = 0LL;
  memset(v107, 0, sizeof(v107));
  CmpAttachToRegistryProcess(&ApcState);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  while ( 1 )
  {
    if ( IsShutdownRundownActive )
    {
      started = -1073741431;
      v14 = 0;
      goto LABEL_149;
    }
    v13 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry(v10, v9, v11, v12, v84, v85, v86);
    v7 = v5[1];
    v14 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 0x100000) != 0 )
    {
      started = -1073741790;
      goto LABEL_149;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v100, v7);
    if ( started < 0 )
      goto LABEL_149;
    CmpLockKcbStackTopExclusiveRestShared(&v100);
    v4 = 1;
    if ( v5[7] || v5[8] )
    {
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v5, 0LL) )
      {
        v30 = 0;
        started = (*(_BYTE *)(v96 + 48) & 1) != 0 ? -1073740763 : -1073741444;
        goto LABEL_150;
      }
      started = CmpTransSearchAddTransFromKeyBody(v5, &v92[1]);
      if ( started < 0 )
        goto LABEL_149;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 32) + 160LL) & 2) != 0 )
      {
        started = -1072103423;
LABEL_149:
        v30 = 0;
LABEL_150:
        if ( !v6 )
          goto LABEL_152;
        goto LABEL_151;
      }
    }
    v14 = 0;
LABEL_11:
    v16 = *(_QWORD *)&v92[1];
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v5, *(_QWORD *)&v92[1]) )
    {
      v4 = 1;
      started = (*(_BYTE *)(v96 + 48) & 1) != 0 ? -1073740763 : -1073741444;
      goto LABEL_143;
    }
    if ( v16 )
      break;
    v20 = v7 + 248;
    if ( *(int *)(v7 + 248) >= 0 )
    {
      v20 = v7 + 264;
      if ( !*(_DWORD *)(v7 + 264) )
        goto LABEL_32;
    }
    started = CmpSnapshotTxOwnerArray(v20, &v91, &v102);
    if ( started < 0 )
    {
      v4 = 1;
LABEL_143:
      v30 = 0;
LABEL_144:
      v14 = 1;
      goto LABEL_150;
    }
    v21 = v91;
    LODWORD(v84) = v91;
    CmpLogTransactionAbortedWithChildName(v7, 0LL, 1LL);
    CmpUnlockKcbStack(&v100);
    v25 = Privileges[1];
    v4 = 0;
    if ( Privileges[1] )
      CmSiFreeMemory(Privileges[1]);
    v100 = 0LL;
    WORD1(v100) = -1;
    *(_OWORD *)Privileges = 0LL;
    CmpUnlockRegistry(v25, v22, v23, v24);
    started = CmpRollbackTransactionArray(v21, v102, v26, &v97);
    if ( started < 0 )
      goto LABEL_149;
    IsShutdownRundownActive = CmpIsShutdownRundownActive();
    v4 = 0;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork(v18, v17, v19);
  v94 = UnitOfWork;
  v6 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v4 = 1;
    v30 = 0;
    v14 = 1;
    started = -1073741670;
    goto LABEL_152;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v7);
  started = CmpTransEnlistUowInCmTrans(v6, v16);
  if ( started < 0 )
    goto LABEL_139;
  if ( !CmpLockIXLockIntent((unsigned int *)(v7 + 248), (__int64)v6) || !CmpLockIXLockExclusive(v7 + 264, v6, 1) )
  {
    started = -1072103423;
LABEL_139:
    v4 = 1;
    v30 = 0;
    goto LABEL_140;
  }
  v28 = (signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL);
  v29 = KeAbPreAcquire((__int64)v28, 0LL);
  if ( _InterlockedCompareExchange64(v28, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v28, 0, v29, (__int64)v28);
  if ( v29 )
    *(_BYTE *)(v29 + 18) = 1;
  v30 = 1;
  started = CmpCloneKCBValueListForTrans(v7, *(_QWORD *)&v92[1], &v87);
  if ( started >= 0 )
  {
    v31 = *(_QWORD *)(v7 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v31 + 72));
    KeAbPostRelease(v31 + 72);
    v16 = *(_QWORD *)&v92[1];
LABEL_32:
    v30 = 0;
    v32 = *(_WORD *)(v7 + 66);
    if ( v32 >= 0 )
    {
      while ( 1 )
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(&v100);
        v35 = *(__int16 *)(KcbAtLayerHeight + 66);
        if ( v35 == *(unsigned __int16 *)(v33 + 4) )
        {
          v36 = *(_BYTE *)(KcbAtLayerHeight + 65);
          if ( !v36 )
            goto LABEL_39;
        }
        else
        {
          if ( !(_WORD)v35 )
            goto LABEL_39;
          v36 = *(_BYTE *)(KcbAtLayerHeight + 65);
        }
        if ( v36 == 1 )
          break;
LABEL_39:
        v37 = *(unsigned int *)(KcbAtLayerHeight + 40);
        if ( (_DWORD)v37 != -1 )
        {
          if ( v16 && *(_QWORD *)(KcbAtLayerHeight + 288) == v16 )
          {
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        (__int64)v92,
                        (__int64)BugCheckParameter4);
          }
          else
          {
            v38 = *(_QWORD *)(KcbAtLayerHeight + 32);
            if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
              HvpGetCellFlat(v38, v37);
            else
              HvpGetCellPaged(v38);
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(KcbAtLayerHeight + 32),
                                     (__int64)v92,
                                     (__int64)BugCheckParameter4);
            v40 = *(_QWORD *)(KcbAtLayerHeight + 32);
            started = NameInListWithStatus;
            if ( (*(_BYTE *)(v40 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v40, &v98);
            else
              HvpReleaseCellPaged(v40, &v98);
          }
          if ( started >= 0 )
          {
            v90 = KcbAtLayerHeight;
            v42 = KcbAtLayerHeight;
            goto LABEL_58;
          }
          if ( started != -1073741772 )
            goto LABEL_136;
          v41 = *(__int16 *)(KcbAtLayerHeight + 66);
          if ( v41 == *(unsigned __int16 *)(v96 + 4) || (_WORD)v41 && *(_BYTE *)(KcbAtLayerHeight + 65) )
            break;
        }
        if ( --v32 < 0 )
          break;
        v16 = *(_QWORD *)&v92[1];
      }
    }
    v42 = v90;
LABEL_58:
    if ( BugCheckParameter4[0] == -1 )
    {
      started = -1073741772;
LABEL_136:
      v4 = 1;
      goto LABEL_144;
    }
    v43 = *(_QWORD *)(v42 + 32);
    if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v43, BugCheckParameter4[0]);
    else
      CellFlat = HvpGetCellPaged(v43);
    v45 = CellFlat;
    if ( (unsigned __int8)CmpIsValueTombstone(*(_QWORD *)(v42 + 32), CellFlat) )
    {
      started = -1073741772;
      goto LABEL_125;
    }
    if ( (*(_BYTE *)(v46 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v46, &BugCheckParameter4[1]);
    else
      HvpReleaseCellPaged(v46, &BugCheckParameter4[1]);
    v14 = 0;
    v45 = 0LL;
    if ( *(_DWORD *)(v7 + 40) != -1 )
    {
      v48 = *(_QWORD *)(v7 + 32);
      ++*(_QWORD *)(v7 + 304);
      v49 = (signed __int64 *)(v48 + 72);
      v50 = KeAbPreAcquire((__int64)v49, 0LL);
      if ( _InterlockedCompareExchange64(v49, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v49, 0, v50, (__int64)v49);
      if ( v50 )
        *(_BYTE *)(v50 + 18) = 1;
      v30 = 1;
      if ( !*(_QWORD *)&v92[1] )
      {
        started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 40));
        v4 = 1;
        if ( started < 0 )
          goto LABEL_133;
      }
      v51 = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v51 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v51, *(unsigned int *)(v7 + 40));
      else
        CellPaged = HvpGetCellPaged(v51);
      v53 = *(unsigned int *)(v7 + 40);
      v54 = *(_QWORD *)(v7 + 32);
      v93 = CellPaged;
      CmpUpdateKeyNodeAccessBits(v54, CellPaged, v53);
      v55 = BugCheckParameter4[0];
      if ( v88 )
      {
        started = CmpSnapshotKcbStackSecurity(&v100, *(_QWORD *)&v92[1], 843140419LL, &v103);
        v4 = 1;
        if ( started < 0 )
          goto LABEL_130;
        started = CmpGetValueForAudit(*(_QWORD *)(v90 + 32), v55);
        if ( started < 0 )
          goto LABEL_130;
      }
      v56 = *(_QWORD *)(v7 + 32);
      if ( *(_QWORD *)&v92[1] )
      {
        if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v56, &v95);
        else
          HvpReleaseCellPaged(v56, &v95);
        v69 = *(_QWORD *)(v7 + 32);
        v93 = 0LL;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v69 + 72));
        KeAbPostRelease(v69 + 72);
        v70 = v94;
        v71 = BugCheckParameter4[0];
        v30 = 0;
        *((_DWORD *)v94 + 17) = 6;
        *((_DWORD *)v70 + 22) = v71;
        started = CmAddLogForAction(v70, 1LL);
        v4 = 1;
        if ( started < 0 )
          goto LABEL_133;
        v72 = (signed __int64 *)(*(_QWORD *)(v7 + 32) + 72LL);
        v73 = KeAbPreAcquire((__int64)v72, 0LL);
        if ( _InterlockedCompareExchange64(v72, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v72, 0, v73, (__int64)v72);
        if ( v73 )
          *(_BYTE *)(v73 + 18) = 1;
        CmpRemoveValueFromList(*(_QWORD *)(v7 + 32));
      }
      else
      {
        v57 = *(unsigned int *)(v7 + 40);
        if ( !*(_WORD *)(v7 + 66) )
        {
          started = HvpMarkCellDirty(v56, v57);
          v4 = 1;
          if ( started >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), *(unsigned int *)(v7 + 100));
            if ( started >= 0 )
            {
              started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), v55);
              if ( started >= 0 )
              {
                v58 = *(_QWORD *)(v90 + 32);
                if ( (*(_BYTE *)(v58 + 140) & 1) != 0 )
                  v59 = HvpGetCellFlat(v58, v55);
                else
                  v59 = HvpGetCellPaged(v58);
                v42 = v90;
                v45 = v59;
                started = CmpMarkValueDataDirty(*(_QWORD *)(v90 + 32));
                if ( started >= 0 )
                {
                  v60 = *(_QWORD *)(v42 + 32);
                  if ( (*(_BYTE *)(v60 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v60, &BugCheckParameter4[1]);
                  else
                    HvpReleaseCellPaged(v60, &BugCheckParameter4[1]);
                  v61 = v93;
                  v45 = 0LL;
                  v62 = (_DWORD *)(v93 + 36);
                  CmpRemoveValueFromList(*(_QWORD *)(v7 + 32));
                  CmpFreeValue(*(_QWORD *)(v7 + 32), BugCheckParameter4[0]);
                  *(_QWORD *)(v61 + 4) = v13;
                  *(_QWORD *)(v7 + 168) = v13;
                  if ( !*v62 )
                  {
                    *(_DWORD *)(v61 + 60) = 0;
                    *(_WORD *)(v7 + 178) = 0;
                    *(_DWORD *)(v61 + 64) = 0;
                    *(_DWORD *)(v7 + 180) = 0;
                  }
                  goto LABEL_109;
                }
LABEL_126:
                if ( v45 )
                {
                  v75 = *(_QWORD *)(v42 + 32);
                  if ( (*(_BYTE *)(v75 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v75, &BugCheckParameter4[1]);
                  else
                    HvpReleaseCellPaged(v75, &BugCheckParameter4[1]);
                }
              }
            }
          }
          goto LABEL_130;
        }
        v63 = HvpMarkCellDirty(v56, v57);
        started = v63;
        v4 = 1;
        if ( v7 == v90 )
        {
          if ( v63 >= 0 )
          {
            started = HvpMarkCellDirty(*(_QWORD *)(v7 + 32), v55);
            if ( started >= 0 )
            {
              v64 = *(_QWORD *)(v7 + 32);
              if ( (*(_BYTE *)(v64 + 140) & 1) != 0 )
                v65 = HvpGetCellFlat(v64, v55);
              else
                v65 = HvpGetCellPaged(v64);
              v45 = v65;
              started = CmpMarkValueDataDirty(*(_QWORD *)(v7 + 32));
              if ( started >= 0 )
              {
                CmpFreeValueData(*(_QWORD *)(v7 + 32));
                *(_DWORD *)(v45 + 8) = -1;
                v61 = v93;
                *(_WORD *)(v45 + 16) |= 2u;
                *(_DWORD *)(v45 + 12) = 0;
                *(_DWORD *)(v45 + 4) = 0;
                *(_QWORD *)(v61 + 4) = v13;
                v62 = (_DWORD *)(v61 + 36);
                *(_QWORD *)(v7 + 168) = v13;
                goto LABEL_109;
              }
              v42 = v90;
              goto LABEL_126;
            }
          }
LABEL_130:
          if ( v93 )
          {
            v76 = *(_QWORD *)(v7 + 32);
            if ( (*(_BYTE *)(v76 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v76, &v95);
            else
              HvpReleaseCellPaged(v76, &v95);
          }
LABEL_133:
          v6 = v94;
          v14 = 1;
          goto LABEL_150;
        }
        if ( v63 < 0 )
          goto LABEL_130;
        v62 = (_DWORD *)(v93 + 36);
        started = CmpSetValueKeyTombstone(
                    *(_QWORD *)(v7 + 32),
                    v93,
                    (_DWORD)v99,
                    *(_DWORD *)(v93 + 36),
                    *(_DWORD *)(v7 + 40) >> 31);
        if ( started < 0 )
          goto LABEL_130;
        v61 = v93;
        v66 = v99;
        *(_QWORD *)(v93 + 4) = v13;
        *(_QWORD *)(v7 + 168) = v13;
        v67 = (unsigned __int16)*v66;
        if ( *(_DWORD *)(v61 + 60) < v67 )
        {
          *(_DWORD *)(v61 + 60) = v67;
          *(_WORD *)(v7 + 178) = *v66;
        }
LABEL_109:
        CmpCleanUpKcbCachedSymlink(v7, &v106);
        v68 = *(_DWORD *)(v61 + 40);
        *(_DWORD *)(v7 + 96) = *v62;
        *(_DWORD *)(v7 + 100) = v68;
      }
      v74 = *(_QWORD *)(v7 + 32);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v74 + 72));
      KeAbPostRelease(v74 + 72);
      v94 = 0LL;
      v87 = 0;
      v30 = 0;
      CmpReportNotifyForKcbStack(&v100, *(_QWORD *)&v92[1], 4LL, v104, v84, v85, v86);
      started = 0;
      v42 = v90;
LABEL_125:
      v4 = 1;
      goto LABEL_126;
    }
    CmpUnlockKcbStack(&v100);
    LOBYTE(v47) = 1;
    v4 = 0;
    started = CmpPromoteKey(&v100, 0LL, v47);
    if ( started < 0 )
      goto LABEL_133;
    v6 = v94;
    v5 = (_QWORD *)v96;
    goto LABEL_11;
  }
  v4 = 1;
LABEL_140:
  v14 = 1;
LABEL_151:
  CmpRundownUnitOfWork(v6);
  ExFreePoolWithTag(v6, 0x77554D43u);
LABEL_152:
  if ( v87 )
  {
    v77 = *(unsigned int *)(v7 + 284);
    if ( (_DWORD)v77 != -1 )
      HvFreeCell(*(_QWORD *)(v7 + 32), v77);
    *(_DWORD *)(v7 + 284) = -1;
    *(_DWORD *)(v7 + 280) = 0;
    *(_QWORD *)(v7 + 288) = 0LL;
  }
  if ( v30 )
  {
    v78 = *(_QWORD *)(v7 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v78 + 72));
    KeAbPostRelease(v78 + 72);
  }
  if ( v4 )
    CmpUnlockKcbStack(&v100);
  CmpDrainDelayDerefContext((_QWORD **)&v106);
  if ( v14 )
    CmpUnlockRegistry(v80, v79, v81, v82);
  if ( v104[0] != v104 )
    CmpSignalDeferredPosts(v104);
  CmpDetachFromRegistryProcess(&ApcState);
  if ( started >= 0 && v88 && v103 )
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v103, 0, (_DWORD)v99, v96, v105, (__int64)v107, 2);
  if ( *((_QWORD *)&v107[0] + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v107[0] + 1), 0x34414D43u);
  if ( v103 )
    CmpFreeTransientPoolWithTag(v103, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
