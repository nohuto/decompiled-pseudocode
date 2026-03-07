__int64 __fastcall MiMakePageAvoidRead(
        unsigned __int64 a1,
        void *a2,
        int a3,
        size_t a4,
        char a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  __int64 v8; // r15
  __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  int NodeShiftedColor; // r9d
  int v12; // eax
  signed __int32 v13; // edx
  unsigned int v14; // r8d
  __int64 Page; // rax
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdi
  unsigned int v20; // ebx
  BOOL v21; // esi
  signed __int64 v22; // rdx
  signed __int64 v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // r14
  char v26; // r15
  int v28; // eax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rcx
  char *v33; // rsi
  unsigned __int64 *v34; // r14
  unsigned __int64 v35; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // rbx
  __int64 v38; // rsi
  unsigned __int8 CurrentIrql; // r13
  unsigned __int64 v40; // rax
  struct _KPRCB *v41; // rdx
  __int64 v42; // rcx
  bool v43; // r15
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  int v46; // ebx
  __int64 v47; // rcx
  void *v48; // r14
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v50; // ett
  volatile signed __int64 *v51; // r14
  char v52; // al
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  _QWORD *v57; // r13
  unsigned int v58; // r15d
  __int64 v59; // rax
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // r9
  signed __int64 v62; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v64; // ebx
  unsigned __int64 v65; // rdx
  volatile signed __int32 *v66; // r14
  __int64 v67; // rdx
  _BYTE *v68; // r9
  __int64 v69; // r15
  volatile signed __int32 *v70; // rbx
  unsigned __int8 v71; // r14
  int v72; // edi
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rbx
  char *v76; // r9
  volatile signed __int64 *v77; // rdi
  __int64 v78; // r8
  __int64 v79; // rdx
  ULONG_PTR v80; // r15
  _QWORD *v81; // r12
  unsigned __int64 UltraMapping; // r9
  __int64 v83; // rdi
  __int64 v84; // r13
  __int64 v85; // r15
  int v86; // r8d
  int v87; // edx
  __int64 ValidPte; // rbx
  _QWORD *MmInternal; // r14
  __int64 *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // rcx
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  __int16 v96; // cx
  bool v97; // zf
  __int16 v98; // cx
  __int64 v99; // r8
  __int64 v100; // rax
  int v101; // edx
  BOOL v102; // ebx
  unsigned __int64 v103; // rdx
  char v104; // al
  __int64 v105; // rcx
  __int64 v106; // rdi
  unsigned __int64 v107; // r9
  struct _KPRCB *v108; // r8
  __int64 v109; // rdx
  signed __int32 v110; // eax
  unsigned __int8 v111; // bl
  _DWORD *SchedulerAssist; // r8
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  size_t v117; // r13
  unsigned int v118; // ebx
  signed __int64 v119; // rcx
  unsigned __int8 v120; // cl
  struct _KPRCB *v121; // r10
  _DWORD *v122; // r9
  int v123; // eax
  struct _KPRCB *v124; // r10
  _DWORD *v125; // r9
  int v126; // edx
  struct _LIST_ENTRY *Flink; // r9
  __int64 v128; // rcx
  struct _LIST_ENTRY *v129; // rcx
  __int64 v130; // rcx
  signed __int64 v131; // rdx
  _DWORD *v132; // r9
  __int64 v133; // rdx
  unsigned __int8 v134; // cl
  struct _KPRCB *v135; // r10
  _DWORD *v136; // r9
  int v137; // eax
  char v138; // al
  char v139; // al
  char v140; // al
  unsigned __int8 v141; // cl
  struct _KPRCB *v142; // r9
  _DWORD *v143; // r8
  int v144; // eax
  unsigned __int8 v145; // cl
  struct _KPRCB *v146; // r9
  _DWORD *v147; // r8
  int v148; // eax
  unsigned __int8 v149; // [rsp+30h] [rbp-188h]
  BOOL v150; // [rsp+34h] [rbp-184h]
  BOOL v151; // [rsp+34h] [rbp-184h]
  __int64 v152; // [rsp+38h] [rbp-180h]
  int v153; // [rsp+40h] [rbp-178h]
  _DWORD Size[3]; // [rsp+44h] [rbp-174h] BYREF
  _BYTE *v155; // [rsp+50h] [rbp-168h]
  int v156; // [rsp+58h] [rbp-160h]
  int v157; // [rsp+5Ch] [rbp-15Ch]
  unsigned __int64 v158; // [rsp+60h] [rbp-158h]
  unsigned __int64 v159; // [rsp+68h] [rbp-150h]
  volatile signed __int32 *v160; // [rsp+70h] [rbp-148h]
  __int64 v161; // [rsp+78h] [rbp-140h]
  unsigned __int64 v162; // [rsp+80h] [rbp-138h]
  unsigned __int64 *v163; // [rsp+88h] [rbp-130h] BYREF
  __int64 v164; // [rsp+90h] [rbp-128h]
  __int64 v165; // [rsp+98h] [rbp-120h]
  __int64 v166; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v167; // [rsp+A8h] [rbp-110h] BYREF
  void *Src; // [rsp+B0h] [rbp-108h] BYREF
  unsigned __int64 v169; // [rsp+B8h] [rbp-100h]
  _DWORD *v170; // [rsp+C0h] [rbp-F8h]
  __int64 v171; // [rsp+C8h] [rbp-F0h]
  __int64 v172; // [rsp+D0h] [rbp-E8h]
  __int64 v173; // [rsp+D8h] [rbp-E0h] BYREF
  __int128 v174; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v175; // [rsp+F0h] [rbp-C8h]
  __int128 v176; // [rsp+100h] [rbp-B8h]
  __int128 v177; // [rsp+110h] [rbp-A8h]
  __int128 v178; // [rsp+120h] [rbp-98h]
  __int128 v179; // [rsp+130h] [rbp-88h]
  __int128 v180; // [rsp+140h] [rbp-78h]
  __int128 v181; // [rsp+150h] [rbp-68h]
  _QWORD v182[2]; // [rsp+168h] [rbp-50h] BYREF
  void *retaddr; // [rsp+1B8h] [rbp+0h]

  Size[0] = a3;
  Src = a2;
  v159 = a1;
  v162 = a1;
  v163 = a6;
  v182[0] = a7;
  v149 = 0;
  v174 = 0LL;
  v175 = 0LL;
  *a7 = 0;
  v8 = *a6;
  if ( qword_140C657C0 )
  {
    if ( (v8 & 0x10) != 0 )
      v8 &= ~0x10uLL;
    else
      v8 &= ~qword_140C657C0;
  }
  v172 = v8 >> 16;
  v166 = v8 >> 16;
  v164 = *(_QWORD *)(v8 >> 16);
  v167 = v164;
  v9 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v164 + 60) & 0x3FF));
  v170 = (_DWORD *)(v164 + 56);
  if ( ((*(_DWORD *)(v164 + 56) >> 20) & 0x7F) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    NodeShiftedColor = (((*(_DWORD *)(v164 + 56) >> 20) & 0x7F) - 1) << byte_140C6570D;
  }
  else
  {
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[KeGetCurrentThread()->IdealProcessor];
    NodeShiftedColor = CurrentPrcb->NodeShiftedColor;
  }
  v12 = (1 << byte_140C6570E) - 1;
  v13 = v12 & _InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->PageColor, 1u);
  v14 = 0;
  if ( a4 != 4096 )
    v14 = 2;
  Page = MiGetPage(v9, NodeShiftedColor | (unsigned int)v13, v14);
  v158 = Page;
  if ( Page == -1 )
  {
    MiWaitForFreePage(v9);
    return 1LL;
  }
  v17 = 48 * Page;
  *(_QWORD *)&Size[1] = 48 * Page;
  v161 = 48 * Page;
  v18 = 48 * Page - 0x220000000000LL;
  v152 = v18;
  v19 = (*a6 >> 5) & 0x1F;
  v171 = v19;
  v157 = v19;
  v20 = 1;
  if ( (_DWORD)v19 )
  {
    if ( (_DWORD)v19 != 31 )
    {
      if ( (unsigned int)v19 >> 3 == 3 && (v19 & 7) != 0 )
      {
        v20 = 2;
      }
      else if ( (unsigned int)v19 >> 3 == 1 )
      {
        v20 = 0;
      }
    }
  }
  else
  {
    v20 = 3;
  }
  v21 = 0;
  v150 = 0;
  v153 = 0;
  if ( a4 != 4096 )
  {
    v21 = MiPfnZeroingNeeded(v18);
    v150 = v21;
    v18 = v152;
  }
  v155 = (_BYTE *)(v17 - 0x21FFFFFFFFDELL);
  if ( *(unsigned __int8 *)(v17 - 0x21FFFFFFFFDELL) >> 6 != v20 )
    MiChangePageAttribute(v18, v20, 0LL, v16);
  v160 = (volatile signed __int32 *)(v17 - 0x21FFFFFFFFE8LL);
  v22 = *(_QWORD *)(v17 - 0x21FFFFFFFFE8LL);
  v23 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v17 - 0x21FFFFFFFFE8LL),
          v22 & 0xC7FFFFFFFFFFFFFFuLL,
          v22);
  if ( v22 != v23 )
  {
    do
    {
      v119 = v23;
      v23 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v17 - 0x21FFFFFFFFE8LL),
              v23 & 0xC7FFFFFFFFFFFFFFuLL,
              v23);
    }
    while ( v119 != v23 );
  }
  v25 = MiReservePtes(&qword_140C695C0, 1LL);
  v169 = v25;
  if ( v25 )
  {
    v26 = 4;
    if ( v158 <= qword_140C65820 )
    {
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFD8LL), 0x36u) )
      {
        v28 = (unsigned __int8)*v155 >> 6;
        if ( !v28 || v28 == 3 )
        {
          v26 = 12;
        }
        else if ( v28 == 2 )
        {
          v26 = 28;
        }
      }
    }
    v29 = ((v158 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v26 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v25 < 0xFFFFF68000000000uLL || v25 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_222;
    v30 = (__int64)(v25 << 25) >> 16;
    if ( v25 >= 0xFFFFF6FB40000000uLL && v25 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v29 = v25 == 0xFFFFF6FB7DBEDF68uLL
          ? ((v158 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v26 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
          : ((v158 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v26 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v25) )
        v29 |= 4uLL;
    }
    if ( v25 <= 0xFFFFF6BFFFFFFF78uLL )
      v29 |= 4uLL;
    if ( v30 < 0xFFFF800000000000uLL )
    {
      v31 = HIBYTE(word_140C6697C);
    }
    else
    {
      if ( byte_140C6A058[((v30 >> 39) & 0x1FF) - 256] == 1
        || v30 >= 0xFFFFF68000000000uLL && v30 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        goto LABEL_41;
      }
      v31 = v30 > qword_140C66CF0 || v30 < qword_140C6A1D8 ? (unsigned __int8)word_140C6697C : HIBYTE(word_140C6697C);
    }
    if ( v31 )
LABEL_222:
      v29 |= 0x100uLL;
LABEL_41:
    *(_QWORD *)v25 = ((((unsigned __int16)v29 | 0x42) ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (v29 | 0x42)) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    v32 = (__int64)(v25 << 25) >> 16;
    v33 = (char *)(Size[0] + v32);
    if ( v150 )
    {
      if ( Size[0] )
        memset((void *)v32, 0, Size[0]);
      v117 = 4096 - a4 - Size[0];
      if ( v117 )
        memset(&v33[a4], 0, v117);
    }
    v156 = 0;
    memmove(v33, Src, a4);
    MiReleasePtes(&qword_140C695C0, v25, 1LL);
    goto LABEL_43;
  }
  if ( (a5 & 1) == 0 )
  {
    MiReleaseFreshPage(v152);
    return 4LL;
  }
  if ( v21 )
    MiZeroPhysicalPage(v24, v158, 0LL, v20);
  v153 = 1;
LABEL_43:
  v151 = (BYTE4(PerfGlobalGroupMask) & 1) != 0;
  v34 = (unsigned __int64 *)(((v159 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v169 = (unsigned __int64)v34;
  while ( 1 )
  {
    v35 = *v34;
    v36 = *v34 & 1;
    while ( 1 )
    {
      if ( !v36 || (v35 & 0x200) != 0 )
        goto LABEL_355;
      v37 = (v35 >> 12) & 0xFFFFFFFFFFLL;
      if ( v37 <= qword_140C65820 )
      {
        v165 = 48 * v37;
        if ( (*(_QWORD *)(48 * v37 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) != 0 )
          break;
      }
    }
    v38 = 48 * v37 - 0x220000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v114) = 4;
      else
        v114 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v114;
    }
    LODWORD(v166) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v166);
      while ( *(__int64 *)(v38 + 24) < 0 );
    }
    v40 = *v34;
    if ( (*v34 & 1) == 0 || (v40 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          v145 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v145 <= 0xFu && CurrentIrql <= 0xFu && v145 >= 2u )
          {
            v146 = KeGetCurrentPrcb();
            v147 = v146->SchedulerAssist;
            v148 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v97 = (v148 & v147[5]) == 0;
            v147[5] &= v148;
            if ( v97 )
              KiRemoveSystemWorkPriorityKick(v146);
          }
        }
        __writecr8(CurrentIrql);
      }
LABEL_355:
      MiLockAndInsertPageInFreeList(v152);
      return 1LL;
    }
    if ( v37 == ((v40 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql != 17 )
    {
      if ( KiIrqlFlags )
      {
        v120 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v120 <= 0xFu && CurrentIrql <= 0xFu && v120 >= 2u )
        {
          v121 = KeGetCurrentPrcb();
          v122 = v121->SchedulerAssist;
          v123 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v97 = (v123 & v122[5]) == 0;
          v122[5] &= v123;
          if ( v97 )
            KiRemoveSystemWorkPriorityKick(v121);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v38) )
    goto LABEL_64;
  v43 = 0;
  v44 = *(_QWORD *)(v38 + 40);
  if ( v44 < 0 && (*(_DWORD *)(v38 + 16) & 0x400LL) != 0 )
  {
    v43 = 1;
LABEL_57:
    v46 = 1;
    goto LABEL_58;
  }
  v45 = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
  if ( v45 > 0xFFFFF6BFFFFFFF78uLL || v45 < 0xFFFFF68000000000uLL )
    goto LABEL_57;
  v46 = 1;
  v43 = (*(_BYTE *)(v38 + 35) & 0x20) != 0;
LABEL_58:
  v47 = ((unsigned __int64)v44 >> 43) & 0x3FF;
  v48 = *(void **)(qword_140C67048 + 8 * v47);
  if ( !v43 || (unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C67048 + 8 * v47), 1LL, 4LL) )
  {
    if ( v48 == &MiSystemPartition )
    {
      v41 = KeGetCurrentPrcb();
      CachedResidentAvailable = v41->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v42 = (unsigned int)(CachedResidentAvailable - 1);
        v50 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v41->CachedResidentAvailable,
                                    v42,
                                    CachedResidentAvailable);
        if ( v50 == CachedResidentAvailable )
          goto LABEL_63;
      }
    }
    v46 = MiChargePartitionResidentAvailable(v48, 1LL, 0xFFFFFFFFLL);
    if ( !v46 && v43 )
      MiReturnCommit(v48, 1LL);
LABEL_63:
    if ( v46 )
LABEL_64:
      ++*(_WORD *)(v38 + 32);
  }
  if ( CurrentIrql == 17 )
  {
    LOBYTE(v41) = 17;
    MiLockOwnedProtoPage(v38, v41);
  }
  else
  {
    v149 = CurrentIrql;
    v51 = (volatile signed __int64 *)(*(_QWORD *)(v38 + 8) | 0x8000000000000000uLL);
    v161 = (__int64)v51;
    v52 = *(_BYTE *)(v38 + 34);
    if ( (v52 & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          v42 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)v42 <= 0xFu
            && CurrentIrql <= 0xFu
            && (unsigned __int8)v42 >= 2u )
          {
            v124 = KeGetCurrentPrcb();
            v125 = v124->SchedulerAssist;
            v42 = (unsigned int)CurrentIrql + 1;
            v126 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v97 = (v126 & v125[5]) == 0;
            v125[5] &= v126;
            if ( v97 )
              KiRemoveSystemWorkPriorityKick(v124);
          }
        }
        __writecr8(CurrentIrql);
        LODWORD(v162) = 0;
        while ( (*(_BYTE *)(v38 + 34) & 0x20) != 0 )
        {
          v118 = v162 + 1;
          LODWORD(v162) = v118;
          if ( (v118 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v42) )
          {
            HvlNotifyLongSpinWait(v118);
          }
          else
          {
            _mm_pause();
          }
        }
        MiLockPageInline(v38);
        v52 = *(_BYTE *)(v38 + 34);
      }
      while ( (v52 & 0x20) != 0 );
      LODWORD(v19) = v171;
      v51 = (volatile signed __int64 *)v161;
    }
    *(_BYTE *)(v38 + 34) = v52 | 0x20;
    if ( (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) == 0 && (*v51 & 0x20) == 0 )
      MiWriteValidPteVolatile(v51, 1, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v53 = *(_QWORD *)v159;
  if ( (*(_QWORD *)v159 & 1) != 0 || (v53 & 0x800) != 0 && (v53 & 0x400) == 0 || (_DWORD)v19 != ((v53 >> 5) & 0x1F) )
  {
    MiUnlockProtoPoolPage(v38, v149);
    MiLockAndInsertPageInFreeList(v152);
    return 1LL;
  }
  LODWORD(v167) = 0;
  while ( _interlockedbittestandset64(v160, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v167);
    while ( *(__int64 *)v160 < 0 );
  }
  v54 = *(_QWORD *)v159;
  if ( v159 >= 0xFFFFF6FB7DBED000uLL
    && v159 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v54 & 1) != 0
    && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v128 = *((_QWORD *)&Flink->Flink + ((v159 >> 3) & 0x1FF));
      if ( (v128 & 0x20) != 0 )
        v54 |= 0x20uLL;
      if ( (v128 & 0x42) != 0 )
        v54 |= 0x42uLL;
    }
  }
  if ( (v54 & 0x400) != 0 )
    v55 = v54 & 0xFFFFFFFFFFFFF7FFuLL;
  else
    v55 = v54 & 0xFFFFFFFFFFFFFFF7uLL;
  v56 = *(_QWORD *)&Size[1];
  v57 = (_QWORD *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFF0LL);
  v161 = (__int64)v57;
  *v57 = v55;
  *(_QWORD *)(v152 + 40) |= 0x8000000000000000uLL;
  v58 = 1;
  if ( (_DWORD)v19 )
  {
    if ( (_DWORD)v19 != 31 )
    {
      if ( (unsigned int)v19 >> 3 == 3 && (v19 & 7) != 0 )
      {
        v58 = 2;
      }
      else if ( (unsigned int)v19 >> 3 == 1 )
      {
        v58 = 0;
      }
    }
  }
  else
  {
    v58 = 3;
  }
  *(_WORD *)(v56 - 0x21FFFFFFFFE0LL) = 1;
  v59 = *(_QWORD *)v169;
  if ( v169 >= 0xFFFFF6FB7DBED000uLL
    && v169 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v59 & 1) != 0
    && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
  {
    v129 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v129 )
    {
      v130 = *((_QWORD *)&v129->Flink + ((v169 >> 3) & 0x1FF));
      if ( (v130 & 0x20) != 0 )
        v59 |= 0x20uLL;
      if ( (v130 & 0x42) != 0 )
        v59 |= 0x42uLL;
    }
  }
  v173 = v59;
  v60 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v173) >> 12) & 0xFFFFFFFFFFLL;
  v176 = 0LL;
  v177 = 0LL;
  v178 = 0LL;
  v179 = 0LL;
  v180 = 0LL;
  v181 = 0LL;
  *((_QWORD *)&v178 + 1) = *(_QWORD *)(v152 + 40);
  v61 = v60;
  *((_QWORD *)&v181 + 1) = v60 | *((_QWORD *)&v178 + 1) & 0xFFFFFF0000000000uLL;
  v62 = _InterlockedCompareExchange64(
          (volatile signed __int64 *)(v152 + 40),
          *((signed __int64 *)&v181 + 1),
          *((signed __int64 *)&v178 + 1));
  *((_QWORD *)&v181 + 1) = v62;
  if ( *((_QWORD *)&v178 + 1) != v62 )
  {
    do
    {
      v131 = v62;
      *((_QWORD *)&v178 + 1) = v62;
      *((_QWORD *)&v181 + 1) = v60 | v62 & 0xFFFFFF0000000000uLL;
      v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v152 + 40), *((signed __int64 *)&v181 + 1), v62);
      *((_QWORD *)&v181 + 1) = v62;
    }
    while ( v131 != v62 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
  {
    v64 = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  }
  else
  {
    v64 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
    v65 = CurrentThread->Process[1].Affinity.StaticBitmap[16];
    if ( v65 && v64 >= *(_DWORD *)(v65 + 1076) )
      LOBYTE(v64) = *(_DWORD *)(v65 + 1076);
  }
  LODWORD(Src) = 0;
  v66 = (volatile signed __int32 *)(48 * v60 - 0x21FFFFFFFFE8LL);
  while ( _interlockedbittestandset64(v66, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&Src);
    while ( *(__int64 *)v66 < 0 );
  }
  *(_QWORD *)v66 ^= (*(_QWORD *)v66 ^ ((*(_QWORD *)v66 & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v66, 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)*v155 >> 6 != v58 )
    MiChangePageAttribute(v152, v58, 1LL, v61);
  *(_QWORD *)v160 = *(_QWORD *)v160 & 0xC000000000000000uLL | 1;
  v67 = *(_QWORD *)&Size[1];
  *(_BYTE *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFDDLL) ^= (*(_BYTE *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFDDLL) ^ v64) & 7;
  *(_QWORD *)(v67 - 0x21FFFFFFFFF8LL) = v159;
  v68 = v155;
  *v155 = *v155 & 0xF8 | 6;
  *v68 |= 0x10u;
  if ( (a5 & 2) != 0 && (unsigned int)MiGetPfnPriority(v152) > 2 )
    *(_BYTE *)(v115 + v116) = *(_BYTE *)(v115 + v116) & 0xF8 | 2;
  if ( (*v170 & 0x20) != 0 || !*(_QWORD *)(v164 + 64) )
    v69 = 0LL;
  else
    v69 = v172;
  v70 = (volatile signed __int32 *)(v164 + 72);
  v71 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v71 <= 0xFu )
  {
    v132 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v71 == 2 )
      LODWORD(v133) = 4;
    else
      v133 = (-1LL << (v71 + 1)) & 4;
    v132[5] |= v133;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v70, v71);
  }
  else
  {
    Size[0] = 0;
    if ( _interlockedbittestandset(v70, 0x1Fu) )
      Size[0] = ExpWaitForSpinLockExclusiveAndAcquire(v70);
    while ( (*v70 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (*v70 & 0x40000000) == 0 )
        _InterlockedOr(v70, 0x40000000u);
      KeYieldProcessorEx(Size);
    }
  }
  ++*(_QWORD *)(v164 + 32);
  if ( v69 )
    ++*(_DWORD *)(v69 + 104);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v70, retaddr);
  else
    *v70 = 0;
  if ( KiIrqlFlags )
  {
    v134 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v134 <= 0xFu && v71 <= 0xFu && v134 >= 2u )
    {
      v135 = KeGetCurrentPrcb();
      v136 = v135->SchedulerAssist;
      v137 = ~(unsigned __int16)(-1LL << (v71 + 1));
      v97 = (v137 & v136[5]) == 0;
      v136[5] &= v137;
      if ( v97 )
        KiRemoveSystemWorkPriorityKick(v135);
    }
  }
  __writecr8(v71);
  v72 = v19 | 0x80000000;
  v73 = v158;
  v74 = ((v158 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v72 & 0x1F] & 0xFFF0000000000E7FuLL | 0x121;
  if ( (v72 & 5) == 4 && v72 < 0 )
    v74 = ((v158 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v72 & 0x1F] & 0xFFF0000000000E7FuLL | 0x163;
  v75 = v74 & 0xF0FFFFFFFFFFFEFFuLL | 0xA00000000000000LL;
  *(_QWORD *)v159 = v75;
  *v163 = v75;
  if ( v151 )
    MiIdentifyPfn(v73, &v174);
  v76 = v155;
  if ( (*v155 & 7) != 6 )
    MiBadShareCount(v152);
  v77 = (volatile signed __int64 *)v160;
  v78 = 0x3FFFFFFFFFFFFFFFLL;
  v79 = (*(_QWORD *)v160 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)v160 ^= (v79 ^ *(_QWORD *)v160) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v79 )
  {
    v80 = v152;
    if ( *(__int64 *)(v152 + 40) < 0 )
    {
      v81 = (_QWORD *)v152;
      UltraMapping = 0LL;
      v83 = *v57;
      v84 = 0LL;
      do
      {
        v85 = ((unsigned int)v81[1] >> 3) & 0x1FF;
        if ( !UltraMapping )
        {
          v86 = 4;
          v87 = *(unsigned __int8 *)(48 * (v81[5] & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFDELL) >> 6;
          if ( !v87 || v87 == 3 )
          {
            v86 = 12;
          }
          else if ( v87 == 2 )
          {
            v86 = 28;
          }
          ValidPte = MiMakeValidPte(0LL, v81[5] & 0xFFFFFFFFFFLL, v86 | 0xA0000000);
          MmInternal = KeGetCurrentPrcb()->MmInternal;
          UltraMapping = MiGetUltraMapping(MmInternal + 1556, 3LL, 1LL);
          v90 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          MmInternal[1543] = v90;
          *v90 = ValidPte;
        }
        v78 = 48 * ((*(_QWORD *)(UltraMapping + 8 * v85) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
        if ( (_QWORD *)v78 != v81 )
          KeBugCheckEx(
            0x4Eu,
            6uLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(v81 + 0x44000000000LL) >> 4),
            (unsigned int)v85 + UltraMapping,
            *(_QWORD *)(UltraMapping + 8 * v85));
        v91 = v83 & 0x3E0 | (((*(_QWORD *)(UltraMapping + 8 * v85) >> 12) & 0xFFFFFFFFFFLL) << 12) | 0x800;
        v79 = qword_140C657C0;
        if ( qword_140C657C0 )
        {
          if ( (qword_140C657C0 & v91) != 0 )
            v91 = v83 & 0x3E0 | (((*(_QWORD *)(UltraMapping + 8 * v85) >> 12) & 0xFFFFFFFFFFLL) << 12) | 0x810;
          else
            v91 |= qword_140C657C0;
        }
        *(_QWORD *)(UltraMapping + 8 * v85) = v91;
        if ( ++v84 == 1 )
          break;
        v81 = (_QWORD *)(48 * (*v81 & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      }
      while ( !v84 );
      *((_QWORD *)KeGetCurrentPrcb()->MmInternal + 1543) = 0LL;
      *(_QWORD *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
      v57 = (_QWORD *)v161;
      v77 = (volatile signed __int64 *)v160;
      v76 = v155;
      v80 = v152;
    }
    v92 = *(_QWORD *)&Size[1];
    --*(_WORD *)(*(_QWORD *)&Size[1] - 0x21FFFFFFFFE0LL);
    v93 = ((unsigned __int64)*v77 >> 62) & 1;
    if ( *(_WORD *)(v92 - 0x21FFFFFFFFE0LL) )
    {
      v138 = *v76;
      if ( (_DWORD)v93 )
      {
        v139 = v138 | 7;
      }
      else if ( (v138 & 0x10) != 0 )
      {
        v139 = v138 & 0xF8 | 3;
      }
      else if ( (v138 & 8) != 0 )
      {
        v139 = v138 & 0xF8 | 3;
      }
      else
      {
        v139 = v138 & 0xF8 | 2;
      }
      *v76 = v139;
      if ( (*(_DWORD *)v57 & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v57) )
        *(_BYTE *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v80 + 40) >> 43) & 0x3FFLL)) + 715LL) = 1;
    }
    else if ( (_DWORD)v93 )
    {
      v140 = *(_BYTE *)(v92 - 0x21FFFFFFFFDDLL);
      if ( (v140 & 0x10) != 0 )
        *(_BYTE *)(v92 - 0x21FFFFFFFFDDLL) = v140 & 0xEF;
      MiReleasePageFileSpace(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v80 + 40) >> 43) & 0x3FFLL)), *v57, 1LL);
      *(_QWORD *)&Size[1] = v92 >> 4;
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * (v92 >> 4));
    }
    else
    {
      v94 = *v57;
      if ( (*v57 & 0x400LL) != 0 )
        v95 = v94 & 0xFFFFFFFFFFFFF7FFuLL;
      else
        v95 = v94 & 0xFFFFFFFFFFFFFFF7uLL;
      *v57 = v95;
      if ( (*v76 & 0x10) == 0 )
        *v76 = *v76 & 0xF8 | 2;
      MiInsertPageInList(v80);
    }
  }
  _InterlockedAnd64(v77, 0x7FFFFFFFFFFFFFFFuLL);
  LODWORD(v163) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v38 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v163);
    while ( *(__int64 *)(v38 + 24) < 0 );
  }
  *(_BYTE *)(v38 + 34) &= ~0x20u;
  v96 = *(_WORD *)(v38 + 32);
  if ( !v96 )
    MiBadRefCount(v38, v79, v78);
  v97 = v96 == 1;
  v98 = v96 - 1;
  *(_WORD *)(v38 + 32) = v98;
  if ( !v97 || (*(_QWORD *)(v38 + 40) & 0x20000000000000LL) == 0 )
  {
    v99 = *(_QWORD *)(v38 + 40);
    if ( (v99 & 0x10000000000LL) != 0 || (v99 & 0x20000000000000LL) != 0 )
      goto LABEL_153;
    v100 = *(_QWORD *)(v38 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v101 = 0;
    if ( !v98 )
      goto LABEL_141;
    if ( v98 == 1 )
    {
      if ( v100 || (*(_BYTE *)(v38 + 34) & 8) != 0 )
LABEL_141:
        v101 = 1;
    }
    else if ( v98 == 2 && v100 && (*(_BYTE *)(v38 + 34) & 8) != 0 )
    {
      goto LABEL_141;
    }
    if ( !v101 )
      goto LABEL_153;
    v102 = v98 == 0;
    v103 = *(_QWORD *)(v38 + 8) | 0x8000000000000000uLL;
    if ( v103 > 0xFFFFF6BFFFFFFF78uLL || v103 < 0xFFFFF68000000000uLL )
    {
      v104 = *(_BYTE *)(v38 + 35);
      if ( (v104 & 0x20) != 0 )
      {
        *(_BYTE *)(v38 + 35) = v104 & 0xDF;
        goto LABEL_152;
      }
    }
    v105 = ((unsigned __int64)v99 >> 43) & 0x3FF;
    v106 = *(_QWORD *)(qword_140C67048 + 8 * v105);
    if ( v99 < 0 && (*(_DWORD *)(v38 + 16) & 0x400LL) != 0
      || v103 <= 0xFFFFF6BFFFFFFF78uLL && v103 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v38 + 35) & 0x20) != 0
      || v102 && (*(_QWORD *)(v38 + 24) & 0x4000000000000000LL) != 0 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * v105), 1LL);
    }
    v107 = 1LL;
    if ( (_UNKNOWN *)v106 == &MiSystemPartition )
    {
      v108 = KeGetCurrentPrcb();
      v109 = (int)v108->CachedResidentAvailable;
      if ( (_DWORD)v109 != -1 )
      {
        if ( (unsigned __int64)(v109 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v110 = _InterlockedCompareExchange(
                     (volatile signed __int32 *)&v108->CachedResidentAvailable,
                     v109 + 1,
                     v109);
            v97 = (_DWORD)v109 == v110;
            LODWORD(v109) = v110;
            if ( v97 )
              break;
            if ( v110 == -1 || (unsigned __int64)(v110 + 1LL) > 0x100 )
              goto LABEL_335;
          }
LABEL_152:
          if ( !v102 )
            goto LABEL_153;
          goto LABEL_320;
        }
LABEL_335:
        if ( (int)v109 > 192
          && (_DWORD)v109 == _InterlockedCompareExchange(
                               (volatile signed __int32 *)&v108->CachedResidentAvailable,
                               192,
                               v109) )
        {
          v107 = (int)v109 - 192 + 1LL;
        }
        if ( !v107 )
          goto LABEL_152;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v106 + 17280), v107);
    goto LABEL_152;
  }
LABEL_320:
  MiPfnReferenceCountIsZero(v38, 0xAAAAAAAAAAAAAAABuLL * (v165 >> 4));
LABEL_153:
  _InterlockedAnd64((volatile signed __int64 *)(v38 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v111 = v149;
  if ( KiIrqlFlags )
  {
    v141 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v141 <= 0xFu && v149 <= 0xFu && v141 >= 2u )
    {
      v142 = KeGetCurrentPrcb();
      v143 = v142->SchedulerAssist;
      v111 = v149;
      v144 = ~(unsigned __int16)(-1LL << (v149 + 1));
      v97 = (v144 & v143[5]) == 0;
      v143[5] &= v144;
      if ( v97 )
        KiRemoveSystemWorkPriorityKick(v142);
    }
  }
  __writecr8(v111);
  *(_DWORD *)v182[0] = 0;
  if ( v151 )
  {
    *((_QWORD *)&v175 + 1) |= 4uLL;
    v182[0] = &v174;
    v182[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v182, 1, 536870913, 642, 289413892);
  }
  return v153 != 0 ? 4 : 0;
}
