/*
 * XREFs of CmpCreateChild @ 0x1406E08C4
 * Callers:
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 * Callees:
 *     CmpTransEnlistUowInKcb @ 0x1402FBC44 (CmpTransEnlistUowInKcb.c)
 *     CmpIsKcbInsideVirtualStore @ 0x140347F84 (CmpIsKcbInsideVirtualStore.c)
 *     SkipVirtualAccessCheck @ 0x140347F98 (SkipVirtualAccessCheck.c)
 *     CmpTransEnlistUowInCmTrans @ 0x1403613FC (CmpTransEnlistUowInCmTrans.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpHKeyNodeSize @ 0x1404EC6F4 (CmpHKeyNodeSize.c)
 *     CmpGetEffectiveCellType @ 0x1405CD2B4 (CmpGetEffectiveCellType.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x1405CD308 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpReportNotifyForKcbStack @ 0x1405ED300 (CmpReportNotifyForKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405EF550 (CmpGetKcbAtLayerHeight.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyStackDeleted @ 0x140648C60 (CmpIsKeyStackDeleted.c)
 *     HvAllocateCell @ 0x140656A94 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpCopyName @ 0x140657770 (CmpCopyName.c)
 *     CmpRecordParseFailure @ 0x14066C090 (CmpRecordParseFailure.c)
 *     CmpNameSize @ 0x1406774AC (CmpNameSize.c)
 *     SeDeassignSecurity @ 0x1406842B0 (SeDeassignSecurity.c)
 *     CmAddLogForAction @ 0x14069300C (CmAddLogForAction.c)
 *     CmpAllocateUnitOfWork @ 0x14069B770 (CmpAllocateUnitOfWork.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406A4E54 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpTryAcquireIXLockExclusive @ 0x1406DDEE8 (CmpTryAcquireIXLockExclusive.c)
 *     CmpTryAcquireIXLockIntent @ 0x1406DDEF8 (CmpTryAcquireIXLockIntent.c)
 *     CmpIsKcbImmutable @ 0x1406DEBC0 (CmpIsKcbImmutable.c)
 *     HvUnlockHiveFlusherShared @ 0x1406DF07C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406DF0B4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406DF0D0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1406E2D94 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCleanUpSubKeyInfo @ 0x1406E2E9C (CmpCleanUpSubKeyInfo.c)
 *     CmpAssignSecurityToKcb @ 0x1406E2F20 (CmpAssignSecurityToKcb.c)
 *     CmUnlockHiveSecurity @ 0x1406E2FD4 (CmUnlockHiveSecurity.c)
 *     CmLockHiveSecurityExclusive @ 0x1406E2FF4 (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x1406E3088 (CmpMarkKeyDirty.c)
 *     SeAssignSecurity @ 0x1406E32F0 (SeAssignSecurity.c)
 *     CmpFreeKeyByCell @ 0x1406E4070 (CmpFreeKeyByCell.c)
 *     CmpFreeSecurityDescriptor @ 0x1406E5308 (CmpFreeSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorNode @ 0x1406E6940 (CmpGetSecurityDescriptorNode.c)
 *     CmpLockIXLockExclusive @ 0x14071C7B0 (CmpLockIXLockExclusive.c)
 *     CmpLockIXLockIntent @ 0x14071C810 (CmpLockIXLockIntent.c)
 *     CmpRundownUnitOfWork @ 0x14071CBAC (CmpRundownUnitOfWork.c)
 *     CmpAssignSecurityDescriptor @ 0x140871700 (CmpAssignSecurityDescriptor.c)
 *     CmpGetSecurityDescriptorForKcbStack @ 0x140871DCC (CmpGetSecurityDescriptorForKcbStack.c)
 *     CmpLogUnsupportedOperation @ 0x14087639C (CmpLogUnsupportedOperation.c)
 *     CmpSnapshotTxOwnerArray @ 0x14087829C (CmpSnapshotTxOwnerArray.c)
 *     CmpAddSubKey @ 0x14087A3E8 (CmpAddSubKey.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 *     CmpFreeUnitOfWork @ 0x14087EAF8 (CmpFreeUnitOfWork.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
  char v9; // r15
  char v10; // r14
  __int64 KcbAtLayerHeight; // rdi
  __int64 v12; // r8
  __int64 v13; // r13
  ULONG_PTR v14; // r12
  int v15; // r8d
  int v16; // edx
  int v17; // ebx
  _DWORD *v18; // r14
  bool IsKcbInsideVirtualStore; // al
  __int16 v20; // dx
  __int64 v21; // r11
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // r11
  GENERIC_MAPPING *GenericMapping; // rbx
  void *SecurityDescriptorForKcbStack; // rax
  NTSTATUS v29; // eax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rdx
  char *v33; // rdi
  int v34; // r8d
  int v35; // edx
  int v36; // eax
  int SecurityDescriptorNode; // eax
  int v38; // edx
  char v39; // al
  __int16 v40; // cx
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // ecx
  bool v45; // zf
  _QWORD *UnitOfWork; // rax
  int v47; // eax
  _QWORD *v48; // rax
  int v49; // eax
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // r9
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // r9
  int v61; // ebx
  int v62; // eax
  _BYTE *v63; // rbx
  __int16 v64; // ax
  __int64 v65; // rcx
  int v66; // eax
  unsigned __int16 v67; // ax
  __int16 v68; // cx
  __int64 v69; // rax
  ULONG_PTR v70; // rcx
  ULONG_PTR v71; // rax
  int v72; // eax
  __int64 v73; // rdi
  __int64 v74; // r8
  __int64 Length; // rdx
  unsigned int v76; // eax
  ULONG_PTR v77; // r13
  ULONG_PTR v78; // r13
  PSECURITY_DESCRIPTOR v79; // r13
  __int64 v80; // r14
  void *v81; // rcx
  int SubjectContext; // [rsp+20h] [rbp-108h]
  char v84; // [rsp+41h] [rbp-E7h]
  char v85; // [rsp+42h] [rbp-E6h]
  void *v86; // [rsp+48h] [rbp-E0h] BYREF
  char v87; // [rsp+50h] [rbp-D8h]
  char v88; // [rsp+51h] [rbp-D7h]
  __int16 v89; // [rsp+56h] [rbp-D2h]
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp-D0h]
  __int16 v91; // [rsp+60h] [rbp-C8h]
  int Size[3]; // [rsp+64h] [rbp-C4h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+70h] [rbp-B8h]
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp-B0h]
  ULONG_PTR v95; // [rsp+80h] [rbp-A8h]
  int v96; // [rsp+88h] [rbp-A0h]
  int v97; // [rsp+8Ch] [rbp-9Ch]
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+90h] [rbp-98h] BYREF
  void *v99; // [rsp+98h] [rbp-90h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v101; // [rsp+A8h] [rbp-80h]
  __int64 v102; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-70h] BYREF
  _QWORD *v104; // [rsp+C0h] [rbp-68h]
  _QWORD *v105; // [rsp+C8h] [rbp-60h]
  __int64 v106; // [rsp+D0h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-50h]
  unsigned int v112; // [rsp+170h] [rbp+48h]
  unsigned __int16 *v113; // [rsp+170h] [rbp+48h]

  v85 = 0;
  v9 = 0;
  v88 = 0;
  v10 = 0;
  v87 = 0;
  v86 = 0LL;
  v96 = -1;
  v103 = 0xFFFFFFFFLL;
  v99 = 0LL;
  BugCheckParameter3 = -1LL;
  v100 = 0xFFFFFFFFLL;
  v101 = 0LL;
  v102 = 0xFFFFFFFFLL;
  NewDescriptor = 0LL;
  Size[0] = -1;
  v95 = 0LL;
  v104 = 0LL;
  BugCheckParameter4 = 0LL;
  v105 = 0LL;
  v84 = 0;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
  *(_QWORD *)&Size[1] = KcbAtLayerHeight;
  v13 = CmpGetKcbAtLayerHeight(v12, *(_WORD *)(v12 + 2));
  v106 = v13;
  v14 = *(_QWORD *)(v13 + 32);
  BugCheckParameter2 = v14;
  if ( a9 && (*(_DWORD *)(v14 + 160) & 2) != 0 )
  {
    v15 = -1072103423;
    v16 = 262400;
LABEL_4:
    v17 = v15;
LABEL_5:
    v18 = (_DWORD *)a5;
    goto LABEL_6;
  }
  if ( (a7 & 0xFFFFFFFC) != 0 )
  {
    v17 = -1073741811;
    v15 = -1073741811;
    v16 = 262528;
    goto LABEL_5;
  }
  if ( (a7 & 1) != 0 || (*(_DWORD *)(v14 + 4152) & 0x20) != 0 )
  {
    v10 = 1;
    v87 = 1;
  }
  if ( (*(_DWORD *)(KcbAtLayerHeight + 8) & 0x80u) != 0 )
  {
    v15 = -1073741790;
    v16 = 262656;
    goto LABEL_4;
  }
  if ( CmpIsKcbImmutable(KcbAtLayerHeight) )
  {
    v15 = -1073741790;
    v16 = 262912;
    goto LABEL_4;
  }
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
  {
    v15 = -1073741790;
    v16 = 263168;
    goto LABEL_4;
  }
  IsKcbInsideVirtualStore = CmpIsKcbInsideVirtualStore(KcbAtLayerHeight);
  v22 = v20 | 0x200;
  if ( !IsKcbInsideVirtualStore )
    v22 = v20;
  v89 = v22;
  if ( v10 && *(_QWORD *)(a3 + 64) )
  {
    v15 = -1073741790;
    v16 = 263424;
    goto LABEL_4;
  }
  v18 = (_DWORD *)a5;
  v97 = *(_DWORD *)(a5 + 24) & 1;
  if ( (unsigned int)CmpGetEffectiveCellType(KcbAtLayerHeight, v21, 512LL) == 1 && !v97 )
  {
    v17 = -1073741439;
    v15 = -1073741439;
    v16 = 263680;
    goto LABEL_6;
  }
  if ( (*(_DWORD *)(a5 + 160) & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a5 + 168, v23, v24, v25);
    *(_DWORD *)(a5 + 160) |= 1u;
    v26 = a9;
  }
  v91 = v89 & 2;
  if ( (v89 & 2) == 0 )
  {
    if ( v87 )
    {
      NewDescriptor = (PSECURITY_DESCRIPTOR)CmpGetSecurityDescriptorForKcbStack(a1, v26);
    }
    else
    {
      if ( SkipVirtualAccessCheck(v13) )
        ExplicitDescriptor = 0LL;
      else
        ExplicitDescriptor = *(PSECURITY_DESCRIPTOR *)(a3 + 64);
      GenericMapping = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
      SecurityDescriptorForKcbStack = (void *)CmpGetSecurityDescriptorForKcbStack(a1, a9);
      v29 = SeAssignSecurity(
              SecurityDescriptorForKcbStack,
              ExplicitDescriptor,
              &NewDescriptor,
              1u,
              (PSECURITY_SUBJECT_CONTEXT)(a3 + 32),
              GenericMapping,
              *((POOL_TYPE *)CmKeyObjectType + 25));
      v17 = v29;
      if ( v29 < 0 )
      {
        v15 = v29;
        v16 = 264192;
        goto LABEL_6;
      }
      KcbAtLayerHeight = *(_QWORD *)&Size[1];
    }
  }
  v30 = a9;
  if ( a9 )
  {
    if ( !CmpIsKeyStackDeleted(a2, 0LL) )
    {
      v17 = CmpUndoDeleteKeyForTransEx(v13, a9, NewDescriptor);
      if ( v17 >= 0 )
        goto LABEL_153;
      v17 = -1073741772;
      v15 = -1073741772;
      v16 = 263936;
LABEL_6:
      CmpRecordParseFailure((__int64)v18, v16, v15);
LABEL_153:
      v33 = (char *)v86;
      goto LABEL_154;
    }
    v30 = a9;
  }
  v31 = v97;
  if ( v30 )
    v31 = 1;
  LODWORD(ExplicitDescriptor) = v31;
  v32 = *(unsigned int *)(v13 + 40);
  if ( (_DWORD)v32 != -1 )
  {
    if ( v31 != (unsigned int)v32 >> 31 )
    {
      CmpLogUnsupportedOperation(2LL);
      v32 = *(unsigned int *)(v13 + 40);
    }
    v112 = (unsigned int)v32 >> 31;
    if ( !a8 )
    {
      HvLockHiveFlusherShared(v14);
      v9 = 1;
      v88 = 1;
      v32 = *(unsigned int *)(v13 + 40);
    }
    v33 = (char *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(v14 + 8))(v14, v32, &v103);
    v86 = v33;
    if ( (unsigned __int16)CmpNameSize(&a4->Length) != *((_WORD *)v33 + 36) )
    {
      CmpLogUnsupportedOperation(1LL);
      v17 = -1073741822;
      v34 = -1073741822;
      v35 = 264448;
      goto LABEL_51;
    }
    if ( !(unsigned __int8)CmpMarkKeyDirty(v14, *(unsigned int *)(v13 + 40)) )
    {
      v34 = -1073741443;
      v17 = -1073741443;
      v35 = 264704;
      goto LABEL_51;
    }
    if ( !(unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL), 0LL) )
    {
      v34 = -1073741443;
      v17 = -1073741443;
      v35 = 264960;
      goto LABEL_51;
    }
    v36 = *(unsigned __int16 *)(a5 + 4);
    if ( (_WORD)v36 )
    {
      LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v36, v112, &v99, &v100);
      LODWORD(ExplicitDescriptor) = BugCheckParameter3;
      if ( (_DWORD)BugCheckParameter3 == -1 )
      {
        v34 = -1073741670;
        v17 = -1073741670;
        v35 = 265216;
        goto LABEL_51;
      }
      memmove(v99, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v100);
      v99 = 0LL;
    }
    CmLockHiveSecurityExclusive(v14);
    LOBYTE(SubjectContext) = 1;
    SecurityDescriptorNode = CmpGetSecurityDescriptorNode(
                               v14,
                               *(unsigned int *)(v13 + 40),
                               v33,
                               NewDescriptor,
                               SubjectContext,
                               Size);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode >= 0 )
    {
      CmpFreeSecurityDescriptor(v14);
      *((_DWORD *)v33 + 11) = Size[0];
      CmUnlockHiveSecurity(v14);
      *((_DWORD *)v33 + 12) = BugCheckParameter3;
      v113 = (unsigned __int16 *)(v33 + 74);
      *((_WORD *)v33 + 37) = *(_WORD *)(a5 + 4);
      LODWORD(BugCheckParameter3) = -1;
      CmpCopyName(v33 + 76, a4);
      v33[13] |= 3u;
      v40 = v89;
      *((_WORD *)v33 + 1) = v89;
      if ( *((_WORD *)v33 + 36) < a4->Length )
        *((_WORD *)v33 + 1) = v40 | 0x20;
      v41 = MEMORY[0xFFFFF78000000014];
      v33 = (char *)v86;
      *(_QWORD *)((char *)v86 + 4) = MEMORY[0xFFFFF78000000014];
      ++*(_QWORD *)(v13 + 304);
      CmpRebuildKcbCacheFromNode(v13);
      v42 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v14 + 8))(
              v14,
              *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
              &v102);
      v101 = v42;
      *(_QWORD *)(v42 + 4) = v41;
      v43 = *(_QWORD *)&Size[1];
      *(_QWORD *)(*(_QWORD *)&Size[1] + 168LL) = v41;
      ++*(_QWORD *)(v43 + 304);
      v44 = *v113;
      if ( *(_DWORD *)(v42 + 56) < v44 )
        *(_DWORD *)(v42 + 56) = v44;
      if ( v9 )
        HvUnlockHiveFlusherShared(v14);
      CmpReportNotifyForKcbStack(a1, 0, 1, 0LL);
      v17 = 0;
      v9 = 0;
      goto LABEL_154;
    }
    v38 = 265728;
LABEL_62:
    CmpRecordParseFailure(a5, v38, SecurityDescriptorNode);
    v39 = 1;
    goto LABEL_155;
  }
  v45 = a8 == 0;
  if ( !a8 )
  {
    HvLockHiveFlusherShared(v14);
    v45 = 1;
  }
  v9 = v45;
  if ( a9 )
  {
    UnitOfWork = CmpAllocateUnitOfWork();
    v95 = (ULONG_PTR)UnitOfWork;
    v104 = UnitOfWork;
    if ( !UnitOfWork )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 265984;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(UnitOfWork, KcbAtLayerHeight);
    v47 = CmpTransEnlistUowInCmTrans((_QWORD *)v95, a9);
    v17 = v47;
    if ( v47 < 0 )
    {
      v15 = v47;
      v16 = 266240;
      goto LABEL_6;
    }
    v48 = CmpAllocateUnitOfWork();
    BugCheckParameter4 = (ULONG_PTR)v48;
    v105 = v48;
    if ( !v48 )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 266496;
      goto LABEL_6;
    }
    CmpTransEnlistUowInKcb(v48, v13);
    v49 = CmpTransEnlistUowInCmTrans((_QWORD *)BugCheckParameter4, a9);
    v17 = v49;
    if ( v49 < 0 )
    {
      v15 = v49;
      v16 = 266752;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)CmpLockIXLockIntent(KcbAtLayerHeight + 248, v95) )
    {
      v15 = -1072103423;
      v17 = -1072103423;
      v16 = 267008;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v13 + 248, BugCheckParameter4, 0LL) )
    {
      v15 = -1072103423;
      v17 = -1072103423;
      v16 = 267264;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)CmpLockIXLockExclusive(v13 + 264, BugCheckParameter4, 1LL) )
    {
      v15 = -1072103423;
      v17 = -1072103423;
      v16 = 267520;
      goto LABEL_6;
    }
  }
  else
  {
    if ( *(_QWORD *)(KcbAtLayerHeight + 240) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 267648;
      }
      else
      {
        v50 = CmpSnapshotTxOwnerArray(KcbAtLayerHeight + 248, a5 + 120, a5 + 128);
        v17 = v50;
        if ( v50 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v51, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 268032;
        }
        else
        {
          v15 = v50;
          v16 = 267776;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockIntent((_DWORD *)(KcbAtLayerHeight + 248)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 268160;
      }
      else
      {
        v53 = CmpSnapshotTxOwnerArray(v52, a5 + 120, a5 + 128);
        v17 = v53;
        if ( v53 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v54, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 268544;
        }
        else
        {
          v15 = v53;
          v16 = 268288;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 248)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 268672;
      }
      else
      {
        v56 = CmpSnapshotTxOwnerArray(v55, a5 + 120, a5 + 128);
        v17 = v56;
        if ( v56 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v57, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 269056;
        }
        else
        {
          v15 = v56;
          v16 = 268800;
        }
      }
      goto LABEL_6;
    }
    if ( !CmpTryAcquireIXLockExclusive((_DWORD *)(v13 + 264)) )
    {
      if ( (a7 & 2) != 0 )
      {
        v15 = -1072103423;
        v17 = -1072103423;
        v16 = 269184;
      }
      else
      {
        v59 = CmpSnapshotTxOwnerArray(v58, a5 + 120, a5 + 128);
        v17 = v59;
        if ( v59 >= 0 )
        {
          CmpLogTransactionAbortedWithChildName(KcbAtLayerHeight, a4, 6u, v60, *(_DWORD *)(a5 + 120));
          *(_DWORD *)(a5 + 100) |= 4u;
          v15 = -1073741267;
          v17 = -1073741267;
          v16 = 269568;
        }
        else
        {
          v15 = v59;
          v16 = 269312;
        }
      }
      goto LABEL_6;
    }
  }
  Size[0] = CmpHKeyNodeSize();
  v61 = (int)ExplicitDescriptor;
  HIDWORD(BugCheckParameter3) = HvAllocateCell(v14, Size[0], (int)ExplicitDescriptor, &v86, &v103);
  v96 = HIDWORD(BugCheckParameter3);
  if ( HIDWORD(BugCheckParameter3) == -1 )
  {
    v15 = -1073741670;
    v17 = -1073741670;
    v16 = 269824;
    goto LABEL_6;
  }
  v62 = *(unsigned __int16 *)(a5 + 4);
  if ( (_WORD)v62 )
  {
    LODWORD(BugCheckParameter3) = HvAllocateCell(v14, v62, v61, &v99, &v100);
    LODWORD(ExplicitDescriptor) = BugCheckParameter3;
    if ( (_DWORD)BugCheckParameter3 == -1 )
    {
      v15 = -1073741670;
      v17 = -1073741670;
      v16 = 270080;
      goto LABEL_6;
    }
    memmove(v99, *(const void **)(a5 + 8), *(unsigned __int16 *)(a5 + 4));
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v100);
    v99 = 0LL;
  }
  v63 = v86;
  memset(v86, 0, (unsigned int)Size[0]);
  v64 = 27500;
  if ( !v91 )
    v64 = 27502;
  *(_WORD *)v63 = v64;
  v63[12] = CmpAccessBitForPhase;
  if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 3 )
    v63[13] |= 3u;
  else
    v63[13] &= 0xFCu;
  *((_WORD *)v63 + 1) = v89;
  v33 = (char *)v86;
  *(_QWORD *)((char *)v86 + 4) = MEMORY[0xFFFFF78000000014];
  v65 = *(_QWORD *)&Size[1];
  *((_DWORD *)v33 + 4) = *(_DWORD *)(*(_QWORD *)&Size[1] + 40LL);
  *((_DWORD *)v33 + 7) = -1;
  *((_DWORD *)v33 + 8) = -1;
  *((_DWORD *)v33 + 10) = -1;
  *((_DWORD *)v33 + 11) = -1;
  *((_DWORD *)v33 + 12) = BugCheckParameter3;
  *((_WORD *)v33 + 37) = *(_WORD *)(a5 + 4);
  LODWORD(BugCheckParameter3) = -1;
  v66 = *(_DWORD *)(v65 + 184);
  if ( (v66 & 0x80u) != 0 )
    *((_DWORD *)v33 + 13) ^= (*((_DWORD *)v33 + 13) ^ (v66 << 16)) & 0xF00000;
  v67 = CmpCopyName(v33 + 76, a4);
  *((_WORD *)v33 + 36) = v67;
  if ( v67 < a4->Length )
    *((_WORD *)v63 + 1) |= 0x20u;
  v68 = v91;
  if ( v91 )
  {
    *(_QWORD *)(v33 + 36) = *(_QWORD *)(a5 + 48);
    *((_DWORD *)v33 + 7) = *(_DWORD *)(a5 + 40);
  }
  v85 = 1;
  if ( !v68 )
  {
    CmLockHiveSecurityExclusive(v14);
    SecurityDescriptorNode = CmpAssignSecurityDescriptor(v14, HIDWORD(BugCheckParameter3), v33, NewDescriptor);
    v17 = SecurityDescriptorNode;
    if ( SecurityDescriptorNode < 0 )
    {
      v38 = 270592;
      goto LABEL_62;
    }
    CmUnlockHiveSecurity(v14);
  }
  if ( (unsigned __int8)HvMarkCellDirty(v14, *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL), 0LL) )
  {
    v69 = a9;
    if ( !a9 )
    {
      if ( !(unsigned __int8)CmpAddSubKey(
                               v14,
                               *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
                               HIDWORD(BugCheckParameter3)) )
      {
        v34 = -1073741670;
        v17 = -1073741670;
        v35 = 271104;
        goto LABEL_51;
      }
      v69 = 0LL;
    }
    v84 = 1;
    *(_DWORD *)(v13 + 40) = HIDWORD(BugCheckParameter3);
    HIDWORD(BugCheckParameter3) = -1;
    *(_QWORD *)(v13 + 240) = v69;
    if ( (v89 & 0x40) == 0 )
    {
      *(_DWORD *)(v13 + 96) = *((_DWORD *)v33 + 9);
      *(_DWORD *)(v13 + 100) = *((_DWORD *)v33 + 10);
    }
    ++*(_QWORD *)(v13 + 304);
    CmpRebuildKcbCacheFromNode(v13);
    if ( !v91 )
      CmpAssignSecurityToKcb(v13, *((unsigned int *)v33 + 11), 0);
    if ( a9 )
    {
      v70 = BugCheckParameter4;
      *(_DWORD *)(BugCheckParameter4 + 68) = 0;
      *(_DWORD *)(v70 + 72) = v97;
      v71 = v95;
      *(_QWORD *)(v70 + 80) = v95;
      *(_DWORD *)(v71 + 68) = 1;
      *(_QWORD *)(v71 + 88) = v13;
      v72 = CmAddLogForAction(v70, 1);
      v17 = v72;
      if ( v72 < 0 )
      {
        v34 = v72;
        v35 = 271360;
        goto LABEL_51;
      }
      BugCheckParameter4 = 0LL;
      v95 = 0LL;
    }
    v73 = *(_QWORD *)&Size[1];
    v101 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)&Size[1] + 32LL) + 8LL))(
             *(_QWORD *)(*(_QWORD *)&Size[1] + 32LL),
             *(unsigned int *)(*(_QWORD *)&Size[1] + 40LL),
             &v102);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v73 + 32), v101, *(_DWORD *)(v73 + 40));
    v74 = v101;
    *(_QWORD *)(v101 + 4) = MEMORY[0xFFFFF78000000014];
    Length = a4->Length;
    if ( (unsigned __int16)*(_DWORD *)(v74 + 52) < (unsigned int)Length )
      *(_WORD *)(v74 + 52) = Length;
    v76 = *(unsigned __int16 *)(a5 + 4);
    if ( *(_DWORD *)(v74 + 56) < v76 )
      *(_DWORD *)(v74 + 56) = v76;
    ++*(_QWORD *)(v73 + 304);
    *(_WORD *)(v73 + 176) = *(_WORD *)(v74 + 52);
    *(_QWORD *)(v73 + 168) = *(_QWORD *)(v74 + 4);
    LOBYTE(Length) = 1;
    CmpCleanUpSubKeyInfo(v73, Length);
    if ( !a8 )
      HvUnlockHiveFlusherShared(v14);
    CmpReportNotifyForKcbStack(a1, a9, 1, 0LL);
    v17 = 0;
    v84 = 0;
    v9 = a8 != 0 ? v9 : 0;
    goto LABEL_153;
  }
  v34 = -1073741443;
  v17 = -1073741443;
  v35 = 270848;
LABEL_51:
  CmpRecordParseFailure(a5, v35, v34);
LABEL_154:
  v39 = 0;
LABEL_155:
  if ( v39 )
    CmUnlockHiveSecurity(v14);
  if ( v84 )
  {
    HIDWORD(BugCheckParameter3) = *(_DWORD *)(v13 + 40);
    *(_DWORD *)(v13 + 40) = -1;
    *(_DWORD *)(v13 + 96) = 0;
    *(_DWORD *)(v13 + 100) = -1;
    *(_WORD *)(v13 + 186) = 0;
    *(_DWORD *)(v13 + 112) = 0;
    *(_QWORD *)(v13 + 168) = 0LL;
    *(_QWORD *)(v13 + 176) = 0LL;
    *(_DWORD *)(v13 + 184) &= 0xFFFFFF00;
    *(_BYTE *)(v13 + 185) = 0;
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_QWORD *)(v13 + 88) = 0LL;
  }
  v77 = BugCheckParameter4;
  if ( BugCheckParameter4 )
  {
    CmpRundownUnitOfWork(BugCheckParameter4);
    CmpFreeUnitOfWork(v77);
  }
  v78 = v95;
  if ( v95 )
  {
    CmpRundownUnitOfWork(v95);
    CmpFreeUnitOfWork(v78);
  }
  v79 = NewDescriptor;
  if ( NewDescriptor && !v87 )
  {
    if ( (*v18 & 1) != 0 && (v18[6] & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v80 = *(_QWORD *)(a3 + 72);
      v81 = *(void **)(v80 + 48);
      if ( v81 )
        ExFreePoolWithTag(v81, 0);
      *(_QWORD *)(v80 + 48) = v79;
    }
  }
  if ( v101 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)&Size[1] + 32LL) + 16LL))(
      *(_QWORD *)(*(_QWORD *)&Size[1] + 32LL),
      &v102);
  if ( v99 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v100);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    HvFreeCell(v14, (unsigned int)BugCheckParameter3);
  if ( v33 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v14 + 16))(v14, &v103);
  if ( HIDWORD(BugCheckParameter3) != -1 )
  {
    if ( v85 )
      CmpFreeKeyByCell(v14, HIDWORD(BugCheckParameter3));
    else
      HvFreeCell(v14, HIDWORD(BugCheckParameter3));
  }
  if ( v9 )
    HvUnlockHiveFlusherShared(v14);
  return (unsigned int)v17;
}
