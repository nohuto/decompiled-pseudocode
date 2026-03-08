/*
 * XREFs of CmpCreateChild @ 0x1407A7590
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     CmpTransEnlistUowInCmTrans @ 0x14024185C (CmpTransEnlistUowInCmTrans.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     CmpTransEnlistUowInKcb @ 0x1402C0814 (CmpTransEnlistUowInKcb.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpGetEffectiveCellType @ 0x14067D5A0 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpIsKeyStackDeleted @ 0x1406B5978 (CmpIsKeyStackDeleted.c)
 *     CmpRundownUnitOfWork @ 0x1406B6040 (CmpRundownUnitOfWork.c)
 *     CmpLockIXLockIntent @ 0x1406B7020 (CmpLockIXLockIntent.c)
 *     CmpLockIXLockExclusive @ 0x1406B70A0 (CmpLockIXLockExclusive.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpMarkKeyDirty @ 0x1406BAB64 (CmpMarkKeyDirty.c)
 *     CmpFreeSecurityDescriptor @ 0x1406BB6D4 (CmpFreeSecurityDescriptor.c)
 *     CmAddLogForAction @ 0x14073485C (CmAddLogForAction.c)
 *     CmpNameSize @ 0x1407612A0 (CmpNameSize.c)
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 *     SeDeassignSecurity @ 0x14076D780 (SeDeassignSecurity.c)
 *     CmpRecordParseFailure @ 0x140774724 (CmpRecordParseFailure.c)
 *     CmpAllocateUnitOfWork @ 0x140784388 (CmpAllocateUnitOfWork.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14079B2C8 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpAddSubKeyEx @ 0x1407A4094 (CmpAddSubKeyEx.c)
 *     SeAssignSecurity @ 0x1407A51B0 (SeAssignSecurity.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1407A5570 (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1407A560C (CmpAssignSecurityToKcb.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     CmpCopyName @ 0x1407A6A30 (CmpCopyName.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1407A893C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpReportNotifyForKcbStack @ 0x1407AEF5C (CmpReportNotifyForKcbStack.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpLogUnsupportedOperation @ 0x140A1D140 (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x140A1E144 (CmpSnapshotTxOwnerArray.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140AF25F0 (CmUnlockHiveSecurity.c)
 *     HvpGetBinContextInitialize @ 0x140AF2644 (HvpGetBinContextInitialize.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpCreateChild(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        UNICODE_STRING *a4,
        __int64 a5,
        __int16 a6,
        int a7,
        char a8,
        __int64 a9)
{
  __int64 v9; // rbx
  char v10; // di
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 KcbAtLayerHeight; // r13
  char v14; // r9
  ULONG_PTR v15; // r15
  ULONG_PTR v16; // rsi
  int v17; // ebx
  _DWORD *v18; // rdi
  char v19; // al
  int v20; // edx
  _DWORD *v21; // r8
  int v22; // edx
  __int16 v23; // cx
  __int16 v24; // dx
  __int64 v25; // r11
  void *v26; // rbx
  __int64 SecurityCacheEntryForKcbStack; // rax
  NTSTATUS v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // r12d
  __int64 v32; // r14
  __int64 CellFlat; // rax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int Cell; // eax
  __int64 v38; // rax
  __int64 v39; // r12
  int SecurityDescriptorNode; // eax
  __int64 v41; // rbx
  __int64 CellPaged; // rax
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // r14
  _QWORD *UnitOfWork; // rax
  int v47; // eax
  _QWORD *v48; // rax
  _QWORD *v49; // r12
  int v50; // eax
  int v51; // eax
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // r9
  int v55; // eax
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // r9
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int64 v62; // rbx
  __int16 v63; // ax
  unsigned __int16 v64; // ax
  __int16 v65; // cx
  __int64 v66; // rax
  __int64 v67; // r14
  int v68; // eax
  char v69; // al
  PVOID v70; // r15
  PVOID v71; // r15
  PSECURITY_DESCRIPTOR v72; // r15
  int v73; // eax
  __int64 v74; // rbx
  int v75; // eax
  _DWORD *v76; // rcx
  _DWORD *v77; // rdx
  int v78; // eax
  ULONG_PTR v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rbx
  unsigned int Length; // edx
  unsigned int v83; // eax
  __int64 v84; // rdi
  void *v85; // rcx
  __int64 v86; // rcx
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-108h]
  PSECURITY_SUBJECT_CONTEXT SubjectContexta; // [rsp+20h] [rbp-108h]
  PGENERIC_MAPPING GenericMapping; // [rsp+28h] [rbp-100h]
  PGENERIC_MAPPING GenericMappinga; // [rsp+28h] [rbp-100h]
  POOL_TYPE PoolType[2]; // [rsp+30h] [rbp-F8h]
  POOL_TYPE PoolTypea[2]; // [rsp+30h] [rbp-F8h]
  char v94; // [rsp+40h] [rbp-E8h]
  char v95; // [rsp+41h] [rbp-E7h]
  char v96; // [rsp+43h] [rbp-E5h]
  char v97; // [rsp+44h] [rbp-E4h]
  __int16 v98; // [rsp+48h] [rbp-E0h]
  unsigned int BugCheckParameter4; // [rsp+4Ch] [rbp-DCh] BYREF
  __int16 BugCheckParameter4_4; // [rsp+50h] [rbp-D8h]
  _DWORD BugCheckParameter3[3]; // [rsp+54h] [rbp-D4h] BYREF
  __int64 v102; // [rsp+60h] [rbp-C8h] BYREF
  PVOID v103; // [rsp+68h] [rbp-C0h]
  __int64 v104; // [rsp+70h] [rbp-B8h] BYREF
  int v105; // [rsp+78h] [rbp-B0h]
  PVOID P; // [rsp+80h] [rbp-A8h]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v108; // [rsp+90h] [rbp-98h]
  void *v109; // [rsp+98h] [rbp-90h] BYREF
  __int64 v110; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v111; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v112; // [rsp+B0h] [rbp-78h]
  _DWORD *v113; // [rsp+B8h] [rbp-70h]
  _QWORD *v114; // [rsp+C0h] [rbp-68h]
  _QWORD *v115; // [rsp+C8h] [rbp-60h]
  size_t Size; // [rsp+D0h] [rbp-58h]
  __int64 v117; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v118; // [rsp+E0h] [rbp-48h]
  _DWORD *v119; // [rsp+E8h] [rbp-40h]
  unsigned int v122; // [rsp+138h] [rbp+10h]
  char v123; // [rsp+138h] [rbp+10h]

  v9 = a2;
  v96 = 0;
  v94 = 0;
  v10 = 0;
  v97 = 0;
  v11 = 0LL;
  *(_QWORD *)&BugCheckParameter3[1] = 0LL;
  BugCheckParameter4 = -1;
  v110 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v110 + 4);
  v109 = 0LL;
  BugCheckParameter3[0] = -1;
  v102 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v102 + 4);
  v108 = 0LL;
  v104 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v104 + 4);
  NewDescriptor = 0LL;
  LODWORD(v111) = -1;
  v103 = 0LL;
  v114 = 0LL;
  P = 0LL;
  v115 = 0LL;
  v95 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v12);
  v117 = KcbAtLayerHeight;
  v15 = CmpGetKcbAtLayerHeight(v9);
  v118 = v15;
  v16 = *(_QWORD *)(v15 + 32);
  v113 = (_DWORD *)v16;
  if ( a9 && (*(_DWORD *)(v16 + 160) & 2) != 0 )
  {
    v17 = -1072103423;
    v18 = (_DWORD *)a5;
    CmpRecordParseFailure(a5, 262400, -1072103423);
    v19 = 0;
    goto LABEL_166;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    v17 = -1073741811;
    v20 = 262528;
LABEL_6:
    v18 = (_DWORD *)a5;
    goto LABEL_7;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v16 + 4112) & 0x20) != 0 )
  {
    v10 = 1;
    v97 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v17 = -1073741790;
    v20 = 262656;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(KcbAtLayerHeight + 32) + 160LL) & 0x100000) != 0 )
  {
    v17 = -1073741790;
    v20 = 262912;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v17 = -1073741790;
    v20 = 263168;
    goto LABEL_6;
  }
  v21 = (_DWORD *)(KcbAtLayerHeight + 184);
  if ( CmpVEEnabled == v14 || (v119 = (_DWORD *)(KcbAtLayerHeight + 184), (*v21 & 0x1000000) == 0) )
  {
    v22 = 0;
    v119 = (_DWORD *)(KcbAtLayerHeight + 184);
  }
  else
  {
    v22 = 1;
  }
  v23 = a6 | 0x100;
  if ( !v22 )
    v23 = a6;
  v24 = v23 | 0x200;
  if ( (*v21 & 0x2000000) == 0 )
    v24 = v23;
  v98 = v24;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
    v17 = -1073741790;
    v20 = 263424;
    goto LABEL_6;
  }
  v18 = (_DWORD *)a5;
  v105 = *(_DWORD *)(a5 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, a9, 512LL) == 1 && !v105 )
  {
    v17 = -1073741439;
    v20 = 263680;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess((PRKAPC_STATE)(a5 + 168));
    *(_DWORD *)(a5 + 160) |= 1u;
    v25 = a9;
  }
  BugCheckParameter4_4 = v98 & 2;
  if ( (v98 & 2) == 0 )
  {
    if ( v97 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack(a1, v25, 0LL) + 32);
    }
    else
    {
      if ( (*(_DWORD *)(v15 + 184) & 0x2000000) == 0
        || (v11 = *(_QWORD *)&BugCheckParameter3[1],
            CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, (int *)(a5 + 16))) )
      {
        v26 = *(void **)(a3 + 64);
      }
      else
      {
        v26 = 0LL;
      }
      SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a9, 0LL);
      v28 = SeAssignSecurity(
              (PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32),
              v26,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v17 = v28;
      if ( v28 < 0 )
      {
        CmpRecordParseFailure(a5, 264192, v28);
        v19 = 0;
        goto LABEL_166;
      }
      v9 = a2;
    }
  }
  if ( a9 && !CmpIsKeyStackDeleted(v9) )
  {
    v17 = CmpUndoDeleteKeyForTransEx(v15, a9, NewDescriptor);
    if ( v17 >= 0 )
      goto LABEL_8;
    v17 = -1073741772;
    v20 = 263936;
LABEL_7:
    CmpRecordParseFailure((__int64)v18, v20, v17);
LABEL_8:
    v19 = 0;
    goto LABEL_166;
  }
  v29 = v105;
  if ( a9 )
    v29 = 1;
  v122 = v29;
  v30 = *(_DWORD *)(v15 + 40);
  if ( v30 != -1 )
  {
    if ( v29 != v30 >> 31 )
      CmpLogUnsupportedOperation(2LL);
    v31 = *(_DWORD *)(v15 + 40) >> 31;
    if ( !a8 )
    {
      v32 = KeAbPreAcquire(v16 + 72, 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)(v16 + 72), 0, v32, v16 + 72);
      if ( v32 )
        *(_BYTE *)(v32 + 18) = 1;
      v94 = 1;
    }
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v16, *(unsigned int *)(v15 + 40));
    else
      CellFlat = HvpGetCellPaged(v16);
    v11 = CellFlat;
    *(_QWORD *)&BugCheckParameter3[1] = CellFlat;
    if ( (unsigned __int16)CmpNameSize(&a4->Length) != *(_WORD *)(CellFlat + 72) )
    {
      CmpLogUnsupportedOperation(1LL);
      v17 = -1073741822;
      v20 = 264448;
      goto LABEL_7;
    }
    v34 = CmpMarkKeyDirty(v16, *(unsigned int *)(v15 + 40), 0);
    v17 = v34;
    if ( v34 < 0 )
    {
      CmpRecordParseFailure(a5, 264704, v34);
      v19 = 0;
      goto LABEL_166;
    }
    v35 = HvpMarkCellDirty(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
    v17 = v35;
    if ( v35 < 0 )
    {
      CmpRecordParseFailure(a5, 264960, v35);
      v19 = 0;
      goto LABEL_166;
    }
    v36 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v36 )
    {
      Cell = HvAllocateCell(v16, v36, v31, BugCheckParameter3, (__int64)&v109, (__int64)&v102);
      v17 = Cell;
      if ( Cell < 0 )
      {
        CmpRecordParseFailure(a5, 265216, Cell);
        v19 = 0;
        goto LABEL_166;
      }
      memmove(v109, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v16, &v102);
      else
        HvpReleaseCellPaged(v16, &v102);
      v109 = 0LL;
    }
    v38 = KeAbPreAcquire(v16 + 1784, 0LL);
    v39 = v38;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 1784), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 1784), v38, v16 + 1784);
    if ( v39 )
      *(_BYTE *)(v39 + 18) = 1;
    v123 = 1;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               v16,
                               *(_DWORD *)(v15 + 40),
                               v11,
                               *(_DWORD *)(v15 + 40) >> 31,
                               NewDescriptor,
                               1,
                               (unsigned int *)&v111);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v16, *(unsigned int *)(v15 + 40));
      *(_DWORD *)(v11 + 44) = v111;
      CmUnlockHiveSecurity(v16);
      v123 = 0;
      *(_DWORD *)(v11 + 48) = BugCheckParameter3[0];
      *(_WORD *)(v11 + 74) = *(_WORD *)(a5 + 4);
      BugCheckParameter3[0] = -1;
      CmpCopyName((_BYTE *)(v11 + 76), a4);
      *(_BYTE *)(v11 + 13) |= 3u;
      *(_WORD *)(v11 + 2) = v98;
      if ( *(_WORD *)(v11 + 72) < a4->Length )
        *(_WORD *)(v11 + 2) = v98 | 0x20;
      v41 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v11 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v15 + 304);
      CmpRebuildKcbCacheFromNode(v15, v11, 0LL, 0);
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
      else
        CellPaged = HvpGetCellPaged(v16);
      v43 = CellPaged;
      v108 = CellPaged;
      *(_QWORD *)(CellPaged + 4) = v41;
      *(_QWORD *)(KcbAtLayerHeight + 168) = v41;
      ++*(_QWORD *)(KcbAtLayerHeight + 304);
      v44 = *(unsigned __int16 *)(v11 + 74);
      if ( *(_DWORD *)(v43 + 56) < v44 )
        *(_DWORD *)(v43 + 56) = v44;
      if ( v94 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
        KeAbPostRelease(v16 + 72);
        v94 = 0;
      }
      CmpReportNotifyForKcbStack(a1, 0LL, 1LL, 0LL, SubjectContext, GenericMapping, *(_QWORD *)PoolTypea);
      v17 = 0;
      v11 = *(_QWORD *)&BugCheckParameter3[1];
    }
    else
    {
      CmpRecordParseFailure(a5, 265728, SecurityDescriptorNode);
      v11 = *(_QWORD *)&BugCheckParameter3[1];
    }
    goto LABEL_165;
  }
  if ( !a8 )
  {
    v45 = KeAbPreAcquire(v16 + 72, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(v16 + 72), 0, v45, v16 + 72);
    if ( v45 )
      *(_BYTE *)(v45 + 18) = 1;
    v94 = 1;
    v11 = *(_QWORD *)&BugCheckParameter3[1];
  }
  if ( !a9 )
  {
    if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      if ( (a7 & 2) != 0 )
      {
        v17 = -1072103423;
        v20 = 267648;
        goto LABEL_7;
      }
      v51 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
      v17 = v51;
      if ( v51 >= 0 )
      {
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v52, *(_DWORD *)(a5 + 120));
        *(_DWORD *)(a5 + 100) |= 4u;
        v17 = -1073741267;
        v20 = 268032;
        goto LABEL_7;
      }
      CmpRecordParseFailure(a5, 267776, v51);
      v19 = 0;
    }
    else if ( *(int *)(KcbAtLayerHeight + 248) >= 0 )
    {
      if ( *(_DWORD *)(v15 + 248) )
      {
        if ( (a7 & 2) != 0 )
        {
          v17 = -1072103423;
          v20 = 268672;
          goto LABEL_7;
        }
        v55 = CmpSnapshotTxOwnerArray(v15 + 248, a5 + 120, a5 + 128);
        v17 = v55;
        if ( v55 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v56, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v17 = -1073741267;
          v20 = 269056;
          goto LABEL_7;
        }
        CmpRecordParseFailure(a5, 268800, v55);
        v19 = 0;
      }
      else
      {
        if ( !*(_DWORD *)(v15 + 264) )
          goto LABEL_138;
        if ( (a7 & 2) != 0 )
        {
          v17 = -1072103423;
          v20 = 269184;
          goto LABEL_7;
        }
        v57 = CmpSnapshotTxOwnerArray(v15 + 264, a5 + 120, a5 + 128);
        v17 = v57;
        if ( v57 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v58, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v17 = -1073741267;
          v20 = 269568;
          goto LABEL_7;
        }
        CmpRecordParseFailure(a5, 269312, v57);
        v19 = 0;
      }
    }
    else
    {
      if ( (a7 & 2) != 0 )
      {
        v17 = -1072103423;
        v20 = 268160;
        goto LABEL_7;
      }
      v53 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
      v17 = v53;
      if ( v53 >= 0 )
      {
        CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v54, *(_DWORD *)(a5 + 120));
        *(_DWORD *)(a5 + 100) |= 4u;
        v17 = -1073741267;
        v20 = 268544;
        goto LABEL_7;
      }
      CmpRecordParseFailure(a5, 268288, v53);
      v19 = 0;
    }
LABEL_166:
    if ( v19 )
      CmUnlockHiveSecurity(v16);
    goto LABEL_168;
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v103 = UnitOfWork;
  v114 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v17 = -1073741670;
    v20 = 265984;
    goto LABEL_7;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
  v47 = CmpTransEnlistUowInCmTrans(v103, a9);
  v17 = v47;
  if ( v47 < 0 )
  {
    CmpRecordParseFailure(a5, 266240, v47);
    v19 = 0;
    goto LABEL_166;
  }
  v48 = (_QWORD *)CmpAllocateUnitOfWork();
  P = v48;
  v115 = v48;
  if ( !v48 )
  {
    v17 = -1073741670;
    v20 = 266496;
    goto LABEL_7;
  }
  CmpTransEnlistUowInKcb(v48, v15);
  v49 = P;
  v50 = CmpTransEnlistUowInCmTrans(P, a9);
  v17 = v50;
  if ( v50 < 0 )
  {
    CmpRecordParseFailure(a5, 266752, v50);
    v19 = 0;
    goto LABEL_166;
  }
  if ( !CmpLockIXLockIntent((unsigned int *)(KcbAtLayerHeight + 248), (__int64)v103) )
  {
    v17 = -1072103423;
    v20 = 267008;
    goto LABEL_7;
  }
  if ( !CmpLockIXLockExclusive(v15 + 248, v49, 0) )
  {
    v17 = -1072103423;
    v20 = 267264;
    goto LABEL_7;
  }
  if ( !CmpLockIXLockExclusive(v15 + 264, v49, 1) )
  {
    v17 = -1072103423;
    v20 = 267520;
    goto LABEL_7;
  }
LABEL_138:
  LODWORD(Size) = (unsigned __int16)CmpNameSize(&a4->Length) + 76;
  v59 = HvAllocateCell(v16, Size, v122, &BugCheckParameter4, (__int64)&BugCheckParameter3[1], (__int64)&v110);
  v17 = v59;
  if ( v59 < 0 )
  {
    CmpRecordParseFailure(a5, 269824, v59);
    v11 = *(_QWORD *)&BugCheckParameter3[1];
    v19 = 0;
    goto LABEL_166;
  }
  v60 = *(unsigned __int16 *)(a5 + 4);
  if ( (_WORD)v60 )
  {
    v61 = HvAllocateCell(v16, v60, v122, BugCheckParameter3, (__int64)&v109, (__int64)&v102);
    v17 = v61;
    if ( v61 < 0 )
    {
      CmpRecordParseFailure(a5, 270080, v61);
      v11 = *(_QWORD *)&BugCheckParameter3[1];
      v19 = 0;
      goto LABEL_166;
    }
    memmove(v109, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &v102);
    else
      HvpReleaseCellPaged(v16, &v102);
    v109 = 0LL;
  }
  v62 = *(_QWORD *)&BugCheckParameter3[1];
  memset(*(void **)&BugCheckParameter3[1], 0, (unsigned int)Size);
  v63 = 27500;
  if ( !BugCheckParameter4_4 )
    v63 = 27502;
  *(_WORD *)v62 = v63;
  *(_BYTE *)(v62 + 12) = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
    *(_BYTE *)(v62 + 13) |= 3u;
  else
    *(_BYTE *)(v62 + 13) &= 0xFCu;
  *(_WORD *)(v62 + 2) = v98;
  v11 = *(_QWORD *)&BugCheckParameter3[1];
  *(_QWORD *)(*(_QWORD *)&BugCheckParameter3[1] + 4LL) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(v11 + 16) = *(_DWORD *)(KcbAtLayerHeight + 40);
  *(_QWORD *)(v11 + 28) = -1LL;
  v113 = (_DWORD *)(v11 + 40);
  *(_DWORD *)(v11 + 40) = -1;
  v112 = v11 + 44;
  *(_DWORD *)(v11 + 44) = -1;
  *(_DWORD *)(v11 + 48) = BugCheckParameter3[0];
  *(_WORD *)(v11 + 74) = *(_WORD *)(a5 + 4);
  BugCheckParameter3[0] = -1;
  if ( (*v119 & 0x80u) != 0 )
    *(_DWORD *)(v11 + 52) ^= (*(_DWORD *)(v11 + 52) ^ (*v119 << 16)) & 0xF00000;
  v64 = CmpCopyName((_BYTE *)(v11 + 76), a4);
  *(_WORD *)(v11 + 72) = v64;
  if ( v64 < a4->Length )
    *(_WORD *)(v11 + 2) |= 0x20u;
  v65 = BugCheckParameter4_4;
  if ( BugCheckParameter4_4 )
  {
    *(_QWORD *)(v11 + 36) = *(_QWORD *)(a5 + 48);
    *(_DWORD *)(v11 + 28) = *(_DWORD *)(a5 + 40);
  }
  v96 = 1;
  if ( !v65 )
  {
    v66 = KeAbPreAcquire(v16 + 1784, 0LL);
    v67 = v66;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 1784), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 1784), v66, v16 + 1784);
    if ( v67 )
      *(_BYTE *)(v67 + 18) = 1;
    v123 = 1;
    v11 = *(_QWORD *)&BugCheckParameter3[1];
    v68 = CmpGetSecurityDescriptorNodeEx(
            v16,
            BugCheckParameter4,
            *(__int64 *)&BugCheckParameter3[1],
            BugCheckParameter4 >> 31,
            NewDescriptor,
            0,
            (unsigned int *)v112);
    v17 = v68;
    if ( v68 < 0 )
    {
      CmpRecordParseFailure(a5, 270592, v68);
LABEL_165:
      v19 = v123;
      goto LABEL_166;
    }
    CmUnlockHiveSecurity(v16);
  }
  v73 = HvpMarkCellDirty(v16, *(unsigned int *)(KcbAtLayerHeight + 40));
  v17 = v73;
  if ( v73 < 0 )
  {
    CmpRecordParseFailure(a5, 270848, v73);
    v69 = 0;
    goto LABEL_169;
  }
  v74 = a9;
  if ( !a9 )
  {
    v75 = CmpAddSubKeyEx(v16, *(unsigned int *)(KcbAtLayerHeight + 40), BugCheckParameter4, 0);
    v17 = v75;
    if ( v75 < 0 )
    {
      CmpRecordParseFailure(a5, 271104, v75);
      v69 = 0;
      goto LABEL_169;
    }
    v74 = 0LL;
  }
  v95 = 1;
  *(_DWORD *)(v15 + 40) = BugCheckParameter4;
  BugCheckParameter4 = -1;
  *(_QWORD *)(v15 + 240) = v74;
  if ( (v98 & 0x40) == 0 )
  {
    *(_DWORD *)(v15 + 96) = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(v15 + 100) = *v113;
  }
  ++*(_QWORD *)(v15 + 304);
  CmpRebuildKcbCacheFromNode(v15, v11, 0LL, 0);
  if ( !BugCheckParameter4_4 )
    CmpAssignSecurityToKcb(v15, *(unsigned int *)v112, 0LL, 0, 0);
  if ( v74 )
  {
    v76 = P;
    *((_DWORD *)P + 17) = 0;
    v76[18] = v105;
    v77 = v103;
    *((_QWORD *)v76 + 10) = v103;
    v77[17] = 1;
    *((_QWORD *)v77 + 11) = v15;
    v78 = CmAddLogForAction((__int64)v76, 1u);
    v17 = v78;
    if ( v78 < 0 )
    {
      CmpRecordParseFailure(a5, 271360, v78);
LABEL_168:
      v69 = v95;
      goto LABEL_169;
    }
    P = 0LL;
    v103 = 0LL;
  }
  v79 = *(_QWORD *)(KcbAtLayerHeight + 32);
  if ( (*(_BYTE *)(v79 + 140) & 1) != 0 )
    v80 = HvpGetCellFlat(v79, *(unsigned int *)(KcbAtLayerHeight + 40));
  else
    v80 = HvpGetCellPaged(v79);
  v81 = v80;
  v108 = v80;
  CmpUpdateKeyNodeAccessBits(*(_QWORD *)(KcbAtLayerHeight + 32), v80, *(unsigned int *)(KcbAtLayerHeight + 40));
  *(_QWORD *)(v81 + 4) = MEMORY[0xFFFFF78000000014];
  Length = a4->Length;
  if ( (unsigned __int16)*(_DWORD *)(v81 + 52) < Length )
    *(_WORD *)(v81 + 52) = Length;
  v83 = *(unsigned __int16 *)(a5 + 4);
  if ( *(_DWORD *)(v81 + 56) < v83 )
    *(_DWORD *)(v81 + 56) = v83;
  ++*(_QWORD *)(KcbAtLayerHeight + 304);
  *(_WORD *)(KcbAtLayerHeight + 176) = *(_WORD *)(v81 + 52);
  *(_QWORD *)(KcbAtLayerHeight + 168) = *(_QWORD *)(v81 + 4);
  CmpCleanUpSubKeyInfo(KcbAtLayerHeight, 1);
  if ( v94 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
    KeAbPostRelease(v16 + 72);
    v94 = 0;
  }
  CmpReportNotifyForKcbStack(a1, a9, 1LL, 0LL, SubjectContexta, GenericMappinga, *(_QWORD *)PoolType);
  v17 = 0;
  v69 = 0;
  v11 = *(_QWORD *)&BugCheckParameter3[1];
LABEL_169:
  if ( v69 )
  {
    BugCheckParameter4 = *(_DWORD *)(v15 + 40);
    *(_DWORD *)(v15 + 40) = -1;
    *(_DWORD *)(v15 + 96) = 0;
    *(_DWORD *)(v15 + 100) = -1;
    *(_WORD *)(v15 + 186) = 0;
    *(_DWORD *)(v15 + 112) = 0;
    *(_QWORD *)(v15 + 168) = 0LL;
    *(_QWORD *)(v15 + 176) = 0LL;
    *(_DWORD *)(v15 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v15 + 185) = 0;
    *(_QWORD *)(v15 + 240) = 0LL;
    *(_QWORD *)(v15 + 88) = 0LL;
  }
  v70 = P;
  if ( P )
  {
    CmpRundownUnitOfWork(P);
    ExFreePoolWithTag(v70, 0x77554D43u);
  }
  v71 = v103;
  if ( v103 )
  {
    CmpRundownUnitOfWork(v103);
    ExFreePoolWithTag(v71, 0x77554D43u);
  }
  v72 = NewDescriptor;
  if ( NewDescriptor && !v97 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v84 = *(_QWORD *)(a3 + 72);
      v85 = *(void **)(v84 + 48);
      if ( v85 )
        ExFreePoolWithTag(v85, 0);
      *(_QWORD *)(v84 + 48) = v72;
    }
  }
  if ( v108 )
  {
    v86 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v86 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v86, &v104);
    else
      HvpReleaseCellPaged(v86, &v104);
  }
  if ( v109 )
  {
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &v102);
    else
      HvpReleaseCellPaged(v16, &v102);
  }
  if ( BugCheckParameter3[0] != -1 )
    HvFreeCell(v16, BugCheckParameter3[0]);
  if ( v11 )
  {
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &v110);
    else
      HvpReleaseCellPaged(v16, &v110);
  }
  if ( BugCheckParameter4 != -1 )
  {
    if ( v96 )
      CmpFreeKeyByCell(v16, BugCheckParameter4, 0);
    else
      HvFreeCell(v16, BugCheckParameter4);
  }
  if ( v94 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v16 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v16 + 72));
    KeAbPostRelease(v16 + 72);
  }
  return (unsigned int)v17;
}
