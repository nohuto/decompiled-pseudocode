char __fastcall KeSetUserAffinityThread(__int64 a1, unsigned __int16 *a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  int Processor; // eax
  ULONG_PTR v8; // rbp
  bool v9; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *); // rax
  int v13; // ecx
  struct _KPRCB *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  __int16 v33; // bp
  unsigned int *i; // rbx
  unsigned __int64 v35; // rdi
  bool v36; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v39)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v40)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v42[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v44; // [rsp+4Ch] [rbp-31Ch]
  __int128 v45; // [rsp+50h] [rbp-318h] BYREF
  int v46; // [rsp+60h] [rbp-308h]
  int v47; // [rsp+68h] [rbp-300h] BYREF
  _QWORD *v48; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD *v49; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 *v50; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v52[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v53[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v54[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v55[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v56[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v57[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  __int128 v58; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-298h]
  int v60; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v61; // [rsp+DCh] [rbp-28Ch]
  __int128 v62; // [rsp+F0h] [rbp-278h] BYREF
  _DWORD v63[68]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v64[34]; // [rsp+210h] [rbp-158h] BYREF
  int v65; // [rsp+360h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 544);
  v49 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  if ( !(unsigned int)KeIsSubsetAffinityEx(a2, v2 + 80) )
    KiExtendProcessAffinity(v2, a2);
  if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    a2 = (unsigned __int16 *)(v2 + 80);
  KiSetAffinityThread(a1, (__int64)&v49, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  LOBYTE(Processor) = KiReadyDeferredReadyList(CurrentPrcb, &v49);
  v51 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v8 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v13 = *(unsigned __int8 *)(v8 + 792) | *(unsigned __int8 *)(v8 + 870);
      v48 = 0LL;
      v50 = 0LL;
      if ( v13 != 63 )
      {
        v14 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v8, 1u, 1, 1, (__int64)&v48, (__int64)&v50, (__int64)&v14->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v50, (__int64)&v14->AbSelfIoBoostsList, (__int64)&v48);
        KiReadyDeferredReadyList((__int64)v14, &v48);
      }
      v47 = 0;
      v51 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v47);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v15 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v16 = __rdtsc();
      v17 = v16 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v8 + 72) += v17;
      v18 = *(unsigned int *)(v8 + 80);
      v19 = v17 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v16;
      v20 = (v19 >> 16) + v18;
      if ( v20 > 0xFFFFFFFF )
        LODWORD(v20) = -1;
      v9 = (*(_BYTE *)(v8 + 2) & 0xBE) == 0;
      *(_DWORD *)(v8 + 80) = v20;
      if ( !v9 )
      {
        LOBYTE(v16) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v8, v17, v16);
      }
      v22 = KeGetCurrentPrcb();
      v23 = (signed __int32 *)v22->SchedulerAssist;
      if ( v23 )
      {
        _m_prefetchw(v23);
        v24 = *v23;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(v23, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v15;
      if ( *(_BYTE *)(v15 + 388) == 1 )
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v15 + 388) = 2;
      *(_BYTE *)(v8 + 390) = CurrentIrql;
      *(_BYTE *)(v8 + 643) = 32;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v51, v8);
      LOBYTE(v21) = CurrentIrql;
      v9 = (unsigned __int8)KiSwapContext(v8, v15, v21) == 0;
    }
    else
    {
      v9 = (*(_DWORD *)(v8 + 116) & 0x40) == 0;
    }
    if ( !v9 )
    {
      if ( KiIrqlFlags )
      {
        v26 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v26 - 2) <= 0xDu )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v9 = (v28[5] & 0xFFFF0003) == 0;
          v28[5] &= 0xFFFF0003;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v8 + 116) &= ~0x40u;
      KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v29 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v29 - 2) <= 0xDu )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v30->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v32 & v31[5]) == 0;
        v31[5] &= v32;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(v30);
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
    *(_BYTE *)(CurrentPrcb + 6) = 1;
    return Processor;
  }
  memset(&v63[2], 0, 0x100uLL);
  v61 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v60 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v44 = 1;
    v42[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v42[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v12 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                + 120);
    _disable();
    LOBYTE(Processor) = v12(*(_QWORD *)(HalpInterruptController + 16), v42, &v60, (unsigned int)(v44 + 46), &ProcNumber);
    if ( (v65 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  v63[0] = 2097153;
  memset(&v63[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v63, KeGetPcr()->Prcb.Number);
  v42[0] = 0;
  ProcNumber = 0;
  v59 = 0LL;
  v62 = 0LL;
  v58 = 0LL;
  memset(&v64[1], 0, 0x100uLL);
  v46 = 0;
  v45 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(Processor) = qword_140C621C8(v63, 47LL);
    return Processor;
  }
  LODWORD(v64[0]) = 2097153;
  memset((char *)v64 + 4, 0, 0x104uLL);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, (unsigned __int16 *)v63, v64, 0x20u);
  v33 = v65;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v63, (__int64)(i + 2), (char *)&v62) )
      {
        v35 = v62;
        LODWORD(v45) = 6;
        v36 = (_QWORD)v62 == 0LL;
        *((_QWORD *)&v45 + 1) = *i;
        ProcNumber.Group = WORD4(v62);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v36 )
            break;
          if ( (v35 & 1) != 0 )
          {
            v42[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v45) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0] + 12);
            j = ProcNumber.Number;
          }
          v35 >>= 1;
          v36 = v35 == 0;
        }
        v52[0] = -1;
        v52[1] = 1;
        v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v38(*(_QWORD *)(HalpInterruptController + 16), v53, &v45, 47LL, v52);
        if ( (v33 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
    }
    goto LABEL_80;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_80;
  LODWORD(v45) = 5;
  DWORD2(v45) = 0;
  KeInitializeEnumerationContext((__int64)&v58, (__int64)v63);
  while ( !(unsigned int)KeEnumerateNextProcessor(v42, (unsigned __int16 **)&v58) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0]) == 5 )
      DWORD2(v45) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0] + 8);
  }
  if ( !DWORD2(v45) )
    goto LABEL_80;
  v54[0] = -1;
  v54[1] = 1;
  v55[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v55[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v39 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  Processor = v39(*(_QWORD *)(HalpInterruptController + 16), v55, &v45, 47LL, v54);
  if ( (v33 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_80:
    *((_QWORD *)&v58 + 1) = v64[1];
    *(_QWORD *)&v58 = v64;
    v42[0] = 0;
    LOWORD(v59) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v42, (unsigned __int16 **)&v58);
      if ( Processor )
        break;
      LODWORD(v45) = 4;
      v56[0] = -1;
      v56[1] = 1;
      DWORD2(v45) = *(_DWORD *)(HalpInterruptTargets + 24LL * v42[0] + 8);
      v57[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v57[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v40 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v40(*(_QWORD *)(HalpInterruptController + 16), v57, &v45, 47LL, v56);
      if ( (v33 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
