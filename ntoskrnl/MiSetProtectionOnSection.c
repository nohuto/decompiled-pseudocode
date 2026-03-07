__int64 __fastcall MiSetProtectionOnSection(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  _DWORD *v8; // r13
  __int64 v10; // rbx
  char v12; // al
  unsigned int ProtectionMask; // eax
  int SessionId; // edi
  unsigned int v15; // edx
  __int64 v16; // rsi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  unsigned __int8 v25; // al
  volatile __int32 *v26; // rbx
  unsigned __int8 v27; // di
  unsigned __int64 v28; // rcx
  __int64 CurrentIrql; // rcx
  __int64 v30; // r13
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rbx
  _DWORD *v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdi
  int v40; // r13d
  int v41; // ebx
  __int64 v42; // r9
  __int64 v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rbx
  __int64 result; // rax
  char v51; // di
  __int64 UsedPtesHandle; // rbx
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rax
  struct _KTHREAD *v56; // rdx
  bool v57; // zf
  ULONG_PTR v58; // r13
  struct _KTHREAD *v59; // r9
  __int64 v60; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v62; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int v65; // ebx
  __int64 v66; // rcx
  unsigned __int64 v67; // r13
  _QWORD *CloneAddress; // rbx
  int v69; // edi
  signed __int32 v70; // eax
  signed __int32 v71; // ett
  __int64 v72; // rdx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rbx
  char v75; // al
  unsigned __int64 v76; // rdi
  __int64 v77; // rbx
  int v78; // eax
  ULONG_PTR v79; // rax
  __int64 v80; // r8
  __int64 v81; // rdx
  unsigned __int64 v82; // r8
  int v83; // eax
  unsigned __int64 v84; // rdi
  unsigned __int64 v85; // rbx
  char v86; // si
  __int64 v87; // r14
  _DWORD *v88; // r15
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // r9
  unsigned __int64 v92; // r9
  __int64 v93; // rax
  unsigned __int8 v94; // bl
  __int64 v95; // r8
  struct _KTHREAD *v96; // rdx
  __int64 v97; // rdi
  _DWORD *v98; // r9
  int v99; // edx
  __int64 v100; // rdx
  _DWORD *v101; // r9
  __int64 v102; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v104; // rax
  __int64 v105; // rcx
  _QWORD *v106; // r9
  __int64 v107; // r13
  __int64 v108; // rdi
  __int64 v109; // r8
  unsigned __int64 v110; // rdx
  unsigned int PfnProtection; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v114; // [rsp+70h] [rbp-90h]
  int v115; // [rsp+78h] [rbp-88h]
  __int64 v116; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *v117; // [rsp+88h] [rbp-78h]
  int v118; // [rsp+90h] [rbp-70h]
  unsigned int v119; // [rsp+94h] [rbp-6Ch]
  __int64 v120; // [rsp+98h] [rbp-68h] BYREF
  __int16 v121[2]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v122; // [rsp+A4h] [rbp-5Ch]
  __int64 v123; // [rsp+A8h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v125; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v126; // [rsp+C0h] [rbp-40h]
  unsigned int v127; // [rsp+C8h] [rbp-38h]
  int v128; // [rsp+CCh] [rbp-34h]
  unsigned __int64 v129; // [rsp+D0h] [rbp-30h]
  __int64 v130; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v131; // [rsp+E0h] [rbp-20h]
  __int64 v132; // [rsp+E8h] [rbp-18h]
  int v133; // [rsp+F0h] [rbp-10h] BYREF
  int v134; // [rsp+F4h] [rbp-Ch] BYREF
  int v135; // [rsp+F8h] [rbp-8h] BYREF
  int v136; // [rsp+FCh] [rbp-4h]
  int v137; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v138; // [rsp+108h] [rbp+8h]
  __int64 v139; // [rsp+110h] [rbp+10h] BYREF
  __int64 v140; // [rsp+118h] [rbp+18h]
  __int64 v141; // [rsp+128h] [rbp+28h] BYREF
  __int64 v142; // [rsp+130h] [rbp+30h]
  __int64 v143; // [rsp+138h] [rbp+38h]
  int v144; // [rsp+140h] [rbp+40h] BYREF
  __int16 v145; // [rsp+144h] [rbp+44h]
  __int16 v146; // [rsp+146h] [rbp+46h]
  __int64 v147; // [rsp+148h] [rbp+48h]
  __int64 v148; // [rsp+150h] [rbp+50h]
  __int64 v149; // [rsp+158h] [rbp+58h]
  _BYTE v150[152]; // [rsp+160h] [rbp+60h] BYREF
  int v151; // [rsp+200h] [rbp+100h] BYREF
  __int16 v152; // [rsp+204h] [rbp+104h]
  __int16 v153; // [rsp+206h] [rbp+106h]
  __int64 v154; // [rsp+208h] [rbp+108h]
  __int64 v155; // [rsp+210h] [rbp+110h]
  __int64 v156; // [rsp+218h] [rbp+118h]
  _BYTE v157[152]; // [rsp+220h] [rbp+120h] BYREF

  v8 = a7;
  v143 = a8;
  v10 = a2;
  v146 = 0;
  v132 = (__int64)a7;
  v133 = 0;
  v141 = 0LL;
  v139 = 0LL;
  PfnProtection = 0;
  v134 = 0;
  memset(v150, 0, sizeof(v150));
  v153 = 0;
  memset(v157, 0, sizeof(v157));
  v12 = *(_DWORD *)(v10 + 48) & 0x70;
  v121[0] = 0;
  if ( v12 == 32 && (unsigned int)MiImageVadHotPatchEligible(v10) && MiGetImageHotPatchTableAddress(v10) <= a4 )
    return 3221225541LL;
  ProtectionMask = MiMakeProtectionMask(a5);
  SessionId = -1;
  v122 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return 3221225541LL;
  v129 = 0LL;
  v130 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v15 = ProtectionMask & 0xFFFFFFFE;
  v16 = 0LL;
  v154 = 20LL;
  if ( (ProtectionMask & 5) != 5 )
    v15 = ProtectionMask;
  v151 = 1;
  v152 = 0;
  v115 = ProtectionMask & 5;
  v119 = v15;
  v17 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v138 = v17;
  v18 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v147 = 20LL;
  v144 = 1;
  v145 = 4;
  v148 = 0LL;
  v116 = a1 + 1664;
  v19 = *(_QWORD *)(a1 + 1680);
  v149 = 0LL;
  v126 = v18;
  CurrentThread = KeGetCurrentThread();
  v128 = 0;
  v120 = 0LL;
  if ( *(_QWORD *)(v19 + 344) )
  {
    v93 = *(unsigned int *)(v10 + 52);
    LODWORD(v93) = v93 & 0x7FFFFFFF;
    if ( v93 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) )
    {
      v94 = MiLockWorkingSetShared(v116);
      MiComputePageCommitment(a3, a4, a2, v94, 0, (__int64)&v120, 0LL);
      MiUnlockWorkingSetShared(v116, v94);
      if ( v120 )
      {
        result = MiChargeFullProcessCommitment(a1, v120);
        if ( (int)result < 0 )
          return result;
      }
      v18 = v126;
      v10 = a2;
    }
  }
  v131 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v116 + 174));
  if ( v115 == 5 )
  {
    v55 = MiCountSharedPages(v10, ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v18);
    v16 = v55;
    if ( a6 )
    {
      v91 = ((__int64)(v126 - v17) >> 3) - v55;
      v57 = v91 == -1;
      v92 = v91 + 1;
      v129 = v92;
      if ( !v57 && !(unsigned int)MiChargeCommit(v131, v92, 0LL) )
      {
        if ( v120 )
          MiReturnFullProcessCommitment(a1, v120);
        return 3221225773LL;
      }
      v16 = 0LL;
    }
    else if ( v55 )
    {
      v65 = MiChargeFullProcessCommitment(a1, v55);
      if ( v65 < 0 )
      {
        if ( v120 )
        {
          MiReturnFullProcessCommitment(a1, v120);
          return (unsigned int)v65;
        }
        return (unsigned int)v65;
      }
      v10 = a2;
    }
  }
  if ( !MiVadPureReserve(v10) )
    goto LABEL_9;
  --*(_WORD *)(v21 + 486);
  v58 = v20 + 1232;
  v128 = 1;
  v59 = KeGetCurrentThread();
  v60 = v22;
  v117 = v59;
  v127 = v22;
  _disable();
  AbEntrySummary = v59->AbEntrySummary;
  if ( !v59->AbEntrySummary )
  {
    AbEntrySummary = KiAbTryReclaimOrphanedEntries(v20 + 1232, v59);
    if ( !AbEntrySummary )
      goto LABEL_81;
    v59 = v117;
  }
  _BitScanForward(&v62, AbEntrySummary);
  v127 = v62;
  v59->AbEntrySummary = AbEntrySummary & ~(1 << v62);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v70 = *SchedulerAssist;
    do
    {
      v71 = v70;
      v70 = _InterlockedCompareExchange(SchedulerAssist, v70 & 0xFFDFFFFF, v70);
    }
    while ( v71 != v70 );
    if ( (v70 & 0x200000) != 0 )
    {
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v59 = v117;
    }
  }
  _enable();
  v60 = (__int64)(&v59[1].Process + 12 * v127);
  if ( v58 - qword_140C65668 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx(v59->ApcState.Process);
  *(_DWORD *)(v60 + 8) = SessionId;
  *(_QWORD *)v60 = v58 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_81:
  if ( _interlockedbittestandset64((volatile signed __int32 *)v58, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v58, v60, v58);
  if ( v60 )
    *(_BYTE *)(v60 + 18) = 1;
  v65 = MiCommitPageTablesForVad(a2, a3);
  if ( v65 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v58, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v58);
    KeAbPostRelease(v58);
    v96 = CurrentThread;
    v57 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v57 && ($C71981A45BEB2B45F82C232A7085991E *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
      KiCheckForKernelApcDelivery();
    if ( v129 )
    {
      MiReturnCommit(v131, v16, v95);
    }
    else if ( v16 )
    {
      v97 = a1;
      MiReturnFullProcessCommitment(a1, v16);
LABEL_170:
      if ( v120 )
        MiReturnFullProcessCommitment(v97, v120);
      return (unsigned int)v65;
    }
    v97 = a1;
    goto LABEL_170;
  }
  v8 = (_DWORD *)v132;
  v10 = a2;
LABEL_9:
  if ( v16 )
  {
    v72 = *(unsigned int *)(v10 + 52);
    LODWORD(v72) = v72 & 0x7FFFFFFF;
    v73 = v16 + (((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31) | v72);
    *(_DWORD *)(v10 + 52) ^= (v73 ^ *(_DWORD *)(v10 + 52)) & 0x7FFFFFFF;
    *(_BYTE *)(v10 + 34) = v73 >> 31;
  }
  v23 = 0LL;
  v118 = 1;
  v24 = 0LL;
  v117 = 0LL;
  v114 = 0LL;
  v25 = *(_BYTE *)(v116 + 184) & 7;
  if ( v25 > 4u )
  {
    if ( v25 != 5 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v123 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
      {
        v98 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v99 = 4;
        }
        else
        {
          v100 = -1LL << ((unsigned __int8)CurrentIrql + 1);
          LOBYTE(CurrentIrql) = v123;
          v99 = v100 & 4;
        }
        v98[5] |= v99;
        v23 = 0LL;
      }
      goto LABEL_20;
    }
  }
  else if ( v25 == 2 )
  {
    v26 = (volatile __int32 *)&unk_140C69E00;
    goto LABEL_14;
  }
  v26 = (volatile __int32 *)(v116 + 192);
LABEL_14:
  v27 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
  {
    v101 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v27 == 2 )
      LODWORD(v102) = 4;
    else
      v102 = (-1LL << (v27 + 1)) & 4;
    v101[5] |= v102;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v26, v27);
    goto LABEL_142;
  }
  if ( !ExpTryAcquireSpinLockShared(v26) )
  {
    ExpWaitForSpinLockSharedAndAcquire(v28, v27);
LABEL_142:
    v23 = 0LL;
  }
  if ( *((_DWORD *)v26 + 1) )
    _InterlockedExchange(v26 + 1, v23);
  CurrentIrql = v27;
  v24 = v114;
  v123 = CurrentIrql;
LABEL_20:
  MiQueryAddressState(a3, a3, CurrentIrql, a2, v23, (int *)&PfnProtection, &v134, v121, &v141, &v133);
  *v8 = MmProtectToValue[PfnProtection];
  v30 = a2;
  v31 = (*(_DWORD *)(a2 + 48) >> 12) & 0x7F;
  v136 = v31;
  if ( v17 <= v126 )
  {
    v32 = 0LL;
    v132 = 0LL;
    while ( 1 )
    {
      if ( (v17 & 0xFFF) == 0 || v118 )
      {
        v118 = 0;
        if ( v24 )
        {
          MiFlushTbList(&v151);
          v33 = v116;
          MiUnlockPageTableInternal(v116, v24);
        }
        else
        {
          v33 = v116;
        }
        if ( (*(_BYTE *)(v33 + 184) & 7) == 2 )
          v34 = &unk_140C69E00;
        else
          v34 = (_DWORD *)(v33 + 192);
        if ( (*v34 & 0x40000000) != 0 || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(v33, v123);
          MiLockWorkingSetShared(v33);
        }
        MiMakeSystemAddressValid(v17, (__int64)&v151, v31, v123, 0);
        v32 = v132;
        v114 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      v35 = *(_QWORD *)v17;
      v36 = (__int64)((v17 << 25) - v32) >> 16;
      if ( v17 >= 0xFFFFF6FB7DBED000uLL
        && v17 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0x600000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v35 & 1) != 0
        && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v104 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
          if ( (v104 & 0x20) != 0 )
            v35 |= 0x20uLL;
          if ( (v104 & 0x42) != 0 )
            v35 |= 0x42uLL;
        }
      }
      v125 = v35;
      if ( (v35 & 1) == 0 )
        break;
      v37 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v125);
      v38 = 0xFFFFFFFFFFLL;
      v140 = (v37 >> 12) & 0xFFFFFFFFFFLL;
      v39 = 48 * v140 - 0x220000000000LL;
      if ( *(__int64 *)(v39 + 40) >= 0
        || (v142 = *(_QWORD *)(v39 + 8),
            v67 = v142 | 0x8000000000000000uLL,
            v67 == MiGetProtoPteAddress(a2, v36 >> 12, 0, &v139)) )
      {
        if ( (a5 & 0x101) == 0 )
        {
          if ( a6 == (a5 & 0x101) )
          {
            if ( *(__int64 *)(v39 + 40) >= 0 )
            {
              v135 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v135);
                while ( *(__int64 *)(v39 + 24) < 0 );
              }
              v40 = a2;
              v41 = MiSanitizePfnProtection(a2, (*(_QWORD *)(v39 + 16) >> 5) & 0x1FLL, v119);
              v43 = 32LL * (v41 & 0x1F);
              if ( v42 )
                *(_QWORD *)(v39 + 16) = v43 | v42 & 0xFFFFFFFFFFFFFC1FuLL;
              else
                *(_QWORD *)(v39 + 16) = MiSwizzleInvalidPte(v43);
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_41;
            }
LABEL_88:
            if ( v115 != 5 && (v35 & 0x200) != 0 )
              v117 = (struct _KTHREAD *)((char *)v117 + 1);
            v40 = a2;
            PfnProtection = MiGetPfnProtection(v38, v36);
            v41 = MiSanitizePfnProtection(a2, PfnProtection, v122);
            MiSetWsleProtection(v66, v36);
LABEL_41:
            MiRevertValidPte(v40, v17, v41, v140, (__int64)&v151);
LABEL_42:
            v17 += 8LL;
            v138 = v17;
LABEL_43:
            v44 = v114;
            goto LABEL_44;
          }
          if ( *(__int64 *)(v39 + 40) < 0 )
            goto LABEL_88;
        }
        v84 = v126;
        if ( (v17 & 0xFFFFFFFFFFFFF000uLL) != (v126 & 0xFFFFFFFFFFFFF000uLL) )
          v84 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        v85 = v17;
        if ( v17 > v84 )
        {
LABEL_133:
          if ( HIDWORD(v147) )
            MiFreeWsleList(v116, &v144, 0LL);
          goto LABEL_43;
        }
        v86 = 0;
        v87 = v116;
        v88 = (_DWORD *)v143;
        while ( 2 )
        {
          v125 = MI_READ_PTE_LOCK_FREE(v85);
          if ( (v125 & 1) == 0
            || (a5 & 0x101) == 0
            && (!a6
             || (v90 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v125),
                 v89 = 6 * ((v90 >> 12) & 0xFFFFFFFFFFLL),
                 *(__int64 *)(48 * ((v90 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0)) )
          {
LABEL_132:
            v31 = v136;
            v17 = v138;
            goto LABEL_133;
          }
          if ( (MiGetWsleContents(v89, v36) & 0xF) == 8 )
          {
            v86 = 1;
            *v88 = 1;
          }
          else
          {
            MiInsertTbFlushEntry(&v144, v36, 1LL);
            if ( HIDWORD(v147) != (_DWORD)v147 )
              goto LABEL_131;
          }
          if ( HIDWORD(v147) )
            MiFreeWsleList(v87, &v144, 0LL);
          if ( v86 )
          {
            MiUnlockVa(v87, v36);
            v86 = 0;
          }
LABEL_131:
          v85 += 8LL;
          v36 += 4096LL;
          if ( v85 > v84 )
            goto LABEL_132;
          continue;
        }
      }
      CloneAddress = 0LL;
      if ( _bittest64((const signed __int64 *)(v39 + 40), 0x28u) || v142 < 0 || !v142 )
      {
        CloneAddress = MiLocateCloneAddress(a1, v67);
        if ( *(_QWORD *)(*(_QWORD *)(v105 + 1680) + 344LL) <= CloneAddress[12] )
          CloneAddress = v106;
      }
      MiFlushTbList(&v151);
      v69 = MiCopyOnWrite(v36, v17, 0xFFFFFFFFFFFFFFFFuLL, 0);
      if ( v69 >= 0 )
      {
        if ( CloneAddress )
          --v120;
        goto LABEL_43;
      }
      v107 = v116;
      MiUnlockPageTableInternal(v116, v114);
      MiUnlockWorkingSetShared(v107, v123);
      MiCopyOnWriteCheckConditions(v107, (unsigned int)v69);
      v44 = 0LL;
      v118 = 1;
      v114 = 0LL;
      MiLockWorkingSetShared(v107);
LABEL_44:
      v30 = a2;
      v32 = v132;
      if ( v17 > v126 )
        goto LABEL_45;
      v24 = v114;
    }
    if ( (v35 & 0x400) != 0 )
    {
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v35) )
      {
        v108 = v35;
        if ( qword_140C657C0 && (v35 & 0x10) == 0 )
          v108 = v35 & ~qword_140C657C0;
        if ( v108 >> 16 != MiGetProtoPteAddress(v30, v36 >> 12, 0, &v139) )
        {
          MiFlushTbList(&v151);
          if ( (int)MiMakeProtoLeafValid(v17, 1LL, v123) < 0 )
          {
            v17 += 8LL;
            v138 = v17;
          }
          v118 = 1;
          goto LABEL_43;
        }
      }
      if ( v115 != 5 && (unsigned int)MiIsPrototypePteVadLookup(v35) && (v35 & 0xA0) == 0xA0 )
        v117 = (struct _KTHREAD *)((char *)v117 + 1);
      if ( (unsigned int)MiIsPrototypePteVadLookup(v35) )
        v74 = v35 >> 5;
      else
        LODWORD(v74) = *(unsigned __int16 *)(*(_QWORD *)(v30 + 72) + 32LL) >> 1;
      PfnProtection = v74 & 0x1F;
      v75 = MiSanitizePfnProtection(v30, v74 & 0x1F, v122);
      v125 = MiSwizzleInvalidPte(32 * (v75 & 0x1F | 0xFFFFFFFFF8000020uLL));
      v76 = v125;
      v77 = v125;
      if ( MiPteInShadowRange(v17) )
      {
        if ( MiPteHasShadow() )
        {
          v110 = v76;
          if ( !HIBYTE(word_140C6697C) && (v76 & 1) != 0 )
            v110 = v76 | 0x8000000000000000uLL;
          *(_QWORD *)v17 = v110;
          MiWritePteShadow(v17, v110, v109);
          goto LABEL_42;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v76 & 1) != 0 )
        {
          v77 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v17 = v77;
      goto LABEL_42;
    }
    if ( (v35 & 0x800) != 0 )
    {
      if ( !a6 )
      {
        if ( !(unsigned int)MiSetProtectionOnTransitionPte(v30, (unsigned __int64 *)v17, v119, 1) )
          goto LABEL_42;
        goto LABEL_43;
      }
      v78 = MiTryDeleteTransitionPte(v17);
      if ( v78 == 3 )
      {
        ++v130;
      }
      else if ( v78 == 1 )
      {
        goto LABEL_43;
      }
    }
    else
    {
      v51 = 0;
      if ( !a6 )
      {
        if ( v35 )
        {
          PfnProtection = (v35 >> 5) & 0x1F;
          v119 = MiSanitizePfnProtection(v30, (v35 >> 5) & 0x1F, v119);
          v54 = v35 ^ ((unsigned __int16)v35 ^ (unsigned __int16)(32 * v119)) & 0x3E0;
LABEL_67:
          v125 = v54;
          *(_QWORD *)v17 = v54;
          goto LABEL_42;
        }
LABEL_62:
        UsedPtesHandle = MiGetUsedPtesHandle(v36);
        v137 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(UsedPtesHandle + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v137);
          while ( *(__int64 *)(UsedPtesHandle + 24) < 0 );
        }
        *(_QWORD *)(UsedPtesHandle + 16) ^= ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16) ^ ((unsigned int)*(_QWORD *)(UsedPtesHandle + 16)
                                                                                             + 0x10000)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(UsedPtesHandle + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MmIsAddressValidEx(*(_QWORD *)(UsedPtesHandle + 8) | 0x8000000000000000uLL);
        if ( v115 != 5 && (v51 || !(unsigned int)MiPteNeedsCommitCharge(v30, v17)) )
          v117 = (struct _KTHREAD *)((char *)v117 + 1);
        PfnProtection = (*(unsigned __int16 *)(*(_QWORD *)(v30 + 72) + 32LL) >> 1) & 0x1F;
        v53 = MiSanitizePfnProtection(0LL, PfnProtection, v122);
        v54 = MiSwizzleInvalidPte(32 * (v53 & 0x1F | 0xFFFFFFFFF8000020uLL));
        goto LABEL_67;
      }
      if ( !v35 )
        goto LABEL_62;
      MiReleasePageFileSpace(v131, v35, 1LL);
      if ( !(unsigned int)IS_PTE_NOT_DEMAND_ZERO(v35) )
      {
LABEL_118:
        v79 = MiGetUsedPtesHandle(v36);
        MiDecreaseUsedPtesCount(v79, 1uLL);
        v51 = 1;
        goto LABEL_62;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    goto LABEL_118;
  }
  v44 = v114;
LABEL_45:
  MiFlushTbList(&v151);
  if ( v44 )
    MiUnlockPageTableInternal(v116, v44);
  MiUnlockWorkingSetShared(v116, v123);
  if ( v128 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1232));
    KeAbPostRelease(a1 + 1232);
    v56 = CurrentThread;
    v57 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v57 && ($C71981A45BEB2B45F82C232A7085991E *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
      KiCheckForKernelApcDelivery();
  }
  v46 = v130;
  v47 = v129;
  if ( v130 && v115 == 5 )
  {
    v47 = v129 - v130;
    v46 = 0LL;
    v130 = 0LL;
  }
  v48 = v131;
  if ( v47 )
  {
    MiReturnCommit(v131, v47, v45);
    v46 = v130;
  }
  v49 = (__int64)v117;
  if ( v117 )
  {
    v80 = *(unsigned int *)(v30 + 52);
    LODWORD(v80) = v80 & 0x7FFFFFFF;
    v81 = (__int64)v117 - v46;
    v82 = (((unsigned __int64)*(unsigned __int8 *)(v30 + 34) << 31) | v80) - (_QWORD)v117;
    v83 = v82 ^ *(_DWORD *)(v30 + 52);
    v82 >>= 31;
    *(_DWORD *)(v30 + 52) ^= v83 & 0x7FFFFFFF;
    *(_BYTE *)(v30 + 34) = v82;
    MiReturnCommit(v48, v81, v82);
    MiReturnFullProcessCharges(a1, v49);
  }
  if ( v120 )
    MiReturnFullProcessCommitment(a1, v120);
  return 0LL;
}
