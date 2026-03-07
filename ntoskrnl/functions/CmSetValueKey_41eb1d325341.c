__int64 __fastcall CmSetValueKey(
        _QWORD *a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  _QWORD *v7; // r14
  _QWORD *v8; // r13
  ULONG_PTR v9; // rsi
  int v10; // rdx^4
  _BOOL8 v11; // rdx
  char IsShutdownRundownActive; // al
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rbx
  int started; // edi
  _QWORD *v19; // rdi
  char v20; // r12
  char v21; // r15
  __int64 v22; // r15
  ULONG_PTR v23; // rcx
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  PPRIVILEGE_SET v29; // rcx
  __int64 v30; // r8
  _QWORD *UnitOfWork; // rax
  signed __int64 *v32; // rdi
  __int64 v33; // r14
  char v34; // r14
  __int64 v35; // rdi
  unsigned int v36; // edi
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdi
  signed __int64 *v40; // rdi
  __int64 v41; // r14
  __int64 v42; // r12
  ULONG_PTR v43; // rcx
  __int64 CellFlat; // rax
  __int64 v45; // r13
  _DWORD *v46; // rdx
  unsigned int v47; // r15d
  ULONG_PTR v48; // rcx
  __int64 CellPaged; // rax
  __int64 v50; // rcx
  bool IsValueTombstone; // di
  BOOL v52; // eax
  int v53; // edi
  ULONG_PTR v54; // rcx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  unsigned int v58; // r15d
  PCUNICODE_STRING v59; // rcx
  unsigned int Length; // eax
  int v61; // ecx
  __int64 v62; // rbx
  __int64 v63; // rcx
  ULONG_PTR v64; // rcx
  __int64 v65; // rbx
  _DWORD *v66; // rcx
  int v67; // eax
  __int64 v68; // rcx
  signed __int64 *v69; // rbx
  __int64 v70; // r14
  ULONG_PTR v71; // rcx
  __int64 v72; // rbx
  __int64 v73; // r12
  ULONG_PTR *v74; // rbx
  ULONG_PTR v75; // rdx
  ULONG_PTR v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  void *v81; // rbx
  void *Src; // [rsp+28h] [rbp-E0h]
  void *Srca; // [rsp+28h] [rbp-E0h]
  size_t Size; // [rsp+30h] [rbp-D8h]
  size_t Sizea; // [rsp+30h] [rbp-D8h]
  __int64 v87; // [rsp+38h] [rbp-D0h]
  char v88; // [rsp+48h] [rbp-C0h]
  char v89; // [rsp+49h] [rbp-BFh]
  char v90; // [rsp+4Ah] [rbp-BEh] BYREF
  __int64 v91; // [rsp+50h] [rbp-B8h]
  int v92; // [rsp+58h] [rbp-B0h]
  unsigned int v93; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v94; // [rsp+60h] [rbp-A8h]
  unsigned int v95; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v96; // [rsp+68h] [rbp-A0h]
  unsigned int BugCheckParameter4; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL BugCheckParameter4_4; // [rsp+70h] [rbp-98h]
  __int64 v99; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v100; // [rsp+80h] [rbp-88h] BYREF
  __int64 v101; // [rsp+88h] [rbp-80h] BYREF
  PCUNICODE_STRING String2; // [rsp+90h] [rbp-78h]
  __int64 v103; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v104; // [rsp+A0h] [rbp-68h]
  __int128 v105; // [rsp+A8h] [rbp-60h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+B8h] [rbp-50h]
  int v107; // [rsp+C8h] [rbp-40h] BYREF
  void *v108; // [rsp+D0h] [rbp-38h]
  int v109; // [rsp+D8h] [rbp-30h]
  __int64 v110; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD *v111[2]; // [rsp+F0h] [rbp-18h] BYREF
  void *v112; // [rsp+100h] [rbp-8h] BYREF
  __int64 v113; // [rsp+108h] [rbp+0h]
  __int128 v114; // [rsp+110h] [rbp+8h] BYREF
  __int128 v115; // [rsp+120h] [rbp+18h] BYREF
  __int128 v116; // [rsp+130h] [rbp+28h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+140h] [rbp+38h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp+58h] BYREF

  v113 = a6;
  v111[1] = v111;
  v111[0] = v111;
  v7 = a1;
  String2 = a2;
  v8 = 0LL;
  v91 = (__int64)a1;
  v9 = 0LL;
  v105 = 0LL;
  WORD1(v105) = -1;
  v108 = a4;
  v96 = a3;
  v100 = 0;
  v110 = 0LL;
  v93 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v104 = 0LL;
  v90 = 0;
  v107 = 0;
  v114 = 0LL;
  v103 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v101 = 0xFFFFFFFFLL;
  HvpGetBinContextInitialize((char *)&v101 + 4);
  HIDWORD(v99) = v10;
  LODWORD(v99) = -1;
  HvpGetBinContextInitialize((char *)&v99 + 4);
  CmpInitializeDelayDerefContext(&v114);
  v115 = 0LL;
  BugCheckParameter4 = -1;
  v116 = 0LL;
  v95 = -1;
  v112 = (void *)v11;
  BugCheckParameter4_4 = v11;
  LOBYTE(v92) = KeGetCurrentThread()->PreviousMode;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  SeCaptureSubjectContext(&SubjectContext);
  CmpAttachToRegistryProcess(&ApcState);
  IsShutdownRundownActive = CmpIsShutdownRundownActive();
  v16 = a5;
  v94 = a5;
LABEL_2:
  if ( IsShutdownRundownActive )
  {
    v21 = 0;
    v89 = 0;
    v34 = 0;
    started = -1073741431;
    goto LABEL_137;
  }
  v17 = MEMORY[0xFFFFF78000000014];
  CmpLockRegistry(v16, v13, v14, v15);
  v9 = v7[1];
  v89 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 0x100000) != 0 )
  {
    started = -1073741790;
    goto LABEL_159;
  }
  started = CmpStartKcbStackForTopLayerKcb(&v105, v9);
  if ( started < 0 )
  {
LABEL_159:
    v21 = 0;
    v34 = 0;
    goto LABEL_137;
  }
  v19 = v7 + 8;
  if ( v7[7] || *v19 )
  {
    CmpLockKcbStackTopExclusiveRestShared((__int64)&v105);
    v21 = 1;
    v20 = 1;
  }
  else
  {
    CmpLockKcbStackShared(&v105);
    v20 = 0;
    v21 = 1;
  }
  v88 = 1;
  if ( !v7[7] && !*v19 )
    goto LABEL_14;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, 0LL) )
  {
    v73 = v91;
    v34 = 0;
    started = -1073740763;
    if ( (*(_BYTE *)(v91 + 48) & 1) == 0 )
      started = -1073741444;
LABEL_138:
    if ( v8 )
      goto LABEL_139;
    goto LABEL_140;
  }
  started = CmpTransSearchAddTransFromKeyBody(v7, &v103);
  if ( started < 0 )
  {
LABEL_154:
    v34 = 0;
LABEL_137:
    v73 = v91;
    goto LABEL_138;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 160LL) & 2) != 0 )
  {
    started = -1072103423;
    goto LABEL_154;
  }
LABEL_14:
  v22 = v103;
  while ( 1 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v7, v22) )
    {
      v73 = v91;
      v34 = 0;
      v21 = 1;
      started = -1073740763;
      if ( (*(_BYTE *)(v91 + 48) & 1) == 0 )
        started = -1073741444;
      goto LABEL_138;
    }
    if ( *(_BYTE *)(v9 + 65) == 1 )
    {
      started = -1073741790;
      goto LABEL_149;
    }
    if ( v22 )
      break;
    v23 = v9 + 248;
    if ( *(int *)(v9 + 248) < 0 || (v23 = v9 + 264, *(_DWORD *)(v9 + 264)) )
    {
      started = CmpSnapshotTxOwnerArray(v23, &v100, &v110);
      if ( started >= 0 )
      {
        v25 = v100;
        CmpLogTransactionAbortedWithChildName(v9, 0LL, 1u, v24, v100);
        CmpUnlockKcbStack(&v105);
        v29 = Privileges[1];
        v21 = 0;
        if ( Privileges[1] )
          CmSiFreeMemory(Privileges[1]);
        v105 = 0LL;
        WORD1(v105) = -1;
        *(_OWORD *)Privileges = 0LL;
        CmpUnlockRegistry(v29, v26, v27, v28);
        v89 = 0;
        started = CmpRollbackTransactionArray(v25, v110, v30, &v107);
        if ( started >= 0 )
        {
          IsShutdownRundownActive = CmpIsShutdownRundownActive();
          goto LABEL_2;
        }
        goto LABEL_154;
      }
LABEL_149:
      v34 = 0;
      goto LABEL_136;
    }
LABEL_37:
    v34 = 0;
    if ( CmpIsKeyStackSymlink((__int64)&v105) )
    {
      if ( v96 != 6
        || (v36 = v94, (v94 & 1) != 0)
        || v94 > 0xFFFF
        || !String2
        || !RtlEqualUnicodeString(&CmSymbolicLinkValueName, String2, 1u)
        || RtlIsSandboxedToken(&SubjectContext, v92) )
      {
        started = -1073741790;
        goto LABEL_136;
      }
    }
    else
    {
      v36 = v94;
    }
    if ( *(_DWORD *)(v9 + 40) == -1 )
    {
      CmpUnlockKcbStack(&v105);
      LOBYTE(v37) = 1;
      v88 = 0;
      started = CmpPromoteKey(&v105, 0LL, v37);
      if ( started < 0 )
        goto LABEL_136;
      v7 = (_QWORD *)v91;
      v20 = 1;
      v88 = 1;
    }
    else
    {
      if ( v20 )
        goto LABEL_57;
      v38 = CmpCompareNewValueDataAgainstKCBCache(v9, (__int64)String2, v96, v108, v36);
      if ( v38 != 1 )
      {
        if ( !v38 )
        {
          started = 0;
          goto LABEL_136;
        }
        v20 = 1;
        if ( *(struct _KTHREAD **)(v9 + 56) != KeGetCurrentThread() && !CmpTryConvertKcbLockSharedToExclusive(v9) )
        {
          CmpUnlockKcbStack(&v105);
          CmpLockKcbStackTopExclusiveRestShared((__int64)&v105);
          v7 = (_QWORD *)v91;
          goto LABEL_14;
        }
LABEL_57:
        v39 = *(_QWORD *)(v9 + 32);
        ++*(_QWORD *)(v9 + 304);
        v40 = (signed __int64 *)(v39 + 72);
        v41 = KeAbPreAcquire((__int64)v40, 0LL);
        if ( _InterlockedCompareExchange64(v40, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v40, 0, v41, (__int64)v40);
        if ( v41 )
          *(_BYTE *)(v41 + 18) = 1;
        v42 = v103;
        v34 = 1;
        if ( !v103 )
        {
          started = HvpMarkCellDirty(*(_QWORD *)(v9 + 32), *(unsigned int *)(v9 + 40));
          if ( started < 0 )
          {
LABEL_136:
            v21 = v88;
            goto LABEL_137;
          }
        }
        v43 = *(_QWORD *)(v9 + 32);
        if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v43, *(unsigned int *)(v9 + 40));
        else
          CellFlat = HvpGetCellPaged(v43);
        v45 = CellFlat;
        CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v9 + 32), CellFlat, *(_DWORD *)(v9 + 40));
        v46 = (_DWORD *)(v9 + 280);
        if ( !v42 )
          v46 = (_DWORD *)(v45 + 36);
        started = CmpFindNameInListWithStatus(
                    *(_QWORD *)(v9 + 32),
                    v46,
                    (__int64)String2,
                    0,
                    (__int64)&v93,
                    (__int64)&BugCheckParameter4);
        if ( (int)(started + 0x80000000) >= 0 && started != -1073741772 )
          goto LABEL_104;
        v47 = BugCheckParameter4;
        if ( a7 )
        {
          started = CmpSnapshotKcbStackSecurity(&v105, v42, 859917635LL, &v112);
          if ( started < 0 )
            goto LABEL_104;
          if ( v47 != -1 )
          {
            v48 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v48 + 140) & 1) != 0 )
              CellPaged = HvpGetCellFlat(v48, v47);
            else
              CellPaged = HvpGetCellPaged(v48);
            IsValueTombstone = CmpIsValueTombstone(*(_QWORD *)(v9 + 32), CellPaged);
            BugCheckParameter4_4 = !IsValueTombstone;
            if ( (*(_BYTE *)(v50 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v50, &v99);
            else
              HvpReleaseCellPaged(v50, &v99);
            if ( IsValueTombstone || (started = CmpGetValueForAudit(*(_QWORD *)(v9 + 32), v47), started >= 0) )
            {
              v52 = BugCheckParameter4_4;
              goto LABEL_83;
            }
LABEL_104:
            if ( v45 )
            {
              v63 = *(_QWORD *)(v9 + 32);
              if ( (*(_BYTE *)(v63 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v63, &v101);
              else
                HvpReleaseCellPaged(v63, &v101);
            }
            if ( v95 != -1 )
              CmpFreeValue(*(_QWORD *)(v9 + 32), v95);
            v8 = v104;
            goto LABEL_136;
          }
          v52 = 0;
LABEL_83:
          BugCheckParameter4_4 = v52;
        }
        v53 = *(_DWORD *)(v9 + 40) >> 31;
        v109 = v53;
        if ( v42 )
        {
          LODWORD(Src) = v94;
          started = CmpAddValueKeyNew(*(_QWORD *)(v9 + 32), &String2->Length, v96, v108, (size_t)Src, 1, (int *)&v95);
          if ( started < 0 )
            goto LABEL_104;
          v64 = *(_QWORD *)(v9 + 32);
          if ( v47 == -1 )
          {
            v93 = *(_DWORD *)(v9 + 280);
            started = CmpAddValueToListEx(v64, v95, v93, 1, (unsigned int *)(v9 + 280), 1);
            if ( started < 0 )
              goto LABEL_104;
          }
          else
          {
            CmpSwapValueInList(v64, v95, v93, v9 + 280);
          }
          v65 = *(_QWORD *)(v9 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v65 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v65 + 72));
          KeAbPostRelease(v65 + 72);
          v66 = v104;
          if ( BugCheckParameter4 == -1 )
          {
            v67 = 4;
          }
          else
          {
            *((_DWORD *)v104 + 22) = BugCheckParameter4;
            v67 = 5;
          }
          v66[17] = v67;
          v66[18] = v109;
          v66[23] = v95;
          started = CmAddLogForAction((__int64)v66, 1u);
          if ( started >= 0 )
            goto LABEL_102;
          if ( v45 )
          {
            v68 = *(_QWORD *)(v9 + 32);
            if ( (*(_BYTE *)(v68 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v68, &v101);
            else
              HvpReleaseCellPaged(v68, &v101);
            v45 = 0LL;
          }
          v69 = (signed __int64 *)(*(_QWORD *)(v9 + 32) + 72LL);
          v70 = KeAbPreAcquire((__int64)v69, 0LL);
          if ( _InterlockedCompareExchange64(v69, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v69, 0, v70, (__int64)v69);
          if ( v70 )
            *(_BYTE *)(v70 + 18) = 1;
          v71 = *(_QWORD *)(v9 + 32);
          if ( BugCheckParameter4 == -1 )
            CmpRemoveValueFromList(v71, v93, (unsigned int *)(v9 + 280));
          else
            CmpSwapValueInList(v71, BugCheckParameter4, v93, v9 + 280);
          v72 = *(_QWORD *)(v9 + 32);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v72 + 72));
          KeAbPostRelease(v72 + 72);
        }
        else
        {
          v54 = *(_QWORD *)(v9 + 32);
          if ( v47 == -1 )
          {
            v58 = v94;
            started = CmpSetValueKeyNew(v54, v45, (__int64)String2, v93, v96, (__int64)v108, v94, v53);
            if ( started < 0 )
              goto LABEL_104;
          }
          else
          {
            if ( (*(_BYTE *)(v54 + 140) & 1) != 0 )
              v55 = HvpGetCellFlat(v54, v47);
            else
              v55 = HvpGetCellPaged(v54);
            LODWORD(Size) = v94;
            v56 = CmpSetValueKeyExisting(*(_QWORD *)(v9 + 32), v47, v55, v96, v108, Size, v53);
            v57 = *(_QWORD *)(v9 + 32);
            started = v56;
            if ( (*(_BYTE *)(v57 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v57, &v99);
            else
              HvpReleaseCellPaged(v57, &v99);
            if ( started < 0 )
              goto LABEL_104;
            v58 = v94;
          }
          v59 = String2;
          Length = String2->Length;
          if ( *(_DWORD *)(v45 + 60) < Length )
          {
            *(_DWORD *)(v45 + 60) = Length;
            *(_WORD *)(v9 + 178) = v59->Length;
          }
          if ( *(_DWORD *)(v45 + 64) < v58 )
          {
            *(_DWORD *)(v45 + 64) = v58;
            *(_DWORD *)(v9 + 180) = v58;
          }
          *(_QWORD *)(v45 + 4) = v17;
          *(_QWORD *)(v9 + 168) = v17;
          CmpCleanUpKcbCachedSymlink(v9);
          v61 = *(_DWORD *)(v45 + 40);
          v62 = *(_QWORD *)(v9 + 32);
          *(_DWORD *)(v9 + 96) = *(_DWORD *)(v45 + 36);
          *(_DWORD *)(v9 + 100) = v61;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v62 + 72));
          KeAbPostRelease(v62 + 72);
LABEL_102:
          v95 = -1;
          v104 = 0LL;
          v90 = 0;
          CmpReportNotifyForKcbStack(&v105, v103, 4LL, v111, Srca, Sizea, v87);
          started = 0;
        }
        v34 = 0;
        goto LABEL_104;
      }
      CmpUnlockKcbStack(&v105);
      CmpLockKcbStackTopExclusiveRestShared((__int64)&v105);
      v7 = (_QWORD *)v91;
    }
  }
  UnitOfWork = (_QWORD *)CmpAllocateUnitOfWork();
  v104 = UnitOfWork;
  v8 = UnitOfWork;
  if ( !UnitOfWork )
  {
    v21 = 1;
    started = -1073741670;
    v73 = v91;
    v34 = 0;
    goto LABEL_140;
  }
  CmpTransEnlistUowInKcb(UnitOfWork, v9);
  started = CmpTransEnlistUowInCmTrans(v8, v22);
  if ( started < 0 )
    goto LABEL_145;
  if ( CmpLockIXLockIntent((unsigned int *)(v9 + 248), (__int64)v8) && CmpLockIXLockExclusive(v9 + 264, v8, 1) )
  {
    v32 = (signed __int64 *)(*(_QWORD *)(v9 + 32) + 72LL);
    v33 = KeAbPreAcquire((__int64)v32, 0LL);
    if ( _InterlockedCompareExchange64(v32, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v32, 0, v33, (__int64)v32);
    if ( v33 )
      *(_BYTE *)(v33 + 18) = 1;
    v34 = 1;
    started = CmpCloneKCBValueListForTrans(v9, v103, &v90);
    if ( started < 0 )
      goto LABEL_146;
    v35 = *(_QWORD *)(v9 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v35 + 72));
    KeAbPostRelease(v35 + 72);
    v22 = v103;
    goto LABEL_37;
  }
  started = -1072103423;
LABEL_145:
  v34 = 0;
LABEL_146:
  v21 = 1;
  v73 = v91;
LABEL_139:
  CmpRundownUnitOfWork(v8);
  ExFreePoolWithTag(v8, 0x77554D43u);
LABEL_140:
  v74 = (ULONG_PTR *)(v9 + 32);
  if ( v90 )
  {
    v75 = *(unsigned int *)(v9 + 284);
    if ( (_DWORD)v75 != -1 )
      HvFreeCell(*v74, v75);
    *(_DWORD *)(v9 + 284) = -1;
    *(_DWORD *)(v9 + 280) = 0;
    *(_QWORD *)(v9 + 288) = 0LL;
  }
  if ( v34 )
  {
    v76 = *v74;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v76 + 72));
    KeAbPostRelease(v76 + 72);
  }
  if ( v21 )
    CmpUnlockKcbStack(&v105);
  CmpDrainDelayDerefContext((_QWORD **)&v114);
  if ( v89 )
    CmpUnlockRegistry(v78, v77, v79, v80);
  if ( v111[0] != v111 )
    CmpSignalDeferredPosts(v111);
  CmpDetachFromRegistryProcess(&ApcState);
  SeReleaseSubjectContext(&SubjectContext);
  v81 = v112;
  if ( started >= 0 && a7 && v112 )
  {
    *(_QWORD *)&v116 = __PAIR64__(v94, v96);
    *((_QWORD *)&v116 + 1) = v108;
    SeAdtRegistryValueChangedAuditAlarm(
      0,
      (_DWORD)v112,
      0,
      (_DWORD)String2,
      v73,
      v113,
      (__int64)&v115,
      BugCheckParameter4_4);
  }
  if ( *((_QWORD *)&v115 + 1) )
    CmpFreeTransientPoolWithTag(*((void **)&v115 + 1), 0x34414D43u);
  if ( v81 )
    CmpFreeTransientPoolWithTag(v81, 0x33414D43u);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return (unsigned int)started;
}
