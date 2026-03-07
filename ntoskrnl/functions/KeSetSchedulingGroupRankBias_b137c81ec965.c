char __fastcall KeSetSchedulingGroupRankBias(__int64 a1, unsigned __int8 a2)
{
  int v2; // r13d
  unsigned __int8 CurrentIrql; // r14
  int v5; // ebx
  __int64 CurrentPrcb; // rsi
  unsigned int v7; // ebp
  int v8; // r12d
  __int64 v9; // rdi
  __int64 v10; // rbx
  char v11; // cl
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  int Processor; // eax
  ULONG_PTR v15; // rbp
  bool v16; // zf
  unsigned int v17; // eax
  unsigned __int8 v18; // cl
  __int64 (__fastcall *v19)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  int v20; // ecx
  struct _KPRCB *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v29; // rdx
  char v30; // r8
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD **v33; // r9
  __int64 v34; // rax
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  __int64 v39; // r8
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rcx
  _DWORD *v42; // rdx
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  __int16 v47; // bp
  unsigned int *i; // rbx
  unsigned __int8 Number; // al
  unsigned __int64 v50; // rdi
  bool j; // zf
  __int64 (__fastcall *v52)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v53)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v54)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v56[2]; // [rsp+40h] [rbp-338h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v58; // [rsp+4Ch] [rbp-32Ch]
  __int128 v59; // [rsp+50h] [rbp-328h] BYREF
  int v60; // [rsp+60h] [rbp-318h]
  int v61; // [rsp+68h] [rbp-310h] BYREF
  _QWORD *v62; // [rsp+70h] [rbp-308h] BYREF
  __int64 v63; // [rsp+78h] [rbp-300h] BYREF
  _QWORD *v64; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 *v65; // [rsp+88h] [rbp-2F0h] BYREF
  unsigned __int64 v66; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v67[2]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v68[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v69[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v70[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v71[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v72[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  __int128 v73; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v74; // [rsp+D8h] [rbp-2A0h]
  int v75; // [rsp+E0h] [rbp-298h] BYREF
  __int128 v76; // [rsp+E4h] [rbp-294h]
  __int128 v77; // [rsp+F8h] [rbp-280h] BYREF
  unsigned __int16 v78[136]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v79[34]; // [rsp+220h] [rbp-158h] BYREF
  int v80; // [rsp+370h] [rbp-8h]

  v2 = a2;
  v63 = 0LL;
  v64 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (unsigned __int8)v63 + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v29) = 4;
    else
      v29 = (-1LL << ((unsigned __int8)v5 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v29;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v7 = 0;
  if ( KeMaximumProcessors )
  {
    v8 = v5;
    while ( 1 )
    {
      v9 = KiProcessorBlock[v7];
      v10 = 424LL * v7 + a1 + 128;
      if ( v9 )
        KiAcquirePrcbLocksForIsolationUnit(KiProcessorBlock[v7], 0, &v63);
      v11 = *(_BYTE *)(v10 + 112);
      v12 = *(unsigned int *)(v10 + 116);
      if ( (_BYTE)v2 )
        break;
      v17 = *(unsigned __int8 *)(v10 + 112);
      v18 = v11 & 0xF7;
      *(_BYTE *)(v10 + 112) = v18;
      v12 = (unsigned int)v12 - (v8 & (v17 >> 3));
      *(_DWORD *)(v10 + 116) = v12;
      if ( !(_DWORD)v12 )
      {
        if ( !v9 )
          goto LABEL_10;
        if ( (v18 & (unsigned __int8)v8) == 0 )
          goto LABEL_22;
        v31 = 424LL * v7 + a1 + 128;
        do
        {
          v32 = *(_QWORD *)(v31 + 408);
          if ( !v32 )
            break;
          v31 = *(_QWORD *)(v31 + 408);
        }
        while ( !*(_DWORD *)(v32 + 116) );
        v33 = &v64;
        if ( *(_DWORD *)(v31 + 116) )
          v33 = 0LL;
        KiMoveScbThreadsToNewReadylist(v10, v31 & -(__int64)(*(_DWORD *)(v31 + 116) != 0), 0LL, (__int64)v33);
        v34 = *(_QWORD *)(v10 + 392);
        if ( ((unsigned __int8)v8 & *(_BYTE *)(v10 + 400)) != 0 )
        {
          if ( v34 )
          {
            v34 ^= v10 + 392;
            goto LABEL_60;
          }
LABEL_61:
          KiRemoveSchedulingGroupQueue(v9, v10, v8);
        }
        else
        {
LABEL_60:
          if ( !v34 )
            goto LABEL_61;
        }
LABEL_22:
        *(_BYTE *)(v10 + 112) &= ~4u;
LABEL_9:
        KiCheckForEffectivePriorityChange(v9, v12, v10);
        KiReleasePrcbLocksForIsolationUnit(&v63);
        goto LABEL_10;
      }
      if ( (v18 & (unsigned __int8)v8) != 0 )
      {
        v30 = 0;
LABEL_51:
        KiResortScbQueue(v9, v10, v30);
      }
LABEL_8:
      if ( v9 )
        goto LABEL_9;
LABEL_10:
      v7 += v8;
      if ( v7 >= KeMaximumProcessors )
      {
        v5 = 1;
        goto LABEL_12;
      }
    }
    v13 = v11 | 0xC;
    *(_DWORD *)(v10 + 116) = v12 + 1;
    *(_BYTE *)(v10 + 112) = v13;
    if ( (v13 & (unsigned __int8)v8) == 0 )
      goto LABEL_8;
    v30 = v8;
    goto LABEL_51;
  }
LABEL_12:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v2)) & 4;
  LOBYTE(Processor) = KiReadyDeferredReadyList(CurrentPrcb, &v64);
  v66 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v15 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v20 = *(unsigned __int8 *)(v15 + 792) | *(unsigned __int8 *)(v15 + 870);
      v62 = 0LL;
      v65 = 0LL;
      if ( v20 != 63 )
      {
        v21 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v15, 1u, 1, 1, (__int64)&v62, (__int64)&v65, (__int64)&v21->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v65, (__int64)&v21->AbSelfIoBoostsList, (__int64)&v62);
        KiReadyDeferredReadyList((__int64)v21, &v62);
      }
      v61 = 0;
      v66 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v61);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v22 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v23 = __rdtsc();
      v24 = v23 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v15 + 72) += v24;
      v25 = *(unsigned int *)(v15 + 80);
      v26 = v24 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v23;
      v27 = (v26 >> 16) + v25;
      if ( v27 > 0xFFFFFFFF )
        LODWORD(v27) = -1;
      v16 = (*(_BYTE *)(v15 + 2) & 0xBE) == 0;
      *(_DWORD *)(v15 + 80) = v27;
      if ( !v16 )
      {
        LOBYTE(v23) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v15, v24, v23);
      }
      v35 = KeGetCurrentPrcb();
      v36 = (signed __int32 *)v35->SchedulerAssist;
      if ( v36 )
      {
        _m_prefetchw(v36);
        v37 = *v36;
        do
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange(v36, v37 & 0xFFDFFFFF, v37);
        }
        while ( v38 != v37 );
        if ( (v37 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v22;
      if ( *(_BYTE *)(v22 + 388) == 1 )
        *(_DWORD *)(v22 + 132) = *(_DWORD *)(v22 + 132) - *(_DWORD *)(v22 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v22 + 388) = 2;
      *(_BYTE *)(v15 + 643) = 32;
      *(_BYTE *)(v15 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v66, v15);
      LOBYTE(v39) = CurrentIrql;
      v16 = (unsigned __int8)KiSwapContext(v15, v22, v39) == 0;
    }
    else
    {
      v16 = (*(_DWORD *)(v15 + 116) & 0x40) == 0;
    }
    if ( !v16 )
    {
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v40 - 2) <= 0xDu )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v16 = (v42[5] & 0xFFFF0003) == 0;
          v42[5] &= 0xFFFF0003;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v15 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v43 - 2) <= 0xDu )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    LOBYTE(Processor) = CurrentIrql;
    __writecr8(CurrentIrql);
    return Processor;
  }
  if ( !*(_QWORD *)(CurrentPrcb + 16) )
    return Processor;
  LOBYTE(Processor) = *(_BYTE *)(CurrentPrcb + 13242);
  if ( (_BYTE)Processor )
    return Processor;
  if ( *(_BYTE *)(CurrentPrcb + 32) )
  {
    *(_BYTE *)(CurrentPrcb + 6) = v5;
    return Processor;
  }
  memset(v78, 0, 0x108uLL);
  v76 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v75 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v58 = v5;
    v56[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v56[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v19 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    _disable();
    LOBYTE(Processor) = v19(*(_QWORD *)(HalpInterruptController + 16), v56, &v75, 47LL, &ProcNumber);
    if ( (v80 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v78, 0x20u);
  KeAddProcessorAffinityEx(v78, KeGetPcr()->Prcb.Number);
  v56[0] = 0;
  ProcNumber = 0;
  v74 = 0LL;
  v77 = 0LL;
  v73 = 0LL;
  memset(v79, 0, 0x108uLL);
  v60 = 0;
  v59 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(Processor) = qword_140C621C8(v78, 47LL);
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v79, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v78, v79, WORD1(v79[0]));
  v47 = v80;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v78, (__int64)(i + 2), (char *)&v77) )
      {
        LODWORD(v59) = 6;
        *((_QWORD *)&v59 + 1) = *i;
        ProcNumber.Group = WORD4(v77);
        Number = 0;
        v50 = v77;
        for ( j = (_QWORD)v77 == 0LL; ; j = v50 == 0 )
        {
          ProcNumber.Number = Number;
          if ( j )
            break;
          if ( (v50 & 1) != 0 )
          {
            v56[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v59) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v56[0] + 12);
            Number = ProcNumber.Number;
          }
          ++Number;
          v50 >>= 1;
        }
        v67[0] = -1;
        v67[1] = 1;
        v68[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v68[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v52 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v52(*(_QWORD *)(HalpInterruptController + 16), v68, &v59, 47LL, v67);
        if ( (v47 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
    }
    goto LABEL_105;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_105;
  LODWORD(v59) = 5;
  DWORD2(v59) = 0;
  KeInitializeEnumerationContext((__int64)&v73, (__int64)v78);
  while ( !(unsigned int)KeEnumerateNextProcessor(v56, (unsigned __int16 **)&v73) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v56[0]) == 5 )
      DWORD2(v59) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v56[0] + 8);
  }
  if ( !DWORD2(v59) )
    goto LABEL_105;
  v69[0] = -1;
  v69[1] = v5;
  v70[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v70[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v53 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  Processor = v53(*(_QWORD *)(HalpInterruptController + 16), v70, &v59, 47LL, v69);
  if ( (v47 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_105:
    *((_QWORD *)&v73 + 1) = v79[1];
    *(_QWORD *)&v73 = v79;
    v56[0] = 0;
    LOWORD(v74) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v56, (unsigned __int16 **)&v73);
      if ( Processor )
        break;
      LODWORD(v59) = 4;
      v71[0] = -1;
      v71[1] = 1;
      DWORD2(v59) = *(_DWORD *)(HalpInterruptTargets + 24LL * v56[0] + 8);
      v72[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v72[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v54 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v54(*(_QWORD *)(HalpInterruptController + 16), v72, &v59, 47LL, v71);
      if ( (v47 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
