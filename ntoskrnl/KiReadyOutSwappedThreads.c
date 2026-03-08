/*
 * XREFs of KiReadyOutSwappedThreads @ 0x1402C02E8
 * Callers:
 *     KiOutSwapProcesses @ 0x1402BFE74 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
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
 *     KiInswapAndReadyThread @ 0x1402C06E8 (KiInswapAndReadyThread.c)
 *     KiEnterDeferredReadyState @ 0x140341110 (KiEnterDeferredReadyState.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwTraceReadyThread @ 0x14045EEF6 (EtwTraceReadyThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiReadyOutSwappedThreads(_QWORD *a1, unsigned __int8 a2)
{
  __int64 CurrentPrcb; // rbp
  unsigned __int64 v4; // r15
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int Processor; // eax
  ULONG_PTR v11; // r14
  bool v12; // zf
  __int64 (__fastcall *v13)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *); // rax
  int v14; // ecx
  __int64 v15; // rbx
  __int64 v16; // r9
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  struct _KPRCB *v21; // rcx
  signed __int32 *SchedulerAssist; // r8
  __int64 v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  struct _KPRCB *v26; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  __int16 v32; // bp
  unsigned int *i; // rbx
  unsigned __int64 v34; // rdi
  bool v35; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v38)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v39)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v41[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v43; // [rsp+4Ch] [rbp-31Ch]
  __int128 v44; // [rsp+50h] [rbp-318h] BYREF
  int v45; // [rsp+60h] [rbp-308h]
  int v46; // [rsp+68h] [rbp-300h] BYREF
  int v47; // [rsp+6Ch] [rbp-2FCh] BYREF
  _QWORD *v48; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 *v49; // [rsp+78h] [rbp-2F0h] BYREF
  unsigned __int64 v50; // [rsp+80h] [rbp-2E8h] BYREF
  _DWORD v51[2]; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v52[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v53[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v54[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v55[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v56[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-2B0h] BYREF
  __int64 v58; // [rsp+C8h] [rbp-2A0h]
  int v59; // [rsp+D0h] [rbp-298h] BYREF
  __int128 v60; // [rsp+D4h] [rbp-294h]
  __int128 v61; // [rsp+E8h] [rbp-280h] BYREF
  unsigned __int16 v62[136]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v63[34]; // [rsp+210h] [rbp-158h] BYREF
  int v64; // [rsp+360h] [rbp-8h]

  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  v4 = a2;
  v5 = a1;
  do
  {
    v6 = (volatile signed __int32 *)(v5 - 27);
    v46 = 0;
    v5 = (_QWORD *)*v5;
    while ( _interlockedbittestandset64(v6 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v46);
      while ( *((_QWORD *)v6 + 8) );
    }
    KiEnterDeferredReadyState(v6);
    *((_QWORD *)v6 + 8) = 0LL;
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
    {
      LOBYTE(v9) = *((_BYTE *)v6 + 567);
      LOBYTE(v7) = *((_BYTE *)v6 + 566);
      EtwTraceReadyThread(v8, v7, v9, 0LL);
    }
    LOBYTE(Processor) = KiInswapAndReadyThread(CurrentPrcb, v6);
  }
  while ( v5 != a1 );
  v50 = 0LL;
  if ( (unsigned __int8)v4 < 2u )
  {
    v11 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v14 = *(unsigned __int8 *)(v11 + 792) | *(unsigned __int8 *)(v11 + 870);
      v48 = 0LL;
      v49 = 0LL;
      if ( v14 != 63 )
      {
        v26 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v11, 1u, 1, 1, (__int64)&v48, (__int64)&v49, (__int64)&v26->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v49, (__int64)&v26->AbSelfIoBoostsList, (__int64)&v48);
        KiReadyDeferredReadyList((__int64)v26, &v48);
      }
      v47 = 0;
      v50 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
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
      *(_QWORD *)(v11 + 72) += v17;
      v18 = *(unsigned int *)(v11 + 80);
      v19 = v17 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v16;
      v20 = (v19 >> 16) + v18;
      if ( v20 > 0xFFFFFFFF )
        LODWORD(v20) = -1;
      v12 = (*(_BYTE *)(v11 + 2) & 0xBE) == 0;
      *(_DWORD *)(v11 + 80) = v20;
      if ( !v12 )
      {
        LOBYTE(v16) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v11, v17, v16);
      }
      v21 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v24 = *SchedulerAssist;
        do
        {
          v25 = v24;
          v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
        }
        while ( v25 != v24 );
        if ( (v24 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v15;
      if ( *(_BYTE *)(v15 + 388) == 1 )
        *(_DWORD *)(v15 + 132) = *(_DWORD *)(v15 + 132) - *(_DWORD *)(v15 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v15 + 388) = 2;
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v4;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v50, v11);
      LOBYTE(v23) = v4;
      LOBYTE(Processor) = KiSwapContext(v11, v15, v23);
      v12 = (_BYTE)Processor == 0;
    }
    else
    {
      Processor = *(_DWORD *)(v11 + 116);
      v12 = (Processor & 0x40) == 0;
    }
    if ( !v12 )
    {
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v12 = (v29[5] & 0xFFFF0003) == 0;
          v29[5] &= 0xFFFF0003;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v11 + 116) &= ~0x40u;
      LOBYTE(Processor) = KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(Processor) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(Processor) = Processor - 2;
        if ( (unsigned __int8)Processor <= 0xDu )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          Processor = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v12 = (Processor & v31[5]) == 0;
          v31[5] &= Processor;
          if ( v12 )
            LOBYTE(Processor) = KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v4);
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
  memset(v62, 0, 0x108uLL);
  v60 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v59 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v43 = 1;
    v41[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v41[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v13 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                + 120);
    _disable();
    LOBYTE(Processor) = v13(*(_QWORD *)(HalpInterruptController + 16), v41, &v59, (unsigned int)(v43 + 46), &ProcNumber);
    if ( (v64 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v62, 0x20u);
  KeAddProcessorAffinityEx(v62, KeGetPcr()->Prcb.Number);
  v41[0] = 0;
  ProcNumber = 0;
  v58 = 0LL;
  v61 = 0LL;
  v57 = 0LL;
  memset(v63, 0, 0x108uLL);
  v45 = 0;
  v44 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(Processor) = qword_140C621C8(v62, 47LL);
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v63, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v62, v63, WORD1(v63[0]));
  v32 = v64;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v62, (__int64)(i + 2), (char *)&v61) )
      {
        v34 = v61;
        LODWORD(v44) = 6;
        v35 = (_QWORD)v61 == 0LL;
        *((_QWORD *)&v44 + 1) = *i;
        ProcNumber.Group = WORD4(v61);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v35 )
            break;
          if ( (v34 & 1) != 0 )
          {
            v41[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v44) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 12);
            j = ProcNumber.Number;
          }
          v34 >>= 1;
          v35 = v34 == 0;
        }
        v51[0] = -1;
        v51[1] = 1;
        v52[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v52[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v37(*(_QWORD *)(HalpInterruptController + 16), v52, &v44, 47LL, v51);
        if ( (v32 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
    }
    goto LABEL_77;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_77;
  LODWORD(v44) = 5;
  DWORD2(v44) = 0;
  KeInitializeEnumerationContext((__int64)&v57, (__int64)v62);
  while ( !(unsigned int)KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v57) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0]) == 5 )
      DWORD2(v44) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 8);
  }
  if ( !DWORD2(v44) )
    goto LABEL_77;
  v53[0] = -1;
  v53[1] = 1;
  v54[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v54[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v38 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  Processor = v38(*(_QWORD *)(HalpInterruptController + 16), v54, &v44, 47LL, v53);
  if ( (v32 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_77:
    *((_QWORD *)&v57 + 1) = v63[1];
    *(_QWORD *)&v57 = v63;
    v41[0] = 0;
    LOWORD(v58) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v41, (unsigned __int16 **)&v57);
      if ( Processor )
        break;
      LODWORD(v44) = 4;
      v55[0] = -1;
      v55[1] = 1;
      DWORD2(v44) = *(_DWORD *)(HalpInterruptTargets + 24LL * v41[0] + 8);
      v56[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v56[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v39 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v39(*(_QWORD *)(HalpInterruptController + 16), v56, &v44, 47LL, v55);
      if ( (v32 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
