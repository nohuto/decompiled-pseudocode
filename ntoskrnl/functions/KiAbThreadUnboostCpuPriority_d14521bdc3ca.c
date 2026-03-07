char __fastcall KiAbThreadUnboostCpuPriority(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v5; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  char v8; // al
  char v9; // al
  unsigned int v10; // edx
  char v11; // dl
  char v12; // cl
  int v13; // edi
  __int64 CurrentPrcb; // rsi
  int Processor; // eax
  ULONG_PTR v16; // rbp
  bool v17; // zf
  char v18; // di
  __int64 (__fastcall *v19)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  struct _KPRCB *v27; // rcx
  signed __int32 *v28; // r8
  __int64 v29; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  struct _KPRCB *v32; // rdi
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  unsigned __int8 v36; // al
  struct _KPRCB *v37; // r9
  _DWORD *v38; // r8
  int v39; // eax
  __int16 v40; // bp
  unsigned int *i; // rbx
  unsigned __int64 v42; // rdi
  bool v43; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v45)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v46)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v47)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v49[2]; // [rsp+40h] [rbp-338h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-330h] BYREF
  int v51; // [rsp+4Ch] [rbp-32Ch]
  int v52; // [rsp+50h] [rbp-328h]
  __int128 v53; // [rsp+58h] [rbp-320h] BYREF
  int v54; // [rsp+68h] [rbp-310h]
  int v55; // [rsp+70h] [rbp-308h] BYREF
  int v56; // [rsp+74h] [rbp-304h] BYREF
  _QWORD *v57; // [rsp+78h] [rbp-300h] BYREF
  _QWORD *v58; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 *v59; // [rsp+88h] [rbp-2F0h] BYREF
  unsigned __int64 v60; // [rsp+90h] [rbp-2E8h] BYREF
  _DWORD v61[2]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v62[2]; // [rsp+A0h] [rbp-2D8h] BYREF
  _DWORD v63[2]; // [rsp+A8h] [rbp-2D0h] BYREF
  _DWORD v64[2]; // [rsp+B0h] [rbp-2C8h] BYREF
  _DWORD v65[2]; // [rsp+B8h] [rbp-2C0h] BYREF
  _DWORD v66[2]; // [rsp+C0h] [rbp-2B8h] BYREF
  __int128 v67; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-2A0h]
  int v69; // [rsp+E0h] [rbp-298h] BYREF
  __int128 v70; // [rsp+E4h] [rbp-294h]
  __int128 v71; // [rsp+F8h] [rbp-280h] BYREF
  unsigned __int16 v72[136]; // [rsp+110h] [rbp-268h] BYREF
  _QWORD v73[34]; // [rsp+220h] [rbp-158h] BYREF
  int v74; // [rsp+370h] [rbp-8h]

  v52 = 0;
  v58 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (unsigned int)(unsigned __int8)v58 + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)((_BYTE)v58 + 1)) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << ((unsigned __int8)v58 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v7;
  }
  while ( 1 )
  {
    v17 = !_BitScanForward((unsigned int *)&v13, a2);
    v52 = v13;
    if ( v17 )
      break;
    v18 = v5 + v13;
    v55 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v55);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v8 = *(_BYTE *)(v18 + BugCheckParameter1 + 824);
    if ( !v8 )
      KeBugCheckEx(0x157u, BugCheckParameter1, v18, 2uLL, 0LL);
    v9 = v8 - v5;
    *(_BYTE *)(v18 + BugCheckParameter1 + 824) = v9;
    if ( !v9 )
    {
      v10 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v18);
      *(_DWORD *)(BugCheckParameter1 + 856) = v10;
      if ( v10 < (_DWORD)v5 << v18 )
      {
        v11 = *(_BYTE *)(BugCheckParameter1 + 195);
        if ( v11 <= 31 )
        {
          v12 = *(_BYTE *)(BugCheckParameter1 + 563)
              + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
              + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
          if ( v12 < v11 )
            KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v58, v12);
        }
      }
    }
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    a2 &= a2 - 1;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  LOBYTE(Processor) = KiReadyDeferredReadyList(CurrentPrcb, &v58);
  v60 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v16 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v20 = *(unsigned __int8 *)(v16 + 792) | *(unsigned __int8 *)(v16 + 870);
      v57 = 0LL;
      v59 = 0LL;
      if ( v20 != 63 )
      {
        v32 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v16, v5, v5, v5, (__int64)&v57, (__int64)&v59, (__int64)&v32->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v59, (__int64)&v32->AbSelfIoBoostsList, (__int64)&v57);
        KiReadyDeferredReadyList((__int64)v32, &v57);
      }
      v56 = 0;
      v60 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v56);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v21 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v5;
      v22 = __rdtsc();
      v23 = v22 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v16 + 72) += v23;
      v24 = *(unsigned int *)(v16 + 80);
      v25 = v23 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v22;
      v26 = (v25 >> 16) + v24;
      if ( v26 > 0xFFFFFFFF )
        LODWORD(v26) = -1;
      v17 = (*(_BYTE *)(v16 + 2) & 0xBE) == 0;
      *(_DWORD *)(v16 + 80) = v26;
      v5 = 1LL;
      if ( !v17 )
      {
        LOBYTE(v22) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v16, v23, v22);
      }
      v27 = KeGetCurrentPrcb();
      v28 = (signed __int32 *)v27->SchedulerAssist;
      if ( v28 )
      {
        _m_prefetchw(v28);
        v30 = *v28;
        do
        {
          v31 = v30;
          v30 = _InterlockedCompareExchange(v28, v30 & 0xFFDFFFFF, v30);
        }
        while ( v31 != v30 );
        if ( (v30 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v21;
      if ( *(_BYTE *)(v21 + 388) == 1 )
        *(_DWORD *)(v21 + 132) = *(_DWORD *)(v21 + 132) - *(_DWORD *)(v21 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v21 + 388) = 2;
      *(_BYTE *)(v16 + 643) = 32;
      *(_BYTE *)(v16 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v60, v16);
      LOBYTE(v29) = CurrentIrql;
      v17 = (unsigned __int8)KiSwapContext(v16, v21, v29) == 0;
    }
    else
    {
      v17 = (*(_DWORD *)(v16 + 116) & 0x40) == 0;
    }
    if ( !v17 )
    {
      if ( KiIrqlFlags )
      {
        v33 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && (unsigned __int8)(v33 - 2) <= 0xDu )
        {
          v34 = KeGetCurrentPrcb();
          v35 = v34->SchedulerAssist;
          v17 = (v35[5] & 0xFFFF0003) == 0;
          v35[5] &= 0xFFFF0003;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v34);
        }
      }
      __writecr8(v5);
      *(_DWORD *)(v16 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v36 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v5) != 0 && (unsigned __int8)(v36 - 2) <= 0xDu )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->SchedulerAssist;
        v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
        v17 = (v39 & v38[5]) == 0;
        v38[5] &= v39;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v37);
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
  memset(v72, 0, 0x108uLL);
  v70 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v69 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v51 = 1;
    v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v19 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    _disable();
    LOBYTE(Processor) = v19(*(_QWORD *)(HalpInterruptController + 16), v49, &v69, 47LL, &ProcNumber);
    if ( (v74 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v72, 0x20u);
  KeAddProcessorAffinityEx(v72, KeGetPcr()->Prcb.Number);
  v49[0] = 0;
  ProcNumber = 0;
  v68 = 0LL;
  v71 = 0LL;
  v67 = 0LL;
  memset(v73, 0, 0x108uLL);
  v54 = 0;
  v53 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(Processor) = qword_140C621C8(v72, 47LL);
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v73, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v72, v73, WORD1(v73[0]));
  v40 = v74;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v72, (__int64)(i + 2), (char *)&v71) )
      {
        v42 = v71;
        LODWORD(v53) = 6;
        v43 = (_QWORD)v71 == 0LL;
        *((_QWORD *)&v53 + 1) = *i;
        ProcNumber.Group = WORD4(v71);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v43 )
            break;
          if ( (v42 & 1) != 0 )
          {
            v49[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v53) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 12);
            j = ProcNumber.Number;
          }
          v42 >>= 1;
          v43 = v42 == 0;
        }
        v61[0] = -1;
        v61[1] = 1;
        v62[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v62[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v45(*(_QWORD *)(HalpInterruptController + 16), v62, &v53, 47LL, v61);
        if ( (v40 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
    }
    goto LABEL_89;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_89;
  LODWORD(v53) = 5;
  DWORD2(v53) = 0;
  KeInitializeEnumerationContext((__int64)&v67, (__int64)v72);
  while ( !(unsigned int)KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v67) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0]) == 5 )
      DWORD2(v53) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
  }
  if ( !DWORD2(v53) )
    goto LABEL_89;
  v63[0] = -1;
  v63[1] = 1;
  v64[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v64[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v46 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  Processor = v46(*(_QWORD *)(HalpInterruptController + 16), v64, &v53, 47LL, v63);
  if ( (v40 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_89:
    *((_QWORD *)&v67 + 1) = v73[1];
    *(_QWORD *)&v67 = v73;
    v49[0] = 0;
    LOWORD(v68) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v49, (unsigned __int16 **)&v67);
      if ( Processor )
        break;
      LODWORD(v53) = 4;
      v65[0] = -1;
      v65[1] = 1;
      DWORD2(v53) = *(_DWORD *)(HalpInterruptTargets + 24LL * v49[0] + 8);
      v66[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v66[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v47 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v47(*(_QWORD *)(HalpInterruptController + 16), v66, &v53, 47LL, v65);
      if ( (v40 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
