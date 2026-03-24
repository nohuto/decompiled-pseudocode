/*
 * XREFs of CmSetValueKey @ 0x1406DD4B0
 * Callers:
 *     NtSetValueKey @ 0x1406DCBB0 (NtSetValueKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpSwapValueInList @ 0x1402FBC98 (CmpSwapValueInList.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405EE830 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x140648A80 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140648B00 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackSymlink @ 0x1406492A0 (CmpIsKeyStackSymlink.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140649D20 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpAddValueKeyNew @ 0x140657630 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1406577D0 (CmpSetValueKeyNew.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpRemoveValueFromList @ 0x140688570 (CmpRemoveValueFromList.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpIsValueTombstone @ 0x140695E60 (CmpIsValueTombstone.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpCloneKCBValueListForTrans @ 0x14069FBF0 (CmpCloneKCBValueListForTrans.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1406DDEE8 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x1406DDEF8 (CmpTryAcquireIXLockIntent.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpIsKcbImmutable @ 0x1406DEBC0 (CmpIsKcbImmutable.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1406DEBD8 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpFindNameInListWithStatus @ 0x1406DED6C (CmpFindNameInListWithStatus.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1406DF120 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpIsKcbLockedExclusive @ 0x1406DF14C (CmpIsKcbLockedExclusive.c)
 *     CmpSetValueKeyExisting @ 0x1406DFA78 (CmpSetValueKeyExisting.c)
 *     CmpSignalDeferredPosts @ 0x1406E0680 (CmpSignalDeferredPosts.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1406E1E60 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFreeValue @ 0x1406E4228 (CmpFreeValue.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071C810 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408720C4 (CmpSnapshotKcbStackSecurity.c)
 *     CmpLogTransactionAborted @ 0x140874CB4 (CmpLogTransactionAborted.c)
 *     CmpRollbackTransactionArray @ 0x1408750C8 (CmpRollbackTransactionArray.c)
 *     CmpIsShutdownRundownActive @ 0x140875BF8 (CmpIsShutdownRundownActive.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087829C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddValueToList @ 0x14087B408 (CmpAddValueToList.c)
 *     CmpGetValueForAudit @ 0x14087B430 (CmpGetValueForAudit.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D39C (SeAdtRegistryValueChangedAuditAlarm.c)
 */

__int64 __fastcall CmSetValueKey(
        __int64 a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r12
  ULONG_PTR v8; // r13
  ULONG_PTR v9; // rdi
  _BOOL8 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  char IsShutdownRundownActive; // al
  unsigned int v15; // r15d
  __int64 v16; // rbx
  int started; // esi
  __int64 v18; // rsi
  char v19; // r14
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  _QWORD *UnitOfWork; // rax
  char v25; // r15
  PCUNICODE_STRING v26; // rsi
  char v27; // bl
  ULONG_PTR v28; // rdx
  void *v29; // rbx
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r14
  int v35; // edx
  unsigned int v36; // r12d
  __int64 v37; // rax
  bool IsValueTombstone; // si
  __int64 v39; // rcx
  ULONG_PTR v40; // rcx
  int v41; // esi
  unsigned int v42; // r12d
  PCUNICODE_STRING v43; // rcx
  unsigned int Length; // eax
  int v45; // eax
  __int64 v46; // rcx
  unsigned int v47; // ebx
  int v48; // eax
  __int64 v49; // rcx
  unsigned int v50; // r15d
  int v51; // eax
  ULONG_PTR v52; // rcx
  bool v53; // zf
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t v55; // [rsp+28h] [rbp-D8h]
  size_t v56; // [rsp+30h] [rbp-D0h]
  char v57[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v58; // [rsp+48h] [rbp-B8h]
  int v59; // [rsp+50h] [rbp-B0h]
  char PreviousMode; // [rsp+54h] [rbp-ACh]
  int v61; // [rsp+58h] [rbp-A8h]
  unsigned int v62; // [rsp+5Ch] [rbp-A4h]
  BOOL v63; // [rsp+60h] [rbp-A0h]
  int v64; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v65; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v66; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-90h] BYREF
  __int64 v68; // [rsp+78h] [rbp-88h] BYREF
  PCUNICODE_STRING String2; // [rsp+80h] [rbp-80h]
  __int128 v70; // [rsp+88h] [rbp-78h] BYREF
  __int128 v71; // [rsp+98h] [rbp-68h]
  __int64 v72; // [rsp+A8h] [rbp-58h] BYREF
  void *Src; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-40h]
  _QWORD v76[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-28h] BYREF
  void *v78; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-18h]
  __int128 v80; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v81; // [rsp+100h] [rbp+0h] BYREF
  __int128 v82; // [rsp+110h] [rbp+10h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp+20h] BYREF
  _OWORD v84[3]; // [rsp+140h] [rbp+40h] BYREF

  v79 = a6;
  v7 = a1;
  String2 = a2;
  v76[1] = v76;
  v76[0] = v76;
  v8 = 0LL;
  v70 = 0LL;
  WORD1(v70) = -1;
  v9 = 0LL;
  v58 = a1;
  Src = a4;
  v61 = a3;
  v65 = 0;
  v74 = 0LL;
  v66 = 0;
  memset(v84, 0, sizeof(v84));
  v57[0] = 0;
  v67 = 0;
  v77 = 0LL;
  v80 = 0LL;
  v72 = 0xFFFFFFFFLL;
  v71 = 0LL;
  v68 = 0xFFFFFFFFLL;
  CmpInitializeDelayDerefContext(&v80);
  v81 = 0LL;
  v64 = -1;
  v82 = 0LL;
  v59 = -1;
  v78 = (void *)v10;
  v63 = v10;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess((__int64)v84, v11, v12, v13);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  v15 = a5;
  v62 = a5;
  while ( 2 )
  {
    if ( IsShutdownRundownActive )
    {
      v27 = 0;
      v19 = 0;
      v25 = 0;
      started = -1073741431;
      goto LABEL_42;
    }
    v16 = MEMORY[0xFFFFF78000000014];
    CmpLockRegistry();
    v9 = *(_QWORD *)(v7 + 8);
    if ( (unsigned __int8)CmpIsKcbImmutable(v9) )
    {
      started = -1073741790;
      goto LABEL_130;
    }
    started = CmpStartKcbStackForTopLayerKcb(&v70, v9);
    if ( started < 0 )
    {
LABEL_130:
      v27 = 1;
      v19 = 0;
      v25 = 0;
      goto LABEL_42;
    }
    v18 = v58;
    if ( *(_QWORD *)(v58 + 56) || *(_QWORD *)(v58 + 64) )
    {
      v19 = 1;
      CmpLockKcbStackTopExclusiveRestShared(&v70);
    }
    else
    {
      v19 = 0;
      CmpLockKcbStackShared((__int64)&v70);
    }
    if ( !*(_QWORD *)(v18 + 56) && !*(_QWORD *)(v18 + 64) )
      goto LABEL_15;
    if ( CmpIsKeyDeletedForKeyBody(v18, 0LL) )
    {
LABEL_126:
      v19 = 1;
      v25 = 0;
      v53 = (*(_BYTE *)(v18 + 48) & 1) == 0;
      started = -1073740763;
      if ( v53 )
        started = -1073741444;
      goto LABEL_40;
    }
    started = CmpTransSearchAddTransFromKeyBody((_QWORD *)v18, &v77);
    if ( started < 0 )
    {
LABEL_38:
      v19 = 1;
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
    {
LABEL_124:
      started = -1072103423;
      goto LABEL_38;
    }
    v18 = v58;
LABEL_15:
    v20 = v77;
    v75 = v77;
    while ( 1 )
    {
      if ( CmpIsKeyDeletedForKeyBody(v18, v20) )
        goto LABEL_126;
      if ( *(_BYTE *)(v9 + 65) == 1 )
        goto LABEL_37;
      if ( v20 )
      {
        UnitOfWork = CmpAllocateUnitOfWork();
        v8 = (ULONG_PTR)UnitOfWork;
        if ( !UnitOfWork )
        {
          v7 = v58;
          v19 = 1;
          v27 = 1;
          started = -1073741670;
          v25 = 0;
          goto LABEL_44;
        }
        CmpTransEnlistUowInKcb(UnitOfWork, v9);
        started = CmpTransEnlistUowInCmTrans((_QWORD *)v8, v20);
        if ( started < 0 )
          goto LABEL_38;
        if ( !(unsigned __int8)CmpLockIXLockIntent(v9 + 248, v8)
          || !(unsigned __int8)CmpLockIXLockExclusive(v9 + 264, v8, 1LL) )
        {
          goto LABEL_124;
        }
        HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v25 = 1;
        if ( !CmpCloneKCBValueListForTrans(v9, v20, v57) )
        {
          started = -1073741670;
          v19 = 1;
          goto LABEL_40;
        }
        HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
        v15 = v62;
        goto LABEL_30;
      }
      if ( !(unsigned __int8)CmpTryAcquireIXLockIntent(v9 + 248)
        || !(unsigned __int8)CmpTryAcquireIXLockExclusive(v9 + 264) )
      {
        break;
      }
LABEL_30:
      if ( CmpIsKeyStackSymlink((__int64)&v70) )
      {
        if ( v61 != 6
          || (v15 & 1) != 0
          || v15 > 0xFFFF
          || (v26 = String2) == 0LL
          || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
          || RtlIsSandboxedToken(&SubjectContext, PreviousMode) )
        {
LABEL_37:
          started = -1073741790;
          goto LABEL_38;
        }
      }
      else
      {
        v26 = String2;
      }
      if ( *(_DWORD *)(v9 + 40) == -1 )
      {
        CmpUnlockKcbStack((__int64)&v70);
        LOBYTE(v31) = 1;
        v19 = 0;
        started = CmpPromoteKey(&v70, 0LL, v31);
        if ( started < 0 )
        {
          v27 = 1;
          v25 = 0;
          goto LABEL_41;
        }
        v18 = v58;
        v19 = 1;
      }
      else
      {
        if ( v19 )
          goto LABEL_77;
        v32 = CmpCompareNewValueDataAgainstKCBCache(v9, v26, (unsigned int)v61, Src, v15);
        if ( v32 != 1 )
        {
          v19 = 1;
          if ( !v32 )
          {
            started = 0;
            goto LABEL_39;
          }
          if ( (unsigned int)CmpIsKcbLockedExclusive(v9) || (unsigned __int8)CmpTryConvertKcbLockSharedToExclusive() )
          {
LABEL_77:
            v33 = *(_QWORD *)(v9 + 32);
            ++*(_QWORD *)(v9 + 304);
            HvLockHiveFlusherShared(v33);
            v25 = 1;
            if ( !v20 && !(unsigned __int8)HvMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40), 0LL) )
            {
              started = -1073741443;
              v19 = 1;
              goto LABEL_40;
            }
            v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    *(unsigned int *)(v9 + 40),
                    &v72);
            CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), v34, *(unsigned int *)(v9 + 40));
            v35 = v9 + 280;
            if ( !v20 )
              v35 = v34 + 36;
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v9 + 32),
                        v35,
                        (_DWORD)v26,
                        0,
                        (__int64)&v66,
                        (__int64)&v64);
            if ( (int)(started + 0x80000000) >= 0 && started != -1073741772 )
              goto LABEL_118;
            v36 = v64;
            if ( !a7 )
              goto LABEL_91;
            started = CmpSnapshotKcbStackSecurity(&v70, v75, 859917635LL, &v78);
            if ( started < 0 )
              goto LABEL_118;
            if ( v36 == -1 )
            {
              v63 = 0;
              goto LABEL_91;
            }
            v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 8LL))(
                    *(_QWORD *)(v9 + 32),
                    v36,
                    &v68);
            IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), v37);
            v63 = !IsValueTombstone;
            (*(void (__fastcall **)(__int64, __int64 *))(v39 + 16))(v39, &v68);
            if ( !IsValueTombstone )
            {
              started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v36, &v81, 876694851LL);
              if ( started < 0 )
                goto LABEL_118;
            }
LABEL_91:
            v40 = *(_QWORD *)(v9 + 32);
            v41 = *(_DWORD *)(v9 + 40) >> 31;
            v64 = v41;
            if ( v75 )
            {
              LODWORD(Size) = v62;
              v48 = CmpAddValueKeyNew(v40, &String2->Length, v61, Src, Size, 1);
              v59 = v48;
              v47 = v48;
              if ( v48 == -1 )
              {
                started = -1073741670;
                goto LABEL_119;
              }
              v49 = *(_QWORD *)(v9 + 32);
              if ( v36 == -1 )
              {
                v67 = *(_DWORD *)(v9 + 280);
                started = CmpAddValueToList(v49, v48, v67, 1, v9 + 280);
                if ( started < 0 )
                  goto LABEL_118;
                v50 = v67;
                v41 = v64;
              }
              else
              {
                v50 = v66;
                CmpSwapValueInList(v49, v48, v66, v9 + 280);
              }
              HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
              if ( v36 == -1 )
              {
                v51 = 4;
              }
              else
              {
                *(_DWORD *)(v8 + 88) = v36;
                v51 = 5;
              }
              *(_DWORD *)(v8 + 68) = v51;
              *(_DWORD *)(v8 + 92) = v59;
              *(_DWORD *)(v8 + 72) = v41;
              started = CmAddLogForAction(v8, 1);
              if ( started < 0 )
              {
                if ( v34 )
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v72);
                  v34 = 0LL;
                }
                HvLockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v52 = *(_QWORD *)(v9 + 32);
                if ( v36 == -1 )
                  CmpRemoveValueFromList(v52, v50, (unsigned int *)(v9 + 280));
                else
                  CmpSwapValueInList(v52, v36, v50, v9 + 280);
                HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
                v25 = 0;
                goto LABEL_118;
              }
            }
            else
            {
              if ( v36 != -1 )
              {
                (*(void (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v40 + 8))(v40, v36, &v68);
                LODWORD(v55) = v62;
                started = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), Src, v55, v41);
                (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v68);
                if ( started >= 0 )
                {
                  v42 = v62;
                  goto LABEL_96;
                }
LABEL_118:
                v47 = v59;
LABEL_119:
                if ( v34 )
                  (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v9 + 32) + 16LL))(*(_QWORD *)(v9 + 32), &v72);
                v19 = 1;
                if ( v47 != -1 )
                  CmpFreeValue(*(_QWORD *)(v9 + 32), v47);
                goto LABEL_40;
              }
              v42 = v62;
              LODWORD(v56) = v62;
              started = CmpSetValueKeyNew(v40, v34, &String2->Length, v66, v61, Src, v56, v41);
              if ( started < 0 )
                goto LABEL_118;
LABEL_96:
              v43 = String2;
              Length = String2->Length;
              if ( *(_DWORD *)(v34 + 60) < Length )
              {
                *(_DWORD *)(v34 + 60) = Length;
                *(_WORD *)(v9 + 178) = v43->Length;
              }
              if ( *(_DWORD *)(v34 + 64) < v42 )
              {
                *(_DWORD *)(v34 + 64) = v42;
                *(_DWORD *)(v9 + 180) = v42;
              }
              *(_QWORD *)(v34 + 4) = v16;
              *(_QWORD *)(v9 + 168) = v16;
              CmpCleanUpKcbCachedSymlink(v9);
              v45 = *(_DWORD *)(v34 + 36);
              *(_DWORD *)(v9 + 100) = *(_DWORD *)(v34 + 40);
              v46 = *(_QWORD *)(v9 + 32);
              *(_DWORD *)(v9 + 96) = v45;
              HvUnlockHiveFlusherShared(v46);
            }
            v8 = 0LL;
            v47 = -1;
            v57[0] = 0;
            CmpReportNotifyForKcbStack((__int64)&v70, v75, 4, (__int64)v76);
            started = 0;
            v25 = 0;
            goto LABEL_119;
          }
        }
        CmpUnlockKcbStack((__int64)&v70);
        CmpLockKcbStackTopExclusiveRestShared(&v70);
        v18 = v58;
      }
    }
    started = CmpSnapshotTxOwnerArray(v21, &v65, &v74);
    if ( started < 0 )
      goto LABEL_38;
    CmpLogTransactionAborted(v9, 1LL, v22, v65);
    CmpUnlockKcbStack((__int64)&v70);
    v19 = 0;
    CmpCleanupKcbStack((__int64)&v70);
    v70 = 0LL;
    WORD1(v70) = -1;
    v71 = 0LL;
    CmpUnlockRegistry();
    started = CmpRollbackTransactionArray(v65, v74, v23, &v67);
    if ( started >= 0 )
    {
      IsShutdownRundownActive = CmpIsShutdownRundownActive();
      v7 = v58;
      continue;
    }
    break;
  }
LABEL_39:
  v25 = 0;
LABEL_40:
  v27 = v19;
LABEL_41:
  v7 = v58;
LABEL_42:
  if ( v8 )
  {
    CmpRundownUnitOfWork(v8);
    CmpFreeUnitOfWork(v8);
  }
LABEL_44:
  if ( v57[0] )
  {
    v28 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v28 != -1 )
      HvFreeCell(*(_QWORD *)(v9 + 32), v28);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v25 )
    HvUnlockHiveFlusherShared(*(_QWORD *)(v9 + 32));
  if ( v19 )
    CmpUnlockKcbStack((__int64)&v70);
  CmpDrainDelayDerefContext((_QWORD **)&v80);
  if ( v27 )
    CmpUnlockRegistry();
  if ( (_QWORD *)v76[0] != v76 )
    CmpSignalDeferredPosts(v76);
  CmpDetachFromRegistryProcess((__int64)v84);
  SeReleaseSubjectContext(&SubjectContext);
  v29 = v78;
  if ( started >= 0 && a7 && v78 )
  {
    *(_QWORD *)&v82 = __PAIR64__(v62, v61);
    *((_QWORD *)&v82 + 1) = Src;
    SeAdtRegistryValueChangedAuditAlarm(0, (_DWORD)v78, 0, (_DWORD)String2, v7, v79, (__int64)&v81, v63);
  }
  if ( *((_QWORD *)&v81 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v81 + 1), 0x34414D43u);
  if ( v29 )
    CmpFreeTransientPoolWithTag(v29, 0x33414D43u);
  CmpCleanupKcbStack((__int64)&v70);
  return (unsigned int)started;
}
