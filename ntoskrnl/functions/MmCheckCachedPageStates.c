__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  int v4; // r15d
  char v5; // r11
  char v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // edi
  ULONG_PTR v9; // r8
  __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 ValidPte; // rdx
  __int64 *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ebx
  unsigned __int64 v20; // rax
  ULONG_PTR v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  unsigned __int64 v28; // rdx
  void *v29; // r9
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  _QWORD *v32; // rcx
  char v33; // al
  __int64 v34; // rax
  signed __int32 v35; // edx
  __int64 Page; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 ContainingPageTable; // rdi
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  int EffectivePagePriorityThread; // eax
  __int64 v48; // rdx
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  ULONG_PTR v52; // r9
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // r8
  _QWORD *v56; // r8
  __int64 v57; // rax
  int v58; // ecx
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  int v61; // eax
  unsigned __int8 v62; // di
  struct _KTHREAD *CurrentThread; // rdi
  int v64; // eax
  unsigned int Flink; // ecx
  __int64 v66; // rax
  int v67; // eax
  __int64 v69; // rcx
  __int16 v70; // bx
  __int16 v71; // bx
  __int64 v72; // r8
  __int64 v73; // rax
  unsigned __int64 v74; // r11
  unsigned __int64 v75; // rdx
  char v76; // al
  __int64 v77; // rcx
  __int64 v78; // r14
  struct _KPRCB *v79; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v81; // zf
  signed __int32 v82; // eax
  unsigned __int8 v83; // bl
  _DWORD *v84; // r9
  __int64 v85; // r10
  unsigned __int64 *v86; // rax
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r8
  __int64 CurrentIrql; // r11
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v91; // r14
  unsigned __int64 v92; // rdi
  char v93; // r13
  int v94; // ecx
  __int64 v95; // rdi
  char v96; // al
  unsigned __int8 v97; // cl
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
  int v100; // eax
  unsigned __int8 v101; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v103; // r9
  int v104; // eax
  unsigned __int8 v105; // cl
  struct _KPRCB *v106; // r10
  _DWORD *v107; // r9
  int v108; // edx
  __int64 v109; // rax
  struct _SLIST_ENTRY *TransitionHeatBatch; // rdi
  int v111; // eax
  unsigned __int8 v112; // cl
  struct _KPRCB *v113; // r10
  _DWORD *v114; // r9
  int v115; // eax
  int v116; // ecx
  unsigned __int8 v117; // cl
  struct _KPRCB *v118; // r9
  _DWORD *v119; // r8
  int v120; // eax
  unsigned __int8 v121; // [rsp+20h] [rbp-168h]
  char v122; // [rsp+21h] [rbp-167h]
  char v123; // [rsp+22h] [rbp-166h]
  unsigned int v124; // [rsp+24h] [rbp-164h]
  int v125; // [rsp+28h] [rbp-160h]
  unsigned int v126; // [rsp+28h] [rbp-160h]
  unsigned int v127; // [rsp+28h] [rbp-160h]
  __int64 v128; // [rsp+28h] [rbp-160h]
  unsigned int v129; // [rsp+28h] [rbp-160h]
  unsigned __int64 v130; // [rsp+30h] [rbp-158h]
  void *v131; // [rsp+30h] [rbp-158h]
  __int64 v132; // [rsp+30h] [rbp-158h]
  ULONG_PTR BugCheckParameter1; // [rsp+38h] [rbp-150h]
  _QWORD *v134; // [rsp+40h] [rbp-148h]
  __int64 v135; // [rsp+40h] [rbp-148h]
  _QWORD *v136; // [rsp+40h] [rbp-148h]
  unsigned __int64 *v137; // [rsp+40h] [rbp-148h]
  int v138; // [rsp+48h] [rbp-140h] BYREF
  __int64 v139; // [rsp+50h] [rbp-138h]
  __int64 v140; // [rsp+58h] [rbp-130h]
  int v141; // [rsp+60h] [rbp-128h]
  unsigned __int64 v142; // [rsp+68h] [rbp-120h]
  int v143; // [rsp+70h] [rbp-118h] BYREF
  int v144; // [rsp+74h] [rbp-114h] BYREF
  int v145; // [rsp+78h] [rbp-110h] BYREF
  int v146; // [rsp+7Ch] [rbp-10Ch] BYREF
  unsigned __int64 v147; // [rsp+80h] [rbp-108h]
  __int64 v148; // [rsp+88h] [rbp-100h]
  __int64 v149; // [rsp+90h] [rbp-F8h] BYREF
  __int128 v150; // [rsp+98h] [rbp-F0h] BYREF
  __int64 v151; // [rsp+A8h] [rbp-E0h]
  __int64 v152; // [rsp+B0h] [rbp-D8h]
  char *v153; // [rsp+B8h] [rbp-D0h]
  _QWORD v154[16]; // [rsp+C0h] [rbp-C8h] BYREF

  v4 = 0;
  v153 = a4;
  v138 = a3;
  v5 = 1;
  v141 = 0;
  v123 = 1;
  v6 = a3;
  v124 = 0;
  BugCheckParameter1 = 0LL;
  v150 = 0LL;
  v7 = 0;
  v121 = 17;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v140 = v11;
  v12 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v147 = v12;
  v13 = 48 * ((*(_QWORD *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v151 = v13;
  v14 = *(_QWORD *)(48 * ((*(_QWORD *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x21FFFFFFFFF0LL);
  if ( v14 )
    v14 += 40 * ((a1 >> 18) & 7);
  ValidPte = *(_QWORD *)(v14 + 24);
  v16 = (__int64 *)(ValidPte & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (ValidPte & 1) == 0 )
    v16 = (__int64 *)ValidPte;
  v148 = *v16;
  v152 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v148 + 60) & 0x3FF));
  if ( v11 > v12 )
    goto LABEL_124;
  v17 = 0x40000000000000LL;
  do
  {
    v18 = *(_QWORD *)v11;
    v19 = 0;
    v125 = 0;
    if ( (*(_QWORD *)v11 & 1) != 0 )
    {
      if ( (v6 & 4) != 0 )
      {
        if ( v10 )
        {
          MiUnlockProtoPoolPage(v10, v121);
          v10 = 0LL;
        }
        MiMarkPteDirty(v11, ValidPte, v9, v17);
      }
      v11 += 8LL;
      v20 = 0LL;
      v140 = v11;
      goto LABEL_117;
    }
    if ( (v18 & 8) != 0 )
    {
      v19 = 1;
      v125 = 1;
    }
    ValidPte = qword_140C657C0;
    v21 = v9;
    v22 = *(_QWORD *)v11;
    if ( qword_140C657C0 && (v18 & 0x10) == 0 )
      v22 = v18 & ~qword_140C657C0;
    v23 = v22 >> 16;
    BugCheckParameter1 = v23;
    if ( v10 )
    {
      if ( ((v23 ^ v21) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_48;
      MiUnlockProtoPoolPage(v10, v121);
      v23 = BugCheckParameter1;
LABEL_17:
      if ( v8 )
      {
        MiMakeSystemCacheRangeValid(v11 - 8LL * v8, v154, v8, v13);
        v23 = BugCheckParameter1;
        v8 = 0;
        v124 = 0;
      }
      goto LABEL_19;
    }
    if ( (v23 & 0xFFFFFFFFFFFFF000uLL) != (v21 & 0xFFFFFFFFFFFFF000uLL) )
      goto LABEL_17;
LABEL_19:
    ValidPte = *(_QWORD *)v23;
    v130 = *(_QWORD *)v23;
    if ( (*(_QWORD *)v23 & 1) == 0 && (*(_QWORD *)v23 & 0xC00LL) != 0x800 )
    {
      v10 = 0LL;
      goto LABEL_51;
    }
    v86 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v137 = v86;
    while ( 1 )
    {
      while ( 1 )
      {
        v87 = *v86;
        if ( (v87 & 1) == 0 || (v87 & 0x200) != 0 )
          goto LABEL_245;
        do
        {
          do
          {
            v88 = (v87 >> 12) & 0xFFFFFFFFFFLL;
            v142 = v88;
          }
          while ( v88 > qword_140C65820 );
        }
        while ( !_bittest64((const signed __int64 *)(48 * v88 - 0x21FFFFFFFFD8LL), 0x36u) );
        v10 = 48 * v88 - 0x220000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        v139 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( (_BYTE)CurrentIrql == 2 )
            ValidPte = 4LL;
          else
            ValidPte = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
          SchedulerAssist[5] |= ValidPte;
        }
        v143 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v143);
            while ( *(__int64 *)(v10 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) );
          v88 = v142;
          LOBYTE(CurrentIrql) = v139;
        }
        v24 = *v137;
        if ( (*v137 & 1) != 0 && (v24 & 0x200) == 0 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (_BYTE)CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
          {
            v101 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v101 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v101 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v103 = CurrentPrcb->SchedulerAssist;
              v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
              v81 = (v104 & v103[5]) == 0;
              v103[5] &= v104;
              if ( v81 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                LOBYTE(CurrentIrql) = v139;
              }
            }
          }
          __writecr8((unsigned __int8)CurrentIrql);
        }
LABEL_245:
        MmAccessFault(2uLL, BugCheckParameter1);
        v86 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      if ( v88 == ((v24 >> 12) & 0xFFFFFFFFFFLL) )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v86 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( (_BYTE)CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          v97 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v97 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v97 >= 2u )
          {
            v98 = KeGetCurrentPrcb();
            ValidPte = -1LL << ((unsigned __int8)CurrentIrql + 1);
            v99 = v98->SchedulerAssist;
            v100 = ~(unsigned __int16)ValidPte;
            v81 = (v100 & v99[5]) == 0;
            v99[5] &= v100;
            if ( v81 )
            {
              KiRemoveSystemWorkPriorityKick(v98);
              LOBYTE(CurrentIrql) = v139;
            }
          }
        }
        __writecr8((unsigned __int8)CurrentIrql);
        v86 = (unsigned __int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
    }
    v25 = *(_QWORD *)(v10 + 40);
    v19 = v125;
    v11 = v140;
    v12 = v147;
    v8 = v124;
    if ( (v25 & 0x10000000000LL) != 0 || (v25 & 0x20000000000000LL) != 0 )
      goto LABEL_40;
    ValidPte = *(unsigned __int16 *)(v10 + 32);
    v26 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v27 = 0;
    if ( !(_WORD)ValidPte )
      goto LABEL_33;
    if ( (_WORD)ValidPte != 1 )
    {
      if ( (_WORD)ValidPte == 2 && v26 && (*(_BYTE *)(v10 + 34) & 8) != 0 )
        goto LABEL_33;
      goto LABEL_40;
    }
    if ( v26 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
      v27 = 1;
    if ( !v27 )
      goto LABEL_40;
LABEL_33:
    v122 = 0;
    if ( (v25 & 0x8000000000000000uLL) == 0LL || (*(_DWORD *)(v10 + 16) & 0x400LL) == 0 )
    {
      v28 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
      if ( v28 > 0xFFFFF6BFFFFFFF78uLL || v28 < 0xFFFFF68000000000uLL )
      {
        v29 = *(void **)(qword_140C67048 + 8 * ((v25 >> 43) & 0x3FF));
        v131 = v29;
      }
      else
      {
        if ( (*(_BYTE *)(v10 + 35) & 0x20) != 0 )
          goto LABEL_249;
        v122 = 0;
        v29 = *(void **)(qword_140C67048 + 8 * ((v25 >> 43) & 0x3FF));
        v131 = v29;
      }
LABEL_36:
      if ( v29 == &MiSystemPartition )
      {
        ValidPte = (unsigned __int64)KeGetCurrentPrcb();
        v30 = *(_DWORD *)(ValidPte + 34460);
        while ( v30 )
        {
          if ( v30 == -1 )
            break;
          v31 = v30;
          v30 = _InterlockedCompareExchange((volatile signed __int32 *)(ValidPte + 34460), v30 - 1, v30);
          if ( v31 == v30 )
            goto LABEL_40;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v29, 1LL, 0xFFFFFFFFLL) )
      {
        if ( v122 )
          MiReturnCommit(v131, 1LL);
        goto LABEL_41;
      }
LABEL_40:
      ++*(_WORD *)(v10 + 32);
      goto LABEL_41;
    }
LABEL_249:
    v122 = 1;
    v131 = *(void **)(qword_140C67048 + 8 * ((v25 >> 43) & 0x3FF));
    if ( (unsigned int)MiChargeCommit(v131, 1LL, 4LL) )
    {
      v29 = v131;
      goto LABEL_36;
    }
LABEL_41:
    if ( (_BYTE)v139 == 17 )
    {
      LOBYTE(ValidPte) = 17;
      MiLockOwnedProtoPage(v10, ValidPte);
    }
    else
    {
      v121 = v139;
      v32 = (_QWORD *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL);
      v33 = *(_BYTE *)(v10 + 34);
      v134 = v32;
      if ( (v33 & 0x20) != 0 )
      {
        v91 = v139;
        v92 = (unsigned __int8)v139;
        v93 = v139;
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v105 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v105 <= 0xFu && v91 <= 0xFu && v105 >= 2u )
            {
              v106 = KeGetCurrentPrcb();
              v107 = v106->SchedulerAssist;
              v108 = ~(unsigned __int16)(-1LL << (v93 + 1));
              v81 = (v108 & v107[5]) == 0;
              v107[5] &= v108;
              if ( v81 )
                KiRemoveSystemWorkPriorityKick(v106);
            }
          }
          __writecr8(v92);
          v94 = 0;
          while ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
          {
            LODWORD(v139) = ++v94;
            if ( (v94 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (v96 = KiCheckVpBackingLongSpinWaitHypercall(), v94 = v139, v96) )
            {
              HvlNotifyLongSpinWait((unsigned int)v139);
              v94 = v139;
            }
            else
            {
              _mm_pause();
            }
          }
          MiLockPageInline(v10);
          v33 = *(_BYTE *)(v10 + 34);
        }
        while ( (v33 & 0x20) != 0 );
        v11 = v140;
        v12 = v147;
        v13 = v151;
        v8 = v124;
        v32 = v134;
      }
      *(_BYTE *)(v10 + 34) = v33 | 0x20;
      if ( (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) == 0 && (*v32 & 0x20) == 0 )
        MiWriteValidPteVolatile(v32, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v23 = BugCheckParameter1;
LABEL_48:
    if ( (*(_BYTE *)v11 & 1) != 0 )
      goto LABEL_115;
    ValidPte = *(_QWORD *)v23;
    v130 = *(_QWORD *)v23;
    if ( (*(_QWORD *)v23 & 1) == 0 && (*(_QWORD *)v23 & 0xC00LL) != 0x800 )
    {
LABEL_51:
      v34 = ValidPte;
      if ( qword_140C657C0 && (ValidPte & 0x10) == 0 )
        v34 = ValidPte & ~qword_140C657C0;
      v139 = v34 >> 16;
      if ( (*(_BYTE *)(v148 + 62) & 0xC) == 0 && (v138 & 1) != 0 )
      {
        MiInitializePageColorBase(0LL, (*(_DWORD *)(v148 + 56) >> 20) & 0x7F, &v150);
        v35 = _InterlockedExchangeAdd((volatile signed __int32 *)v150, 1u);
        Page = MiGetPage(v152, HIDWORD(v150) | DWORD2(v150) & (unsigned int)v35, 2LL);
        v142 = Page;
        if ( Page != -1 )
        {
          v135 = 48 * Page - 0x220000000000LL;
          v126 = MiProtectionToCacheAttribute((v130 >> 5) & 0x1F);
          if ( MiPfnZeroingNeeded(v37) )
          {
            if ( v10 )
            {
              MiUnlockProtoPoolPage(v10, v121);
              v10 = 0LL;
            }
            MiZeroPhysicalPage(v38, v142, 0LL, v126);
            *(_QWORD *)(v135 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          if ( !v10 )
          {
            v10 = MiLockProtoPoolPageForce(BugCheckParameter1);
            v39 = *(_QWORD *)BugCheckParameter1;
            v130 = *(_QWORD *)BugCheckParameter1;
            if ( (*(_QWORD *)BugCheckParameter1 & 1) != 0 || (v39 & 0x800) != 0 && (v39 & 0x400) == 0 )
            {
              MiUnlockProtoPoolPage(v10, v121);
              MiReleaseFreshPage(v135);
              v10 = 0LL;
              BugCheckParameter1 = 0LL;
              goto LABEL_119;
            }
          }
          MiReferenceControlAreaPfn(v148, v139, 1LL);
          v132 = (v130 >> 5) & 0x1F;
          v149 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
          MiSetNonResidentPteHeat(&v149, 0LL);
          v40 = v149;
          *(_QWORD *)(v135 + 40) |= 0x8000000000000000uLL;
          *(_QWORD *)(v135 + 16) = v40;
          v127 = MiProtectionToCacheAttribute((unsigned int)v132);
          *(_WORD *)(v41 + 32) = 1;
          ContainingPageTable = MiGetContainingPageTable(BugCheckParameter1, v41, v42);
          MiSetPfnPteFrame(v135, ContainingPageTable);
          v140 = 48 * ContainingPageTable - 0x220000000000LL;
          EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), v44, v45, v46);
          v145 = 0;
          LODWORD(v139) = EffectivePagePriorityThread;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v135 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v145);
            while ( *(__int64 *)(v135 + 24) < 0 );
          }
          MiLockNestedPageAtDpcInline(v140);
          v48 = v140;
          *(_QWORD *)(v140 + 24) ^= (*(_QWORD *)(v140 + 24) ^ (*(_QWORD *)(v140 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          MiFinalizePageAttribute(v135, v127, 1LL);
          *(_QWORD *)(v135 + 24) = *(_QWORD *)(v135 + 24) & 0xC000000000000000uLL | 1;
          *(_BYTE *)(v135 + 35) ^= (*(_BYTE *)(v135 + 35) ^ v139) & 7;
          *(_QWORD *)(v135 + 8) = BugCheckParameter1;
          *(_BYTE *)(v135 + 34) = *(_BYTE *)(v135 + 34) & 0xF8 | 6;
          *(_BYTE *)(v135 + 34) |= 0x10u;
          _InterlockedAnd64((volatile signed __int64 *)(v135 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          ValidPte = MiMakeValidPte(v11, v142, v132 | 0x20000000);
          v130 = ValidPte;
          *(_QWORD *)BugCheckParameter1 = ValidPte;
LABEL_102:
          v62 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v62 <= 0xFu )
          {
            v84 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( v62 == 2 )
              LODWORD(v85) = 4;
            else
              v85 = (-1LL << (v62 + 1)) & 4;
            v84[5] |= v85;
          }
          v146 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v146);
              while ( *(__int64 *)(v13 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) );
            ValidPte = v130;
          }
          *(_QWORD *)(v13 + 24) ^= (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
          _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            v112 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v112 <= 0xFu && v62 <= 0xFu && v112 >= 2u )
            {
              v113 = KeGetCurrentPrcb();
              v114 = v113->SchedulerAssist;
              v115 = ~(unsigned __int16)(-1LL << (v62 + 1));
              v81 = (v115 & v114[5]) == 0;
              v114[5] &= v115;
              if ( v81 )
                KiRemoveSystemWorkPriorityKick(v113);
              ValidPte = v130;
            }
          }
          __writecr8(v62);
          if ( v19 )
          {
            ValidPte = MiMakeValidPte(v11, (ValidPte >> 12) & 0xFFFFFFFFFFLL, 536870913LL);
          }
          else if ( (v138 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
          {
            ValidPte |= 0x42uLL;
          }
          ValidPte &= 0xFFFFFFFFFFFFFEFBuLL;
          v20 = ValidPte | ((unsigned __int64)(word_140C6697C & 1) << 8);
LABEL_116:
          v8 = v124;
          v11 += 8LL;
          v140 = v11;
LABEL_117:
          if ( v8 || v20 )
          {
            v69 = v8++;
            v124 = v8;
            v154[v69] = v20;
            if ( v8 == 16 )
            {
              if ( v10 )
              {
                MiUnlockProtoPoolPage(v10, v121);
                v10 = 0LL;
              }
              MiMakeSystemCacheRangeValid(v11 - 128, v154, 16LL, v13);
              v8 = 0;
              v124 = 0;
            }
          }
          goto LABEL_119;
        }
      }
      if ( (v138 & 2) == 0 )
      {
        if ( v10 )
        {
          MiUnlockProtoPoolPage(v10, v121);
          v10 = 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        v64 = BYTE4(CurrentThread[1].Queue);
        Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
        BYTE4(CurrentThread[1].Queue) = 1;
        v129 = v64 + 2 * Flink;
        v66 = (__int64)(v12 - v11) >> 3;
        if ( (unsigned int)v66 > Flink )
        {
          if ( (unsigned int)v66 <= 0xF )
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v66;
          else
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = 15;
        }
        v67 = MmAccessFault(0LL, (__int64)(v11 << 25) >> 16);
        if ( v67 < 0 )
        {
          v116 = v141;
          if ( v141 >= 0 )
            v116 = v67;
          v141 = v116;
        }
        LODWORD(CurrentThread[1].WaitListEntry.Flink) = v129 >> 1;
        BYTE4(CurrentThread[1].Queue) = v129 & 1;
      }
      v123 = 0;
LABEL_115:
      v20 = 0LL;
      goto LABEL_116;
    }
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 1 )
        {
          ValidPte = *(_QWORD *)v23;
          v130 = ValidPte;
          v49 = *(_QWORD *)v23;
          v142 = *(_QWORD *)v23;
          v50 = ValidPte;
          if ( (ValidPte & 1) != 0 )
            break;
          if ( (ValidPte & 0xC00) != 0x800 )
            goto LABEL_223;
          if ( !ValidPte || !qword_140C657C0 || (ValidPte & qword_140C657C0) != 0 )
          {
            v50 = ValidPte;
            if ( qword_140C657C0 && (ValidPte & 0x10) == 0 )
              v50 = ValidPte & ~qword_140C657C0;
            break;
          }
        }
        v51 = (v50 >> 12) & 0xFFFFFFFFFFLL;
        if ( v51 > qword_140C65820 || (*(_QWORD *)(48 * v51 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
          continue;
        break;
      }
      v52 = 48 * v51 - 0x220000000000LL;
      v144 = 0;
      v128 = v52;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v52 + 24), 0x3FuLL) )
      {
        v95 = 48 * v51 - 0x220000000000LL;
        do
        {
          do
            KeYieldProcessorEx(&v144);
          while ( *(__int64 *)(v95 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) );
        v49 = v142;
        v52 = v128;
        v23 = BugCheckParameter1;
      }
      ValidPte = *(_QWORD *)v23;
      v130 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 != v49 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        continue;
      }
      break;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v52 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v109 = MiLockSpecialPurposeMemoryCachedPage(v52, 2LL);
      v23 = BugCheckParameter1;
      v52 = v109;
      v128 = v109;
      ValidPte = *(_QWORD *)BugCheckParameter1;
      v130 = *(_QWORD *)BugCheckParameter1;
    }
    if ( !v52 )
    {
LABEL_223:
      v8 = v124;
      goto LABEL_51;
    }
    if ( (ValidPte & 1) != 0 )
    {
      if ( (*(_BYTE *)(v52 + 35) & 0x40) == 0 )
      {
        *(_QWORD *)(v52 + 24) ^= (*(_QWORD *)(v52 + 24) ^ (*(_QWORD *)(v52 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        goto LABEL_101;
      }
LABEL_191:
      _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_115;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v52 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
    {
      v128 = MiHandleSpecialPurposeMemoryCachedFault(0LL, (__int64)(v11 << 25) >> 16, v23);
      v52 = v128;
      if ( !v128 )
      {
        v8 = v124;
        BugCheckParameter1 = 0LL;
        goto LABEL_119;
      }
    }
    if ( (*(_BYTE *)(v52 + 34) & 0x20) != 0 || (*(_BYTE *)(v52 + 35) & 0x40) != 0 )
      goto LABEL_191;
    v53 = *(_QWORD *)(v52 + 16);
    v54 = v53 >> 11;
    if ( (v53 & 0x400) == 0 )
      v54 = v53 >> 3;
    if ( (v54 & 1) != 0 )
    {
      TransitionHeatBatch = (struct _SLIST_ENTRY *)MiMakeTransitionHeatBatch(v52, 0LL, ((__int64)(v12 - v11) >> 3) + 1);
      if ( !TransitionHeatBatch )
      {
        v52 = v128;
        goto LABEL_87;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v128 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v10, v121);
      v10 = 0LL;
      if ( TransitionHeatBatch == (struct _SLIST_ENTRY *)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(TransitionHeatBatch);
        MiFreeTransitionPageHeatList(TransitionHeatBatch);
      }
      v8 = v124;
      BugCheckParameter1 = 0LL;
    }
    else
    {
LABEL_87:
      if ( (MiUnlinkPageFromListEx(v52) & 3) == 0 )
      {
        v52 = v128;
        v55 = *(_QWORD *)(v128 + 8);
        ++*(_WORD *)(v128 + 32);
        v56 = (_QWORD *)(v55 | 0x8000000000000000uLL);
        v136 = v56;
        *(_BYTE *)(v128 + 34) = *(_BYTE *)(v128 + 34) & 0xF8 | 6;
        v57 = (*(_QWORD *)(v128 + 16) >> 5) & 7LL;
        v58 = *(unsigned __int8 *)(v128 + 34) >> 6;
        if ( v58 != 1 )
        {
          if ( v58 )
          {
            if ( v58 == 2 )
              LOBYTE(v57) = v57 | 0x18;
          }
          else
          {
            LOBYTE(v57) = v57 | 8;
          }
        }
        v59 = (((0xAAAAAAAAAAAAAAABuLL * ((v128 + 0x220000000000LL) >> 4)) & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v57 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
        if ( v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
        {
          v60 = (__int64)(v11 << 25) >> 16;
          v140 = v60;
          if ( v11 >= 0xFFFFF6FB40000000uLL && v11 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v11 == 0xFFFFF6FB7DBEDF68uLL )
              v59 |= 0x8000000000000000uLL;
            else
              v59 &= ~0x8000000000000000uLL;
            v111 = MiUserPdeOrAbove(v11);
            v52 = v128;
            v60 = v140;
            v56 = v136;
            if ( v111 )
              v59 |= 4uLL;
          }
          if ( v11 <= 0xFFFFF6BFFFFFFF78uLL )
            v59 |= 4uLL;
          if ( v60 < 0xFFFF800000000000uLL )
          {
            v61 = HIBYTE(word_140C6697C);
          }
          else
          {
            if ( byte_140C6A058[((v60 >> 39) & 0x1FF) - 256] == 1
              || v60 >= 0xFFFFF68000000000uLL && v60 <= 0xFFFFF6FFFFFFFFFFuLL )
            {
LABEL_100:
              *v56 = (((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ v59) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
              *(_QWORD *)(v52 + 24) = *(_QWORD *)(v52 + 24) & 0xC000000000000000uLL | 1;
              ValidPte = *(_QWORD *)BugCheckParameter1;
              v130 = *(_QWORD *)BugCheckParameter1;
LABEL_101:
              _InterlockedAnd64((volatile signed __int64 *)(v52 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_102;
            }
            if ( v60 < qword_140C6A1D8 || v60 > qword_140C66CF0 )
              v61 = (unsigned __int8)word_140C6697C;
            else
              v61 = HIBYTE(word_140C6697C);
          }
          if ( !v61 )
            goto LABEL_100;
        }
        v59 |= 0x100uLL;
        goto LABEL_100;
      }
      MiDiscardTransitionPteEx(v128, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v128 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = v124;
      BugCheckParameter1 = 0LL;
    }
LABEL_119:
    v9 = BugCheckParameter1;
    v17 = 0x40000000000000LL;
    v6 = v138;
  }
  while ( v11 <= v12 );
  if ( !v10 )
    goto LABEL_121;
  v138 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v138);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  *(_BYTE *)(v10 + 34) &= ~0x20u;
  v70 = *(_WORD *)(v10 + 32);
  if ( !v70 )
    MiBadRefCount(v10, ValidPte, v9);
  v71 = v70 - 1;
  *(_WORD *)(v10 + 32) = v71;
  if ( !v71 && (*(_QWORD *)(v10 + 40) & 0x20000000000000LL) != 0 )
  {
LABEL_307:
    MiPfnReferenceCountIsZero(v10, 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4));
    goto LABEL_151;
  }
  v72 = *(_QWORD *)(v10 + 40);
  if ( (v72 & 0x10000000000LL) != 0 || (v72 & 0x20000000000000LL) != 0 )
    goto LABEL_151;
  v73 = *(_QWORD *)(v10 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v71 )
  {
LABEL_310:
    v74 = 1LL;
    goto LABEL_141;
  }
  if ( v71 != 1 )
  {
    if ( v71 != 2 || !v73 || (*(_BYTE *)(v10 + 34) & 8) == 0 )
      goto LABEL_151;
    goto LABEL_310;
  }
  if ( v73 || (*(_BYTE *)(v10 + 34) & 8) != 0 )
  {
    v74 = 1LL;
    v4 = 1;
  }
  else
  {
    v74 = 1LL;
  }
  if ( v4 )
  {
LABEL_141:
    v75 = *(_QWORD *)(v10 + 8) | 0x8000000000000000uLL;
    if ( (v75 > 0xFFFFF6BFFFFFFF78uLL || v75 < 0xFFFFF68000000000uLL) && (v76 = *(_BYTE *)(v10 + 35), (v76 & 0x20) != 0) )
    {
      *(_BYTE *)(v10 + 35) = v76 & 0xDF;
    }
    else
    {
      v77 = ((unsigned __int64)v72 >> 43) & 0x3FF;
      v78 = *(_QWORD *)(qword_140C67048 + 8 * v77);
      if ( v72 < 0 && (*(_DWORD *)(v10 + 16) & 0x400LL) != 0
        || v75 <= 0xFFFFF6BFFFFFFF78uLL && v75 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v10 + 35) & 0x20) != 0
        || !v71 && (*(_QWORD *)(v10 + 24) & 0x4000000000000000LL) != 0 )
      {
        MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * v77), 1LL);
        v74 = 1LL;
      }
      if ( (_UNKNOWN *)v78 != &MiSystemPartition )
        goto LABEL_327;
      v79 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v79->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_327;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v82 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&v79->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v81 = (_DWORD)CachedResidentAvailable == v82;
          LODWORD(CachedResidentAvailable) = v82;
          if ( v81 )
            goto LABEL_150;
        }
        while ( v82 != -1 && (unsigned __int64)(v82 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v79->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v74 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v74 )
LABEL_327:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v78 + 17280), v74);
    }
LABEL_150:
    if ( !v71 )
      goto LABEL_307;
  }
LABEL_151:
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v83 = v121;
  if ( v121 != 17 )
  {
    if ( KiIrqlFlags )
    {
      v117 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v117 <= 0xFu && v121 <= 0xFu && v117 >= 2u )
      {
        v118 = KeGetCurrentPrcb();
        v119 = v118->SchedulerAssist;
        v83 = v121;
        v120 = ~(unsigned __int16)(-1LL << (v121 + 1));
        v81 = (v120 & v119[5]) == 0;
        v119[5] &= v120;
        if ( v81 )
          KiRemoveSystemWorkPriorityKick(v118);
      }
    }
    __writecr8(v83);
  }
LABEL_121:
  if ( v8 )
    MiMakeSystemCacheRangeValid(v11 - 8LL * v8, v154, v8, v13);
  v5 = v123;
  v7 = v141;
LABEL_124:
  if ( v153 )
    *v153 = v5;
  return v7;
}
