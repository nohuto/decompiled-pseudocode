__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        char a8,
        volatile signed __int64 **a9,
        _DWORD *a10,
        _WORD *a11)
{
  int v13; // r10d
  unsigned int ProtectionMask; // eax
  unsigned int v15; // r9d
  int v16; // eax
  unsigned __int64 v17; // r10
  __int64 v18; // r11
  char v19; // si
  bool v20; // sf
  _KPROCESS *Process; // r9
  __int64 v22; // rbx
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r15
  ULONG_PTR v27; // rsi
  unsigned __int64 v28; // rdx
  _KPROCESS *v29; // rbx
  _WORD *v30; // rdx
  ULONG_PTR v31; // r14
  __int64 v32; // rbx
  struct _KTHREAD *v33; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v35; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v39; // r12
  unsigned __int16 v40; // r15
  __int64 v41; // r13
  _WORD *v42; // r14
  int v43; // ebx
  unsigned __int8 v44; // al
  volatile __int32 *v45; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v47; // rcx
  bool v48; // zf
  __int64 v49; // r14
  unsigned __int64 v50; // rbx
  int v51; // r9d
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  _WORD *v54; // rbx
  struct _KTHREAD *v55; // rcx
  _WORD *v56; // rbx
  unsigned int v57; // ecx
  __int64 v58; // rdx
  unsigned __int64 v59; // rdx
  __int64 result; // rax
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  unsigned __int64 v63; // rbx
  int PageProtection; // eax
  unsigned __int8 v65; // al
  __int64 *v66; // rdx
  unsigned __int8 v67; // di
  __int64 v68; // rbx
  __int64 v69; // r9
  unsigned int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r10
  __int64 v73; // rax
  __int64 v74; // rcx
  unsigned int v75; // r10d
  __int64 v76; // rdi
  __int64 v77; // rcx
  unsigned __int64 LockedVadEvent; // rax
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // r9
  int VadLargePageMinimumIndex; // eax
  __int64 v83; // r10
  int LargePfnList; // ebx
  struct _KTHREAD *v85; // rcx
  signed __int64 v86; // r8
  struct _KPRCB *v87; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v89; // eax
  unsigned __int8 v90; // cl
  _DWORD *v91; // r9
  __int64 v92; // rdx
  _DWORD *v93; // r9
  __int64 v94; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v96; // rcx
  struct _LIST_ENTRY *v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned int v100; // r9d
  _QWORD *v101; // rcx
  _KPROCESS *v102; // [rsp+50h] [rbp-B0h]
  __int64 v103; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v104; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 **v105; // [rsp+60h] [rbp-A0h]
  _WORD *v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+68h] [rbp-98h]
  __int64 v109; // [rsp+78h] [rbp-88h]
  _WORD *v110; // [rsp+80h] [rbp-80h]
  volatile signed __int64 *v111; // [rsp+88h] [rbp-78h]
  unsigned __int64 v112; // [rsp+88h] [rbp-78h]
  __int16 v113; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v114; // [rsp+94h] [rbp-6Ch]
  int v115; // [rsp+98h] [rbp-68h]
  int v116; // [rsp+9Ch] [rbp-64h]
  unsigned __int64 v117; // [rsp+A0h] [rbp-60h]
  _WORD *v118; // [rsp+A8h] [rbp-58h]
  unsigned int v119; // [rsp+B0h] [rbp-50h]
  int v120; // [rsp+B4h] [rbp-4Ch]
  int v121; // [rsp+B8h] [rbp-48h] BYREF
  int v122; // [rsp+BCh] [rbp-44h]
  _WORD *v123; // [rsp+C0h] [rbp-40h]
  __int64 v124; // [rsp+C8h] [rbp-38h]
  __int64 v125; // [rsp+D0h] [rbp-30h] BYREF
  int v126; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v127; // [rsp+E0h] [rbp-20h]
  ULONG_PTR v128; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v129; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD *v130; // [rsp+F8h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp+0h]
  ULONG_PTR v132; // [rsp+108h] [rbp+8h]
  __int64 *v133; // [rsp+110h] [rbp+10h] BYREF
  __int64 v134; // [rsp+118h] [rbp+18h]
  __int64 v135; // [rsp+120h] [rbp+20h]
  _QWORD v136[3]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v137; // [rsp+140h] [rbp+40h] BYREF
  __int64 v138; // [rsp+148h] [rbp+48h]
  __int64 v139; // [rsp+150h] [rbp+50h] BYREF
  __int128 v140; // [rsp+158h] [rbp+58h]
  _QWORD v141[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v142[3]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v143[3]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v144[3]; // [rsp+1B8h] [rbp+B8h] BYREF

  v130 = a10;
  v118 = a11;
  v13 = *(_DWORD *)(a1 + 48);
  v133 = 0LL;
  v115 = v13 & 0x2200000;
  v121 = 0;
  v140 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a4);
  v16 = MiSanitizePfnProtection(a1, v15, ProtectionMask);
  v19 = v16;
  v120 = v16;
  v20 = *(int *)(a1 + 52) < 0;
  v111 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v102 = Process;
  if ( v20 )
  {
    v23 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
    v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v128 = v23;
  v24 = 32LL * (v16 & 0x1F);
  v138 = 32LL * (v19 & 0x1F);
  if ( qword_140C657C0 )
  {
    if ( (qword_140C657C0 & v24) != 0 )
      v24 |= 0x10uLL;
    else
      v24 |= qword_140C657C0;
  }
  v25 = v24 | 0x4000000;
  if ( (v17 & 0xA200000) != 0x8200000 )
    v25 = v24;
  v135 = v25;
  v124 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = (a2 + v18 - 1) | 0xFFF;
  v27 = v124;
  v28 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v141[2] = 0LL;
  v132 = v28;
  v109 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v142[2] = 0LL;
  v141[1] = v141;
  v134 = ((__int64)(((v26 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  v141[0] = v141;
  v142[1] = v142;
  v142[0] = v142;
  v143[1] = v143;
  v143[0] = v143;
  v144[1] = v144;
  v144[0] = v144;
  v143[2] = 0LL;
  v144[2] = 0LL;
  v105 = 0LL;
  v125 = 0LL;
  if ( (v17 & 0xA00000) == 0xA00000 )
  {
    v72 = (v17 >> 19) & 3;
    v73 = 16LL;
    v74 = MiVadPageSizes[v72];
    v75 = MiVadPageIndices[v72];
    v103 = v74;
    if ( v74 != 16 )
      v73 = 1LL;
    v114 = v75;
    v76 = a6 & 0x1A;
    v127 = v73;
    if ( v75 > 1 )
    {
      if ( v76 != 2 )
        return 3221225485LL;
    }
    else
    {
      if ( v75 == 1 )
      {
        if ( v76 != 8 )
          return 3221225485LL;
      }
      else if ( v76 != 16 )
      {
        return 3221225485LL;
      }
      v77 = 2 - v75;
      do
      {
        v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v77;
      }
      while ( v77 );
      v128 = v23;
      v132 = v28;
    }
    if ( a9 == (volatile signed __int64 **)1 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a1, 16);
      if ( LockedVadEvent )
      {
        v105 = *(volatile signed __int64 ***)(LockedVadEvent + 24);
        v22 = (__int64)v105;
        if ( v105 )
          goto LABEL_134;
      }
      else
      {
        v105 = 0LL;
      }
    }
    else if ( a9 )
    {
      v105 = a9;
      v22 = (__int64)a9;
      goto LABEL_134;
    }
    v22 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * v102[1].IdealProcessor[25]) + 200LL);
LABEL_134:
    v125 = v22;
    goto LABEL_106;
  }
  if ( (a6 & 0x1A) != 0 )
    return 3221225485LL;
  v114 = 3;
  v103 = 1LL;
  v127 = 1LL;
  if ( (int)MiChargeFullProcessCommitment(
              Process,
              ((__int64)(((v26 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v116 = 1;
    v117 = ((__int64)(((v26 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
LABEL_12:
    v29 = v102;
    goto LABEL_13;
  }
LABEL_106:
  v116 = 0;
  v65 = MiLockWorkingSetShared(v109);
  v66 = &v125;
  v67 = v65;
  if ( !v22 )
    v66 = 0LL;
  v68 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v26, a1, v65, 0, 0LL, (__int64)v66);
  MiUnlockWorkingSetShared(v109, v67);
  v69 = v134 - v68;
  v117 = v134 - v68;
  if ( !v125 && v103 != 1 )
    return 3221225496LL;
  v29 = v102;
  if ( !v69 )
    goto LABEL_13;
  if ( v103 == 1 )
  {
    result = MiChargeFullProcessCommitment(v102, v69);
    if ( (int)result < 0 )
      return result;
LABEL_13:
    v122 = 0;
    if ( !(unsigned int)MiVadPureReserve(a1) )
      goto LABEL_25;
    v31 = (ULONG_PTR)&v29[1].Affinity.StaticBitmap[8];
    v122 = 1;
    v32 = (unsigned int)v30;
    v119 = (unsigned int)v30;
    --CurrentThread->SpecialApcDisable;
    v33 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v33->AbEntrySummary;
    if ( v33->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v31, v33)) != 0 )
    {
      _BitScanForward(&v35, AbEntrySummary);
      v119 = v35;
      v33->AbEntrySummary = AbEntrySummary & ~(1 << v35);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v61 = *SchedulerAssist;
        do
        {
          v62 = v61;
          v61 = _InterlockedCompareExchange(SchedulerAssist, v61 & 0xFFDFFFFF, v61);
        }
        while ( v62 != v61 );
        if ( (v61 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v32 = (__int64)(&v33[1].Process + 12 * v119);
      if ( v31 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v33->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v32 + 8) = SessionId;
      *(_QWORD *)v32 = v31 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v31, v32, v31);
    if ( v32 )
      *(_BYTE *)(v32 + 18) = 1;
    if ( (int)MiCommitPageTablesForVad(a1, a2) >= 0 )
    {
      v30 = 0LL;
LABEL_25:
      v39 = v124;
      v40 = (unsigned __int16)v30;
      v41 = v103;
      v42 = v30;
      v123 = v30;
      v118 = v30;
      v110 = v30;
      v106 = v30;
LABEL_26:
      v43 = (int)v30;
      v112 = (unsigned __int64)v30;
      LODWORD(v124) = (_DWORD)v30;
      v107 = (int)v30;
      if ( !v114 )
      {
        v70 = MiComputePreferredNode(a1);
        v107 = 1;
        v104 = MiLockWorkingSetForLargeMapping(v109, v71, v70);
        if ( v104 != 17 )
          goto LABEL_38;
      }
      v44 = v102[1].IdealProcessor[30] & 7;
      if ( v44 <= 4u )
      {
        if ( v44 == 2 )
          v45 = (volatile __int32 *)&unk_140C69E00;
        else
LABEL_29:
          v45 = (volatile __int32 *)&v102[1].IdealNode[2];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v93 = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == 2 )
            LODWORD(v94) = 4;
          else
            v94 = (-1LL << (CurrentIrql + 1)) & 4;
          v93[5] |= v94;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v45, CurrentIrql);
        }
        else if ( !(unsigned __int8)ExpTryAcquireSpinLockShared(v45) )
        {
          ExpWaitForSpinLockSharedAndAcquire(v47, CurrentIrql);
        }
        if ( *((_DWORD *)v45 + 1) )
          _InterlockedExchange(v45 + 1, 0);
        v104 = CurrentIrql;
        goto LABEL_37;
      }
      if ( v44 == 5 )
        goto LABEL_29;
      v90 = KeGetCurrentIrql();
      v104 = v90;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v90 <= 0xFu )
      {
        v91 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v90 == 2 )
          LODWORD(v92) = 4;
        else
          v92 = (-1LL << (v90 + 1)) & 4;
        v91[5] |= v92;
      }
      while ( 1 )
      {
LABEL_38:
        if ( v27 > v132 )
        {
          if ( v40 )
          {
            v54 = v118;
            v126 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)v54 + 6, 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v126);
              while ( *((__int64 *)v54 + 3) < 0 );
            }
            *((_QWORD *)v54 + 2) ^= ((unsigned int)*((_QWORD *)v54 + 2) ^ ((unsigned int)*((_QWORD *)v54 + 2)
                                                                         + (v40 << 16))) & 0x3FF0000;
            _InterlockedAnd64((volatile signed __int64 *)v54 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( v40 <= 1u )
              MmIsAddressValidEx(*((_QWORD *)v54 + 1) | 0x8000000000000000uLL);
          }
          if ( v115 == 35651584 && v106 )
            MiFlushGraphicsPtes(v42, v106);
          if ( v107 == 1 )
          {
            MiUnlockWorkingSetExclusive(v109, v104);
          }
          else
          {
            if ( v112 )
              MiUnlockPageTableInternal(v109, v112);
            MiUnlockWorkingSetShared(v109, v104);
          }
          if ( v122 )
          {
            if ( (_InterlockedExchangeAdd64(
                    (volatile signed __int64 *)&v102[1].Affinity.StaticBitmap[8],
                    0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)&v102[1].Affinity.StaticBitmap[8]);
            KeAbPostRelease((ULONG_PTR)&v102[1].Affinity.StaticBitmap[8]);
            v55 = CurrentThread;
            v48 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v48 && ($C71981A45BEB2B45F82C232A7085991E *)v55->ApcState.ApcListHead[0].Flink != &v55->152 )
              KiCheckForKernelApcDelivery();
          }
          if ( v116 )
          {
            v56 = v123;
            if ( v123 )
              MiReturnFullProcessCommitment(v102, v123);
            v117 = v134 - (_QWORD)v56;
          }
          v57 = *(_DWORD *)(a1 + 52);
          v58 = v57;
          LODWORD(v58) = v57 & 0x7FFFFFFF;
          v59 = v117 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v58);
          *(_BYTE *)(a1 + 34) = v59 >> 31;
          *(_DWORD *)(a1 + 52) = v57 ^ (v59 ^ v57) & 0x7FFFFFFF;
          return 0LL;
        }
        if ( !v43 || (v27 & 0xFFF) == 0 )
        {
          if ( v40 )
          {
            MiIncreaseUsedPtesCount((__int64)v118, v40);
            v40 = 0;
          }
          if ( v115 == 35651584 && v106 )
          {
            MiFlushGraphicsPtes(v42, v106);
            v42 = 0LL;
            v110 = 0LL;
          }
          v51 = v107;
          if ( v107 != 1 )
          {
            if ( v112 )
            {
              MiUnlockPageTableInternal(v109, v112);
              v51 = v107;
            }
            v112 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiMakeSystemAddressValid(v27, v51);
          if ( v27 < 0xFFFFF6FB7DBED000uLL || v27 > 0xFFFFF6FB7DBEDFFFuLL )
          {
            v52 = ((((__int64)(v27 << 25) >> 16) & 0xFFFFFFE00000uLL) >> 18) - 0x904C0000000LL;
            v53 = *(_QWORD *)v52;
            if ( v52 >= 0xFFFFF6FB7DBED000uLL
              && v52 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0x600000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v53 & 1) != 0
              && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v96 = *((_QWORD *)&Flink->Flink + ((v52 >> 3) & 0x1FF));
                if ( (v96 & 0x20) != 0 )
                  v53 |= 0x20uLL;
                if ( (v96 & 0x42) != 0 )
                  v53 |= 0x42uLL;
              }
            }
            v137 = v53;
            v118 = (_WORD *)(48
                           * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v137) >> 12) & 0xFFFFFFFFFFLL)
                           - 0x220000000000LL);
          }
          LODWORD(v124) = 1;
        }
        v48 = v42 == 0LL;
        v49 = v127;
        if ( v48 )
        {
          v110 = (_WORD *)v27;
          v106 = (_WORD *)v127;
        }
        else
        {
          v106 = (_WORD *)((char *)v106 + v127);
        }
        v50 = *(_QWORD *)v27;
        if ( v27 >= 0xFFFFF6FB7DBED000uLL
          && v27 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v50 & 1) != 0
          && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
        {
          v97 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v97 )
          {
            v98 = *((_QWORD *)&v97->Flink + ((v27 >> 3) & 0x1FF));
            if ( (v98 & 0x20) != 0 )
              v50 |= 0x20uLL;
            if ( (v98 & 0x42) != 0 )
              v50 |= 0x42uLL;
          }
        }
        v129 = v50;
        if ( !v50 )
          break;
        if ( !(unsigned int)MiIsPteDecommittedPage(&v129) )
        {
          v123 = (_WORD *)((char *)v123 + v41);
          if ( !*v130 )
          {
            v113 = 0;
            PageProtection = MiGetPageProtection(a1, v27, &v133, &v121, &v113);
            if ( v133 )
            {
              if ( v40 )
              {
                MiIncreaseUsedPtesCount((__int64)v118, v40);
                v42 = 0LL;
                v40 = 0;
              }
              else
              {
                v42 = 0LL;
              }
              if ( v115 == 35651584 && v106 )
              {
                MiFlushGraphicsPtes(v110, v106);
                v110 = 0LL;
              }
              else
              {
                v42 = v110;
              }
              if ( v107 == 1 )
              {
                MiUnlockWorkingSetExclusive(v109, v104);
              }
              else
              {
                MiUnlockPageTableInternal(v109, v112);
                MiUnlockWorkingSetShared(v109, v104);
              }
              v30 = 0LL;
              goto LABEL_26;
            }
            if ( v120 != PageProtection || v121 != a5 )
              *v130 = 1;
          }
          goto LABEL_51;
        }
        if ( v41 != 1 )
          goto LABEL_228;
        v63 = v138 | v50 & 0xFFFFFFFFFFFFFC1FuLL;
        v129 = v63;
        if ( (*(_DWORD *)(a1 + 48) & 0xA200000) == 0x8200000 )
        {
          v63 |= 0x4000000uLL;
          v129 = v63;
        }
        *(_QWORD *)v27 = v63;
        v39 += 8LL;
        v27 += 8 * v49;
LABEL_37:
        v42 = v110;
        v43 = v124;
      }
      if ( v27 <= v128 )
        v123 = (_WORD *)((char *)v123 + v41);
      if ( v41 == 1 )
      {
        if ( v27 < 0xFFFFF6FB7DBED000uLL || v27 > 0xFFFFF6FB7DBEDFFFuLL )
          v40 += v127;
        *(_QWORD *)v27 = v135;
      }
      else
      {
LABEL_228:
        v99 = MiPopLargePfnList(v141, v114);
        v100 = v114;
        v101 = (_QWORD *)(48 * v99 - 0x220000000000LL);
        v136[0] = v101;
        v136[1] = v101;
        *v101 = v136;
        v101[1] = v136;
        MiInsertLargeUserMapping(a1, v39, (unsigned int)v136, v100, v120);
      }
LABEL_51:
      v27 += 8 * v49;
      v39 += 8 * v41;
      goto LABEL_37;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31);
    KeAbPostRelease(v31);
    v85 = CurrentThread;
    v48 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v48 && ($C71981A45BEB2B45F82C232A7085991E *)v85->ApcState.ApcListHead[0].Flink != &v85->152 )
      KiCheckForKernelApcDelivery();
    if ( v117 )
    {
      if ( v103 != 1 )
      {
        MiFreeLargeZeroPages((int)v111, (__int64)v141, 1u);
        v86 = v117;
        if ( v111 != (volatile signed __int64 *)&MiSystemPartition )
          goto LABEL_176;
        v87 = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)v87->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable == -1 )
          goto LABEL_176;
        if ( v117 + CachedResidentAvailable <= 0x100 && v117 < 0x80000 )
        {
          do
          {
            v89 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v87->CachedResidentAvailable,
                    v117 + CachedResidentAvailable,
                    CachedResidentAvailable);
            v48 = (_DWORD)CachedResidentAvailable == v89;
            LODWORD(CachedResidentAvailable) = v89;
            if ( v48 )
              goto LABEL_177;
          }
          while ( v89 != -1 && v117 + v89 <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v87->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v86 = v117 + (int)CachedResidentAvailable - 192;
        }
        if ( v86 )
LABEL_176:
          v86 = _InterlockedExchangeAdd64(v111 + 2160, v86);
LABEL_177:
        if ( v105 )
        {
          MiReturnCommit((__int64)v111, v117, v86);
          MiReturnCrossPartitionCharges(v111, 2LL, 1LL, v117);
        }
        else
        {
          MiReturnFullProcessCommitment(v102, v117);
        }
        MiReturnProcessPhysicalPages(v102, v117);
        return 3221225773LL;
      }
      MiReturnFullProcessCommitment(v102, v117);
    }
    return 3221225773LL;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v102, v69) )
    return 3221225773LL;
  if ( v105 )
  {
    if ( v105 != a9 && !PsReferencePartitionSafe((__int64)v105) )
    {
      MiReturnProcessPhysicalPages(v102, v81);
      return 3221226656LL;
    }
    v111 = *v105;
    *v118 = *(_WORD *)*v105;
  }
  else
  {
    if ( (int)MiChargeFullProcessCommitment(v79, v80) < 0 )
      return MiReturnProcessPhysicalPages(v102, v117);
    v111 = *(volatile signed __int64 **)(qword_140C67048 + 8LL * v102[1].IdealProcessor[25]);
  }
  VadLargePageMinimumIndex = MiGetVadLargePageMinimumIndex(a1);
  v139 = v83;
  LargePfnList = MiCreateLargePfnList(
                   (unsigned int)&v139,
                   a2,
                   v117,
                   MiLargePageSizes[VadLargePageMinimumIndex],
                   a7,
                   a8,
                   (__int64)v105,
                   0,
                   (__int64)v141);
  if ( v105 && v105 != a9 )
    PsDereferencePartition((__int64)v105);
  if ( LargePfnList >= 0 )
    goto LABEL_12;
  if ( !v105 )
    MiReturnFullProcessCommitment(v102, v117);
  MiReturnProcessPhysicalPages(v102, v117);
  return (unsigned int)LargePfnList;
}
