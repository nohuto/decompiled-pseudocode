/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x140572DE4
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140226FA0 (KiReadyDeferredReadyList.c)
 *     KeAndGroupAffinityEx @ 0x140233690 (KeAndGroupAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KeInitializeEnumerationContext @ 0x140236DE0 (KeInitializeEnumerationContext.c)
 *     KeInitializeAffinityEx2 @ 0x140237600 (KeInitializeAffinityEx2.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     KiAbPropagateBoosts @ 0x1402395C0 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140399E24 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 v3; // r15
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  __int64 CurrentPrcb; // rsi
  int Processor; // eax
  ULONG_PTR v8; // rbp
  int v9; // ecx
  struct _KPRCB *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // r9
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  struct _KPRCB *v17; // rcx
  signed __int32 *v18; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  unsigned int v21; // r8d
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  __int64 (__fastcall *v30)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int16 v31; // bp
  unsigned int *i; // rbx
  unsigned __int64 v33; // rdi
  bool v34; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v36)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v40[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v42; // [rsp+4Ch] [rbp-31Ch]
  __int128 v43; // [rsp+50h] [rbp-318h] BYREF
  int v44; // [rsp+60h] [rbp-308h]
  int v45; // [rsp+68h] [rbp-300h] BYREF
  _QWORD *v46; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD *v47; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 *v48; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v50[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v51[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v52[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v53[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v54[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  _DWORD v55[2]; // [rsp+B8h] [rbp-2B0h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v57; // [rsp+D0h] [rbp-298h]
  int v58; // [rsp+D8h] [rbp-290h] BYREF
  __int128 v59; // [rsp+DCh] [rbp-28Ch]
  __int128 v60; // [rsp+F0h] [rbp-278h] BYREF
  unsigned __int16 v61[136]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v62[34]; // [rsp+210h] [rbp-158h] BYREF
  int v63; // [rsp+360h] [rbp-8h]

  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = (unsigned int)(unsigned __int8)v47 + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)((_BYTE)v47 + 1)) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v5) = 4;
    else
      v5 = (-1LL << ((unsigned __int8)v47 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v5;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v47);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  LOBYTE(Processor) = KiReadyDeferredReadyList(CurrentPrcb, &v47);
  v49 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v8 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v9 = *(unsigned __int8 *)(v8 + 792) | *(unsigned __int8 *)(v8 + 870);
      v46 = 0LL;
      v48 = 0LL;
      if ( v9 != 63 )
      {
        v10 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v8, v3, v3, v3, (__int64)&v46, (__int64)&v48, (__int64)&v10->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v48, (__int64)&v10->AbSelfIoBoostsList, (__int64)&v46);
        KiReadyDeferredReadyList((__int64)v10, &v46);
      }
      v45 = 0;
      v49 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v45);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v11 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v3;
      v12 = __rdtsc();
      v13 = v12 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v8 + 72) += v13;
      v14 = *(unsigned int *)(v8 + 80);
      v15 = v13 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v12;
      v16 = (v15 >> 16) + v14;
      if ( v16 > 0xFFFFFFFF )
        LODWORD(v16) = -1;
      v22 = (*(_BYTE *)(v8 + 2) & 0xBE) == 0;
      *(_DWORD *)(v8 + 80) = v16;
      v3 = 1LL;
      if ( !v22 )
      {
        LOBYTE(v12) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v8, v13, v12);
      }
      v17 = KeGetCurrentPrcb();
      v18 = (signed __int32 *)v17->SchedulerAssist;
      if ( v18 )
      {
        _m_prefetchw(v18);
        v19 = *v18;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(v18, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)v17);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v11;
      if ( *(_BYTE *)(v11 + 388) == 1 )
        *(_DWORD *)(v11 + 132) = *(_DWORD *)(v11 + 132) - *(_DWORD *)(v11 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v11 + 388) = 2;
      *(_BYTE *)(v8 + 643) = 32;
      *(_BYTE *)(v8 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v49, v8);
      LOBYTE(v21) = CurrentIrql;
      v22 = (unsigned __int8)KiSwapContext(v8, v11, v21) == 0;
    }
    else
    {
      v22 = (*(_DWORD *)(v8 + 116) & 0x40) == 0;
    }
    if ( !v22 )
    {
      if ( KiIrqlFlags )
      {
        v23 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v3) != 0 && (unsigned __int8)(v23 - 2) <= 0xDu )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v22 = (v25[5] & 0xFFFF0003) == 0;
          v25[5] &= 0xFFFF0003;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick((__int64)v24);
        }
      }
      __writecr8(v3);
      *(_DWORD *)(v8 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v26 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v3) != 0 && (unsigned __int8)(v26 - 2) <= 0xDu )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + CurrentIrql));
        v22 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)v27);
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
    *(_BYTE *)(CurrentPrcb + 6) = v3;
    return Processor;
  }
  memset(v61, 0, 0x108uLL);
  v59 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v58 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v42 = 1;
    v40[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v40[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v30 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    _disable();
    LOBYTE(Processor) = v30(*(_QWORD *)(HalpInterruptController + 16), v40, &v58, 47LL, &ProcNumber);
    if ( (v63 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v61, 0x20u);
  KeAddProcessorAffinityEx(v61, KeGetPcr()->Prcb.Number);
  v40[0] = 0;
  ProcNumber = 0;
  v57 = 0LL;
  v60 = 0LL;
  v56 = 0LL;
  memset(v62, 0, 0x108uLL);
  v44 = 0;
  v43 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(Processor) = qword_140C621C8(v61, 47LL);
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v62, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v61, v62, WORD1(v62[0]));
  v31 = v63;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v61, (__int64)(i + 2), (char *)&v60) )
      {
        v33 = v60;
        LODWORD(v43) = 6;
        v34 = (_QWORD)v60 == 0LL;
        *((_QWORD *)&v43 + 1) = *i;
        ProcNumber.Group = WORD4(v60);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v34 )
            break;
          if ( (v33 & 1) != 0 )
          {
            v40[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v43) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0] + 12);
            j = ProcNumber.Number;
          }
          v33 >>= 1;
          v34 = v33 == 0;
        }
        v50[0] = -1;
        v50[1] = 1;
        v51[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v51[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v36 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v36(*(_QWORD *)(HalpInterruptController + 16), v51, &v43, 47LL, v50);
        if ( (v31 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
    }
    goto LABEL_75;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_75;
  LODWORD(v43) = 5;
  DWORD2(v43) = 0;
  KeInitializeEnumerationContext((__int64)&v56, (__int64)v61);
  while ( !(unsigned int)KeEnumerateNextProcessor(v40, (unsigned __int16 **)&v56) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0]) == 5 )
      DWORD2(v43) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0] + 8);
  }
  if ( !DWORD2(v43) )
    goto LABEL_75;
  v52[0] = -1;
  v52[1] = 1;
  v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  Processor = v37(*(_QWORD *)(HalpInterruptController + 16), v53, &v43, 47LL, v52);
  if ( (v31 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_75:
    *((_QWORD *)&v56 + 1) = v62[1];
    *(_QWORD *)&v56 = v62;
    v40[0] = 0;
    LOWORD(v57) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v40, (unsigned __int16 **)&v56);
      if ( Processor )
        break;
      LODWORD(v43) = 4;
      v54[0] = -1;
      v54[1] = 1;
      DWORD2(v43) = *(_DWORD *)(HalpInterruptTargets + 24LL * v40[0] + 8);
      v55[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v55[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v38(*(_QWORD *)(HalpInterruptController + 16), v55, &v43, 47LL, v54);
      if ( (v31 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
