__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        struct _IO_STATUS_BLOCK *a7)
{
  int *v8; // rsi
  int v10; // ebx
  int v11; // edi
  __int64 v12; // r14
  struct _MDL *v13; // r12
  bool v14; // zf
  void *v15; // rax
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v17; // r15
  unsigned int v18; // edi
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  ULONG_PTR v21; // r8
  __int64 v22; // rcx
  unsigned __int64 *v23; // rdx
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // bl
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  char v32; // al
  unsigned int *p_ByteCount; // r13
  unsigned int v34; // ecx
  int v35; // r14d
  unsigned __int64 v36; // rbx
  void *v37; // r10
  int v38; // eax
  BOOL v39; // r12d
  int v40; // r15d
  unsigned int v41; // r9d
  struct _KPRCB *v42; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v44; // ett
  int v45; // r14d
  int v46; // eax
  char v47; // al
  ULONG ByteOffset; // r8d
  unsigned int v49; // edx
  unsigned int ByteCount; // eax
  unsigned __int64 v51; // r14
  unsigned int v52; // esi
  int v53; // eax
  KIRQL v54; // al
  ULONG_PTR v55; // r13
  __int64 v56; // r15
  __int64 v57; // rax
  PVOID v58; // rbx
  __int64 v59; // r13
  signed __int64 v60; // rax
  unsigned __int64 v61; // r8
  signed __int64 v62; // rtt
  __int64 result; // rax
  __int64 *v64; // rdx
  unsigned __int64 v65; // rax
  __int64 v66; // r9
  unsigned __int64 v67; // rsi
  NTSTATUS v68; // eax
  NTSTATUS Status; // ecx
  volatile LONG *v70; // rcx
  int v71; // eax
  __int16 v72; // ax
  unsigned __int64 v73; // r15
  unsigned __int64 v74; // r14
  struct _MDL *v75; // rsi
  _QWORD *v76; // r15
  int v77; // eax
  ULONG_PTR v78; // rax
  __int64 inserted; // rax
  _QWORD *Pool; // rax
  _QWORD *v81; // rdx
  char *v82; // rcx
  _QWORD *v83; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v87; // eax
  unsigned __int8 v88; // cl
  struct _KPRCB *v89; // r10
  _DWORD *v90; // r9
  int v91; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v93; // rax
  volatile signed __int64 *v94; // r10
  unsigned __int64 v95; // r8
  struct _KPRCB *v96; // r9
  __int64 v97; // rdx
  signed __int32 v98; // eax
  int v99; // eax
  __int64 v100; // rax
  int v101; // eax
  unsigned __int8 v102; // cl
  struct _KPRCB *v103; // r9
  _DWORD *v104; // r8
  int v105; // eax
  unsigned __int8 v106[4]; // [rsp+40h] [rbp-218h] BYREF
  int v107; // [rsp+44h] [rbp-214h]
  unsigned __int64 v108; // [rsp+48h] [rbp-210h]
  unsigned __int64 v109; // [rsp+50h] [rbp-208h]
  unsigned __int64 v110; // [rsp+58h] [rbp-200h]
  struct _IO_STATUS_BLOCK *v111; // [rsp+60h] [rbp-1F8h]
  __int64 v112; // [rsp+68h] [rbp-1F0h]
  int v113; // [rsp+70h] [rbp-1E8h]
  PVOID P; // [rsp+78h] [rbp-1E0h]
  __int64 v115; // [rsp+80h] [rbp-1D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-1D0h]
  int IoPriorityThread; // [rsp+90h] [rbp-1C8h]
  __int64 v118; // [rsp+98h] [rbp-1C0h]
  unsigned int v119; // [rsp+A0h] [rbp-1B8h]
  _QWORD *v120; // [rsp+A8h] [rbp-1B0h]
  __int64 v121; // [rsp+B0h] [rbp-1A8h]
  PVOID v122; // [rsp+B8h] [rbp-1A0h]
  __int64 v123; // [rsp+C0h] [rbp-198h]
  PVOID v124; // [rsp+C8h] [rbp-190h]
  int v125; // [rsp+D0h] [rbp-188h] BYREF
  __int64 v126; // [rsp+D8h] [rbp-180h]
  struct _KEVENT Object; // [rsp+E0h] [rbp-178h] BYREF
  void *v128; // [rsp+F8h] [rbp-160h]
  unsigned __int64 v129; // [rsp+100h] [rbp-158h]
  _QWORD *v130; // [rsp+108h] [rbp-150h]
  ULONG_PTR v131; // [rsp+110h] [rbp-148h]
  ULONG_PTR BugCheckParameter1; // [rsp+118h] [rbp-140h]
  unsigned __int64 v133; // [rsp+120h] [rbp-138h]
  PEX_SPIN_LOCK SpinLock; // [rsp+128h] [rbp-130h]
  unsigned __int64 v135; // [rsp+130h] [rbp-128h] BYREF
  struct _KTHREAD *v136; // [rsp+138h] [rbp-120h]
  __int64 v137; // [rsp+140h] [rbp-118h]
  _BYTE v138[192]; // [rsp+150h] [rbp-108h] BYREF

  v8 = (int *)&a7->0;
  v131 = (ULONG_PTR)a3;
  v137 = a2;
  BugCheckParameter1 = a1;
  v123 = a5;
  v111 = a7;
  v121 = a4;
  v106[0] = 0;
  memset(v138, 0, 0xB8uLL);
  v10 = a6;
  v11 = 0;
  if ( (a6 & 2) == 0 )
    v11 = 2;
  if ( a5 )
  {
    v10 = a6 | 4;
    a6 |= 4u;
  }
  v12 = *a3;
  v13 = (struct _MDL *)v138;
  v122 = 0LL;
  v120 = 0LL;
  P = v138;
  v14 = (*(_BYTE *)(v12 + 62) & 0xC) == 0;
  v115 = v12;
  if ( !v14 )
  {
    v10 &= ~4u;
    a6 = v10;
  }
  if ( (v10 & 4) == 0 )
    goto LABEL_8;
  Pool = MiAllocatePool(64, 0xA00uLL, 0x61466D4Du);
  v122 = Pool;
  v81 = Pool;
  if ( a5 )
  {
    *(_QWORD *)(a5 + 40) = Pool;
    if ( !Pool )
      return 3221225626LL;
  }
  else if ( !Pool )
  {
    goto LABEL_8;
  }
  *((_WORD *)Pool + 24) = 0;
  v82 = (char *)(Pool + 6);
  *((_BYTE *)Pool + 50) = 6;
  v13 = (struct _MDL *)(Pool + 10);
  v120 = Pool;
  *((_DWORD *)Pool + 13) = 0;
  v83 = Pool + 7;
  v83[1] = v83;
  *v83 = v83;
  *(_DWORD *)v81 = 0;
  v81[2] = 0LL;
  v81[5] = a5;
  v81[4] = v12;
  v81[9] = v13;
  v81[264] = v82;
  *((_WORD *)v81 + 156) = 0;
  *((_BYTE *)v81 + 314) = 6;
  *((_DWORD *)v81 + 79) = 0;
  v81[41] = v81 + 40;
  v81[40] = v81 + 40;
  v81[42] = v81 + 43;
  *((_DWORD *)v81 + 66) = 0;
  v81[35] = 0LL;
  v81[38] = a5;
  v81[37] = v12;
  v81[265] = v81 + 39;
  *((_WORD *)v81 + 288) = 0;
  *((_BYTE *)v81 + 578) = 6;
  *((_DWORD *)v81 + 145) = 0;
  v81[74] = v81 + 73;
  v81[73] = v81 + 73;
  v81[75] = v81 + 76;
  *((_DWORD *)v81 + 132) = 0;
  v81[68] = 0LL;
  v81[71] = a5;
  v81[70] = v12;
  v81[266] = v81 + 72;
  *((_WORD *)v81 + 420) = 0;
  *((_BYTE *)v81 + 842) = 6;
  *((_DWORD *)v81 + 211) = 0;
  v81[107] = v81 + 106;
  v81[106] = v81 + 106;
  v81[108] = v81 + 109;
  *((_DWORD *)v81 + 198) = 0;
  v81[101] = 0LL;
  v81[104] = a5;
  v81[103] = v12;
  v81[267] = v81 + 105;
  *((_WORD *)v81 + 552) = 0;
  *((_BYTE *)v81 + 1106) = 6;
  *((_DWORD *)v81 + 277) = 0;
  v81[140] = v81 + 139;
  v81[139] = v81 + 139;
  v81[141] = v81 + 142;
  *((_DWORD *)v81 + 264) = 0;
  v81[134] = 0LL;
  v81[137] = a5;
  v81[136] = v12;
  v81[268] = v81 + 138;
  *((_WORD *)v81 + 684) = 0;
  *((_BYTE *)v81 + 1370) = 6;
  *((_DWORD *)v81 + 343) = 0;
  v81[173] = v81 + 172;
  v81[172] = v81 + 172;
  *((_DWORD *)v81 + 330) = 0;
  P = v13;
  v81[167] = 0LL;
  v81[174] = v81 + 175;
  v81[170] = a5;
  v81[169] = v12;
  v81[269] = v81 + 171;
  *((_WORD *)v81 + 816) = 0;
  *((_BYTE *)v81 + 1634) = 6;
  *((_DWORD *)v81 + 409) = 0;
  v81[206] = v81 + 205;
  v81[205] = v81 + 205;
  v81[207] = v81 + 208;
  *((_DWORD *)v81 + 396) = 0;
  v81[200] = 0LL;
  v81[203] = a5;
  v81[202] = v12;
  v81[270] = v81 + 204;
  *((_WORD *)v81 + 948) = 0;
  *((_BYTE *)v81 + 1898) = 6;
  *((_DWORD *)v81 + 475) = 0;
  v81[239] = v81 + 238;
  v81[238] = v81 + 238;
  v81[240] = v81 + 241;
  *((_DWORD *)v81 + 462) = 0;
  v81[233] = 0LL;
  v81[236] = a5;
  v81[235] = v12;
  v81[271] = v81 + 237;
LABEL_8:
  v133 = a2 + 8;
  v15 = (void *)MiReferenceControlAreaFileWithTag(v12, 1666411853LL);
  CurrentThread = KeGetCurrentThread();
  v124 = v15;
  v136 = CurrentThread;
  IoPriorityThread = PsGetIoPriorityThread((__int64)CurrentThread);
  if ( IoPriorityThread < 2
    && (CurrentThread->MiscFlags & 0x400) == 0
    && CurrentThread->PreviousMode != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v10 < 0 )
    v11 |= 0x10u;
  v17 = BugCheckParameter1;
  a7->Status = 0;
  v18 = v11 | 0x20;
  a7->Information = 0LL;
  v13->Next = 0LL;
  v13->MdlFlags = 0;
  v13->StartVa = 0LL;
  *(_QWORD *)&v13->ByteCount = 0LL;
  --CurrentThread->KernelApcDisable;
  v113 = 0;
  v112 = 0LL;
  BugCheckParameter2 = v131;
  v107 = 16;
  v109 = v17;
  SpinLock = (PEX_SPIN_LOCK)(v12 + 72);
  v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
  if ( !*(_QWORD *)(v12 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v87 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
        v14 = (v87 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v87;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v19);
    if ( v122 )
    {
      ExFreePoolWithTag(v122, 0);
      if ( v123 )
        *(_QWORD *)(v123 + 40) = 0LL;
    }
    ObFastDereferenceObjectDeferDelete(v12 + 64, v124, 1666411853LL);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    result = 0LL;
    a7->Status = 0;
    a7->Information = 0LL;
    return result;
  }
  v20 = *(_QWORD *)(v12 + 120);
  v126 = 8 * v20;
  if ( 8 * v20 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v20 + 32)) <= 1 )
    __fastfail(0xEu);
  v21 = BugCheckParameter2;
  v118 = 0LL;
  v22 = v121;
  while ( 1 )
  {
LABEL_14:
    v23 = (unsigned __int64 *)(v21 + 8);
    v130 = (_QWORD *)(v21 + 8);
    if ( v21 == v22 )
    {
      v24 = v133;
      v130 = (_QWORD *)(v21 + 8);
    }
    else
    {
      v24 = *v23 + 8LL * (*(_DWORD *)(v21 + 44) - (*(_DWORD *)(v21 + 52) & 0x3FFFFFFFu));
      v22 = v121;
    }
    v110 = v24;
    if ( !v17 )
    {
      v17 = *v23;
      v109 = *v23;
    }
    if ( *(_DWORD *)(v21 + 104) && *v23 )
      break;
    v56 = ((__int64)(v24 - v17) >> 3 << 12) + v112;
    v78 = *(_QWORD *)(v21 + 16);
    v112 = v56;
    if ( !v78 )
    {
      if ( v24 == *v23 + 8LL * (*(_DWORD *)(v21 + 44) - (*(_DWORD *)(v21 + 52) & 0x3FFFFFFFu)) )
      {
        v101 = MiEndingOffset(v21) & 0xFFF;
        if ( v101 )
          v56 -= (unsigned int)(4096 - v101);
      }
      goto LABEL_96;
    }
    if ( v22 == v21 )
      goto LABEL_96;
    v17 = *(_QWORD *)(v78 + 8);
    v21 = v78;
    v109 = v17;
    BugCheckParameter2 = v78;
  }
  MiIncrementSubsectionViewCount(v21);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(BugCheckParameter2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( KiIrqlFlags )
  {
    v88 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v88 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v88 >= 2u )
    {
      v89 = KeGetCurrentPrcb();
      v90 = v89->SchedulerAssist;
      v91 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v14 = (v91 & v90[5]) == 0;
      v90[5] &= v91;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v89);
    }
  }
  __writecr8((unsigned __int8)v19);
  v129 = v17;
  v25 = 0LL;
  v26 = 17;
  v108 = 0LL;
  v106[0] = 17;
  if ( v17 >= v24 )
    goto LABEL_91;
  while ( 2 )
  {
    if ( (v17 & 0xFFF) != 0 )
    {
      if ( v26 != 17 )
        goto LABEL_26;
    }
    else if ( v26 != 17 )
    {
      MiUnlockProtoPoolPage(v25, v26);
    }
    v25 = MiCheckProtoPtePageState(v17, v106);
    v108 = v25;
    if ( !v25 )
    {
      p_ByteCount = &v13->ByteCount;
      v17 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v14 = v13->ByteCount == 0;
      v109 = v17;
      if ( !v14 )
      {
        v51 = v110;
LABEL_112:
        v26 = v106[0];
        if ( v106[0] != 17 )
        {
          MiUnlockProtoPoolPage(v25, v106[0]);
          goto LABEL_114;
        }
        goto LABEL_115;
      }
      v26 = v106[0];
      goto LABEL_72;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_26:
        v27 = *(_QWORD *)v17;
        v28 = *(_QWORD *)v17;
        if ( (*(_QWORD *)v17 & 1) != 0 )
          goto LABEL_34;
        if ( (*(_QWORD *)v17 & 0xC00LL) != 0x800 )
          goto LABEL_67;
        if ( !v27 || !qword_140C657C0 || (v27 & qword_140C657C0) != 0 )
        {
          v28 = *(_QWORD *)v17;
          if ( qword_140C657C0 && (v27 & 0x10) == 0 )
            v28 = v27 & ~qword_140C657C0;
LABEL_34:
          v29 = (v28 >> 12) & 0xFFFFFFFFFFLL;
          if ( v29 <= qword_140C65820 )
          {
            if ( _bittest64((const signed __int64 *)(48 * v29 - 0x21FFFFFFFFD8LL), 0x36u) )
              break;
          }
        }
      }
      v30 = 48 * v29 - 0x220000000000LL;
      v125 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v125);
        while ( *(__int64 *)(v30 + 24) < 0 );
      }
      if ( *(_QWORD *)v17 == v27 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) != 0 )
      v30 = MiLockSpecialPurposeMemoryCachedPage(v30, 0LL);
    if ( !v30 )
    {
LABEL_67:
      ByteCount = v13->ByteCount;
      p_ByteCount = &v13->ByteCount;
      if ( ByteCount )
LABEL_75:
        v18 |= 4u;
LABEL_68:
      v51 = v110;
      v17 += 8LL;
      v109 = v17;
      if ( (v18 & 4) == 0 && (v17 != v110 || !ByteCount) )
      {
        v26 = v106[0];
        v12 = v115;
        goto LABEL_71;
      }
      goto LABEL_111;
    }
    v31 = *(_QWORD *)v17;
    if ( v17 >= 0xFFFFF6FB7DBED000uLL
      && v17 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v93 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
        if ( (v93 & 0x20) != 0 )
          LOBYTE(v31) = v31 | 0x20;
        if ( (v93 & 0x42) != 0 )
          LOBYTE(v31) = v31 | 0x42;
      }
    }
    v32 = *(_BYTE *)(v30 + 34);
    p_ByteCount = &v13->ByteCount;
    if ( (v32 & 8) != 0 )
    {
      if ( !*p_ByteCount )
      {
        if ( (v18 & 2) != 0 )
        {
          MiWaitForPageWriteCompletion(v30, v12, v108, v106[0]);
          v26 = 17;
          v106[0] = 17;
          goto LABEL_71;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v17 = v110;
        v18 |= 8u;
        v26 = v106[0];
        goto LABEL_235;
      }
      goto LABEL_146;
    }
    if ( (v32 & 0x10) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ByteCount = *p_ByteCount;
      if ( *p_ByteCount )
        goto LABEL_75;
      goto LABEL_68;
    }
    v34 = *p_ByteCount;
    if ( (v32 & 0x20) != 0 )
    {
      if ( !v34 )
      {
        MiFlushWaitForReadInProgress(v30, v108, v106[0]);
        v26 = 17;
        v106[0] = 17;
        goto LABEL_71;
      }
LABEL_146:
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v51 = v110;
LABEL_111:
      v25 = v108;
      goto LABEL_112;
    }
    v35 = 0;
    if ( !v34 )
    {
      v35 = 2;
      ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
      v70 = SpinLock;
      ++*(_DWORD *)(v115 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel(v70);
      v71 = v107;
      v13->Next = 0LL;
      v13->MdlFlags = 0;
      v13->StartVa = 0LL;
      *p_ByteCount = 0;
      v13->ByteOffset = v71;
    }
    v36 = v31 & 1;
    v37 = *(void **)(qword_140C67048 + 8 * ((*(_QWORD *)(v30 + 40) >> 43) & 0x3FFLL));
    v38 = *(_DWORD *)(v30 + 16);
    v128 = v37;
    v39 = (v38 & 0x400) != 0LL;
    v40 = v35 & 2;
    v41 = 4;
    if ( !v36 )
      v40 = v35;
    if ( !v40 )
      v41 = 8;
    v119 = v41;
    if ( v37 == &MiSystemPartition )
    {
      v42 = KeGetCurrentPrcb();
      CachedResidentAvailable = v42->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v44 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v42->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v44 == CachedResidentAvailable )
          {
            v45 = 1;
            goto LABEL_57;
          }
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v45 = MiChargePartitionResidentAvailable(v37, 1LL, (unsigned int)-(v40 != 0));
    if ( !v45 )
      goto LABEL_213;
    v41 = v119;
    v37 = v128;
LABEL_57:
    v46 = v39;
    if ( !v40 )
      v46 = v39;
    if ( v46 && !(unsigned int)MiChargeCommit(v37, 1LL, v41) )
    {
      v94 = (volatile signed __int64 *)v128;
      v95 = 1LL;
      if ( v128 != &MiSystemPartition )
        goto LABEL_212;
      v96 = KeGetCurrentPrcb();
      v97 = (int)v96->CachedResidentAvailable;
      if ( (_DWORD)v97 == -1 )
        goto LABEL_212;
      if ( (unsigned __int64)(v97 + 1) <= 0x100 )
      {
        do
        {
          v98 = _InterlockedCompareExchange((volatile signed __int32 *)&v96->CachedResidentAvailable, v97 + 1, v97);
          v14 = (_DWORD)v97 == v98;
          LODWORD(v97) = v98;
          if ( v14 )
            goto LABEL_213;
        }
        while ( v98 != -1 && (unsigned __int64)(v98 + 1LL) <= 0x100 );
      }
      if ( (int)v97 > 192
        && (_DWORD)v97 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v96->CachedResidentAvailable,
                            192,
                            v97) )
      {
        v95 = (int)v97 - 192 + 1LL;
      }
      if ( v95 )
LABEL_212:
        _InterlockedExchangeAdd64(v94 + 2160, v95);
LABEL_213:
      _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v108, v106[0]);
      v17 = v109;
      v13 = (struct _MDL *)P;
      v51 = v110;
      goto LABEL_114;
    }
    if ( !v36 )
    {
      MiUnlinkPageFromListEx(v30, 0LL);
      *(_QWORD *)(v30 + 24) &= 0xC000000000000000uLL;
    }
    v47 = *(_BYTE *)(v30 + 34);
    ++*(_WORD *)(v30 + 32);
    *(_BYTE *)(v30 + 34) = v47 | 8;
    *(_BYTE *)(v30 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(v30 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v30) & 0x10) != 0 )
      MiClearPfnImageVerified(v30);
    _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v13 = (struct _MDL *)P;
    *((_QWORD *)P + *p_ByteCount + 6) = 0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4);
    ByteOffset = v13->ByteOffset;
    v49 = *p_ByteCount + 1;
    *p_ByteCount = v49;
    if ( v45 != 3 || v49 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    {
      if ( v49 == ByteOffset )
      {
        MiUnlockProtoPoolPage(v108, v106[0]);
        v26 = 17;
        v73 = v109;
        v106[0] = 17;
        if ( v107 == 1 || (v74 = v109 + 8, v109 + 8 >= v110) )
        {
          v51 = v110;
          v17 = v109 + 8;
          v109 += 8LL;
          goto LABEL_115;
        }
        v75 = (struct _MDL *)MiExpandFlushMdl(
                               (unsigned int *)v13,
                               (unsigned int)((__int64)(v110 - v109) >> 3) + v107 - 1);
        if ( !v75 )
        {
          v99 = v13->ByteOffset;
          v17 = v73 + 8;
          v109 = v74;
          v51 = v110;
          v107 = v99;
          goto LABEL_115;
        }
        v76 = v120;
        if ( v13 != (struct _MDL *)v138 && (!v120 || v13 != (struct _MDL *)(v120 + 10)) )
          ExFreePoolWithTag(v13, 0);
        P = v75;
        v13 = v75;
        if ( v76 )
          v76[9] = v75;
        v77 = v75->ByteOffset;
        v17 = v74;
        v109 = v74;
        v12 = v115;
        v107 = v77;
        goto LABEL_71;
      }
      v17 = v109;
      ByteCount = v49;
      goto LABEL_68;
    }
    MiUnlockProtoPoolPage(v108, v106[0]);
    v51 = v110;
    v17 = v109 + 8;
    v109 += 8LL;
LABEL_114:
    v26 = 17;
    v106[0] = 17;
LABEL_115:
    v18 &= ~4u;
    v64 = (__int64 *)BugCheckParameter2;
    *p_ByteCount <<= 12;
    v65 = MiReadyFlushMdlToWrite((__int64)v13, v64, a6);
    if ( v120 )
    {
      v100 = MiIssueAsynchronousFlush(
               (_DWORD)v124,
               (_DWORD)v120,
               (_DWORD)v122,
               v123,
               v65,
               (a6 >> 2) & 4,
               IoPriorityThread,
               v126);
      v120 = (_QWORD *)v100;
      if ( v100 )
      {
        v13 = *(struct _MDL **)(v100 + 72);
        v12 = v115;
        v107 = 16;
        goto LABEL_139;
      }
      v17 = v51;
      v18 = v18 & 0xFFFFFFDE | 1;
LABEL_235:
      v12 = v115;
      break;
    }
    v12 = v115;
    v67 = *(_QWORD *)(48 * (__int64)v13[1].Next - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (*(_BYTE *)(v115 + 62) & 0xC) != 0 )
    {
      MiFlushFileOnlyMdl(6 * (__int64)v13[1].Next, v13, v65, v66, BugCheckParameter2, v111);
    }
    else
    {
      Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
      Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
      v135 = v65;
      *(_QWORD *)&Object.Header.Lock = 393216LL;
      v68 = IoSynchronousPageWriteEx((struct _FILE_OBJECT *)v124, v13, &v135, &Object, (a6 >> 2) & 4, v126, v111);
      if ( v68 < 0 )
        v111->Status = v68;
      else
        KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
    }
    MiUnlockFlushMdl(v13, v12, (int *)&v111->0);
    Status = v111->Status;
    if ( v111->Status < 0 )
    {
      v109 = v67;
      v17 = v67;
      if ( Status == -1073741740 && (v18 & 0x10) != 0 )
      {
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
      }
      else
      {
        v52 = *p_ByteCount;
        if ( !MiIsRetryIoStatus(Status, *p_ByteCount) )
        {
LABEL_83:
          v53 = 0;
          goto LABEL_84;
        }
        if ( (--v113 & 0x1F) != 0 )
        {
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
        }
        else
        {
          if ( v107 == 1 || v52 <= 0x1000 )
            goto LABEL_83;
          v107 = 1;
        }
      }
      v111->Status = 0;
      v53 = 32;
LABEL_84:
      v18 = v53 | v18 & 0xFFFFFFDF;
      if ( v13 != (struct _MDL *)v138 )
      {
        if ( v107 != 1 )
          v107 = 16;
        ExFreePoolWithTag(v13, 0);
        v13 = (struct _MDL *)v138;
        P = v138;
      }
      v13->ByteCount = 0;
      if ( (v18 & 0x20) != 0 )
        goto LABEL_71;
      break;
    }
    v113 = 0;
    if ( v13 == (struct _MDL *)v138 )
      goto LABEL_121;
    v107 = 16;
    ExFreePoolWithTag(v13, 0);
    v13 = (struct _MDL *)v138;
LABEL_139:
    P = v13;
LABEL_121:
    v13->ByteCount = 0;
LABEL_71:
    v25 = v108;
LABEL_72:
    if ( v17 < v110 )
      continue;
    break;
  }
  if ( v26 != 17 )
  {
    MiUnlockProtoPoolPage(v108, v26);
    v106[0] = 17;
  }
LABEL_91:
  v112 += (__int64)(v17 - v129) >> 3 << 12;
  v54 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v12 + 72));
  v55 = BugCheckParameter2;
  LOBYTE(v19) = v54;
  if ( *(_QWORD *)(BugCheckParameter2 + 16)
    || v17 != *v130
            + 8LL * (*(_DWORD *)(BugCheckParameter2 + 44) - (*(_DWORD *)(BugCheckParameter2 + 52) & 0x3FFFFFFFu)) )
  {
    v56 = v112;
  }
  else
  {
    v72 = MiEndingOffset(BugCheckParameter2);
    v56 = v112;
    if ( (v72 & 0xFFF) != 0 )
    {
      v56 = v112 - (4096 - (v72 & 0xFFFu));
      v112 = v56;
    }
  }
  v57 = MiDecrementSubsectionViewCount(v55);
  v118 += v57;
  if ( !*(_QWORD *)(v55 + 96) && (*(_BYTE *)(v55 + 34) & 1) == 0 )
  {
    inserted = MiInsertUnusedSubsection(v55);
    v118 += inserted;
  }
  v8 = (int *)&v111->0;
  if ( (v18 & 0x28) == 0x20 )
  {
    v22 = v121;
    if ( v55 != v121 )
    {
      v21 = *(_QWORD *)(v55 + 16);
      BugCheckParameter2 = v21;
      if ( v21 )
      {
        v17 = *(_QWORD *)(v21 + 8);
        v109 = v17;
        goto LABEL_14;
      }
    }
  }
LABEL_96:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  if ( KiIrqlFlags )
  {
    v102 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v102 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v102 >= 2u )
    {
      v103 = KeGetCurrentPrcb();
      v104 = v103->SchedulerAssist;
      v105 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v14 = (v105 & v104[5]) == 0;
      v104[5] &= v105;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v103);
    }
  }
  __writecr8((unsigned __int8)v19);
  v58 = v122;
  v59 = v123;
  if ( v122 && !v123 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v122) < 0 )
      LOBYTE(v18) = v18 | 1;
    ExFreePoolWithTag(v58, 0);
  }
  _m_prefetchw((const void *)(v12 + 64));
  v60 = *(_QWORD *)(v12 + 64);
  v61 = (unsigned __int64)v124;
  if ( ((unsigned __int64)v124 ^ v60) >= 0xF )
  {
LABEL_164:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v61, 0x63536D4Du);
  }
  else
  {
    while ( 1 )
    {
      v62 = v60;
      v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 64), v60 + 1, v60);
      if ( v62 == v60 )
        break;
      if ( (v61 ^ v60) >= 0xF )
        goto LABEL_164;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo(v61 - 48);
  }
  if ( v118 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(v12 + 60) & 0x3FF)), 1LL, v118);
  if ( v126 )
    IoDiskIoAttributionDereference(v126);
  KeLeaveCriticalRegionThread((__int64)v136);
  if ( (v18 & 1) != 0 )
    return MiFlushSectionInternal(BugCheckParameter1, v137, v131, v121, v59, a6 & 0xFFFFFFFB, (__int64)v8);
  if ( (v18 & 8) != 0 )
    *v8 = -1073740749;
  result = (unsigned int)*v8;
  *((_QWORD *)v8 + 1) = v56;
  return result;
}
