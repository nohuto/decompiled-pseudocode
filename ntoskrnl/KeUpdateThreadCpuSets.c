/*
 * XREFs of KeUpdateThreadCpuSets @ 0x140399998
 * Callers:
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
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
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x140399E74 (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KeUpdateThreadCpuSets(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 v2; // rdi
  __int64 CurrentPrcb; // rsi
  int Processor; // eax
  ULONG_PTR v5; // rbp
  bool v6; // zf
  int v7; // ecx
  struct _KPRCB *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int16 v15; // bp
  unsigned int *i; // rbx
  unsigned __int64 v17; // rdi
  bool v18; // zf
  unsigned __int8 j; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rdx
  struct _KPRCB *v22; // rcx
  signed __int32 *v23; // r8
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v26; // r8
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  __int64 (__fastcall *v34)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  __int64 (__fastcall *v35)(_QWORD, _DWORD *, __int128 *, _QWORD, int *); // rax
  __int64 (__fastcall *v36)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v37)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v39[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v41; // [rsp+4Ch] [rbp-31Ch]
  __int128 v42; // [rsp+50h] [rbp-318h] BYREF
  int v43; // [rsp+60h] [rbp-308h]
  int v44; // [rsp+68h] [rbp-300h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp-2F8h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-2F0h] BYREF
  __int64 *v47; // [rsp+80h] [rbp-2E8h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-2E0h] BYREF
  int v49; // [rsp+90h] [rbp-2D8h] BYREF
  int v50; // [rsp+94h] [rbp-2D4h]
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

  v46 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = (unsigned int)(unsigned __int8)v46 + 1;
  if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)((_BYTE)v46 + 1)) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v21) = 4;
    else
      v21 = (-1LL << ((unsigned __int8)v46 + 1 + CurrentIrql)) & 4;
    SchedulerAssist[5] |= v21;
  }
  KiUpdateThreadCpuSetAffinitiesFromDpcLevel(a1, &v46);
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  LOBYTE(Processor) = KiReadyDeferredReadyList(CurrentPrcb, &v46);
  v48 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v5 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v7 = *(unsigned __int8 *)(v5 + 792) | *(unsigned __int8 *)(v5 + 870);
      v45 = 0LL;
      v47 = 0LL;
      if ( v7 != 63 )
      {
        v8 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v5, 1u, 1, 1, (__int64)&v45, (__int64)&v47, (__int64)&v8->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v47, (__int64)&v8->AbSelfIoBoostsList, (__int64)&v45);
        KiReadyDeferredReadyList((__int64)v8, &v45);
        v2 = 1LL;
      }
      v44 = 0;
      v48 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v44);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v9 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = v2;
      v10 = __rdtsc();
      v11 = v10 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v5 + 72) += v11;
      v12 = *(unsigned int *)(v5 + 80);
      v13 = v11 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v10;
      v14 = (v13 >> 16) + v12;
      if ( v14 > 0xFFFFFFFF )
        LODWORD(v14) = -1;
      v6 = (*(_BYTE *)(v5 + 2) & 0xBE) == 0;
      *(_DWORD *)(v5 + 80) = v14;
      if ( !v6 )
      {
        LOBYTE(v10) = v2;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v5, v11, v10);
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
      *(_QWORD *)(CurrentPrcb + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == (_BYTE)v2 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v48, v5);
      LOBYTE(v26) = CurrentIrql;
      v6 = (unsigned __int8)KiSwapContext(v5, v9, v26) == 0;
    }
    else
    {
      v6 = (*(_DWORD *)(v5 + 116) & 0x40) == 0;
    }
    if ( !v6 )
    {
      if ( KiIrqlFlags )
      {
        v27 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v2) != 0 && (unsigned __int8)(v27 - 2) <= 0xDu )
        {
          v28 = KeGetCurrentPrcb();
          v29 = v28->SchedulerAssist;
          v6 = (v29[5] & 0xFFFF0003) == 0;
          v29[5] &= 0xFFFF0003;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
      }
      __writecr8(v2);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v30 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v2) != 0 && (unsigned __int8)(v30 - 2) <= 0xDu )
      {
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + CurrentIrql));
        v6 = (v33 & v32[5]) == 0;
        v32[5] &= v33;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick(v31);
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
    *(_BYTE *)(CurrentPrcb + 6) = v2;
    return Processor;
  }
  memset(v61, 0, 0x108uLL);
  v59 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v58 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v41 = v2;
    v39[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v39[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v34 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    _disable();
    LOBYTE(Processor) = v34(*(_QWORD *)(HalpInterruptController + 16), v39, &v58, 47LL, &ProcNumber);
    if ( (v63 & 0x200) != 0 )
      _enable();
  }
  else
  {
    KeInitializeAffinityEx2((__int64)v61, 0x20u);
    KeAddProcessorAffinityEx(v61, KeGetPcr()->Prcb.Number);
    v39[0] = 0;
    ProcNumber = 0;
    v57 = 0LL;
    v60 = 0LL;
    v56 = 0LL;
    memset(v62, 0, 0x108uLL);
    v43 = 0;
    v42 = 0LL;
    if ( qword_140C621C8 )
    {
      LOBYTE(Processor) = qword_140C621C8(v61, 47LL);
      return Processor;
    }
    KeInitializeAffinityEx2((__int64)v62, 0x20u);
    KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v61, v62, WORD1(v62[0]));
    v15 = v63;
    if ( HalpInterruptClusterModeEnabled )
    {
      for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
      {
        if ( (unsigned int)KeAndGroupAffinityEx(v61, (__int64)(i + 2), (char *)&v60) )
        {
          v17 = v60;
          LODWORD(v42) = 6;
          v18 = (_QWORD)v60 == 0LL;
          *((_QWORD *)&v42 + 1) = *i;
          ProcNumber.Group = WORD4(v60);
          for ( j = 0; ; ++j )
          {
            ProcNumber.Number = j;
            if ( v18 )
              break;
            if ( (v17 & 1) != 0 )
            {
              v39[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
              HIDWORD(v42) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0] + 12);
              j = ProcNumber.Number;
            }
            v17 >>= 1;
            v18 = v17 == 0;
          }
          LODWORD(v2) = 1;
          v49 = -1;
          v50 = 1;
          v51[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
          v51[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
          v35 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, _QWORD, int *))(HalpInterruptController + 120);
          _disable();
          Processor = v35(*(_QWORD *)(HalpInterruptController + 16), v51, &v42, (unsigned int)(v50 + 46), &v49);
          if ( (v15 & 0x200) != 0 )
            _enable();
          if ( Processor < 0 )
            return Processor;
        }
      }
      goto LABEL_39;
    }
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_39;
    LODWORD(v42) = 5;
    DWORD2(v42) = 0;
    KeInitializeEnumerationContext((__int64)&v56, (__int64)v61);
    while ( !(unsigned int)KeEnumerateNextProcessor(v39, (unsigned __int16 **)&v56) )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0]) == 5 )
        DWORD2(v42) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0] + 8);
    }
    if ( !DWORD2(v42) )
      goto LABEL_39;
    v52[0] = -1;
    v52[1] = v2;
    v53[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v53[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v36 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
    _disable();
    Processor = v36(*(_QWORD *)(HalpInterruptController + 16), v53, &v42, 47LL, v52);
    if ( (v15 & 0x200) != 0 )
      _enable();
    if ( Processor >= 0 )
    {
LABEL_39:
      *((_QWORD *)&v56 + 1) = v62[1];
      *(_QWORD *)&v56 = v62;
      v39[0] = 0;
      LOWORD(v57) = 0;
      do
      {
        Processor = KeEnumerateNextProcessor(v39, (unsigned __int16 **)&v56);
        if ( Processor )
          break;
        LODWORD(v42) = 4;
        v54[0] = -1;
        v54[1] = v2;
        DWORD2(v42) = *(_DWORD *)(HalpInterruptTargets + 24LL * v39[0] + 8);
        v55[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v55[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v37 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v37(*(_QWORD *)(HalpInterruptController + 16), v55, &v42, 47LL, v54);
        if ( (v15 & 0x200) != 0 )
          _enable();
      }
      while ( Processor >= 0 );
    }
  }
  return Processor;
}
