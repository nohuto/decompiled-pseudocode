/*
 * XREFs of KiCheckForThreadDispatch @ 0x14023A168
 * Callers:
 *     KiFastReadyThread @ 0x140239100 (KiFastReadyThread.c)
 *     KiExitThreadWait @ 0x140239380 (KiExitThreadWait.c)
 *     KiAbProcessContextSwitch @ 0x140239508 (KiAbProcessContextSwitch.c)
 *     KiBeginThreadWait @ 0x1402934C0 (KiBeginThreadWait.c)
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 *     KeRemoveQueueEx @ 0x140315D50 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KeRemovePriQueue @ 0x140352720 (KeRemovePriQueue.c)
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
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiCheckForThreadDispatch(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  __int64 v5; // r14
  bool v6; // zf
  __int64 (__fastcall *v7)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *); // rax
  int v8; // ecx
  __int64 v9; // rbx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  struct _KPRCB *v15; // r8
  signed __int32 *SchedulerAssist; // rdx
  __int64 v17; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  __int16 v26; // r14
  unsigned int *i; // rbx
  unsigned __int64 v28; // rdi
  bool v29; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v31)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v32)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v33)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v35[2]; // [rsp+40h] [rbp-328h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-320h] BYREF
  int v37; // [rsp+4Ch] [rbp-31Ch]
  __int128 v38; // [rsp+50h] [rbp-318h] BYREF
  int v39; // [rsp+60h] [rbp-308h]
  int v40; // [rsp+68h] [rbp-300h] BYREF
  _QWORD *v41; // [rsp+70h] [rbp-2F8h] BYREF
  __int64 *v42; // [rsp+78h] [rbp-2F0h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-2E8h] BYREF
  _DWORD v44[2]; // [rsp+88h] [rbp-2E0h] BYREF
  _DWORD v45[2]; // [rsp+90h] [rbp-2D8h] BYREF
  _DWORD v46[2]; // [rsp+98h] [rbp-2D0h] BYREF
  _DWORD v47[2]; // [rsp+A0h] [rbp-2C8h] BYREF
  _DWORD v48[2]; // [rsp+A8h] [rbp-2C0h] BYREF
  _DWORD v49[2]; // [rsp+B0h] [rbp-2B8h] BYREF
  __int128 v50; // [rsp+B8h] [rbp-2B0h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-2A0h]
  int v52; // [rsp+D0h] [rbp-298h] BYREF
  __int128 v53; // [rsp+D4h] [rbp-294h]
  __int128 v54; // [rsp+E8h] [rbp-280h] BYREF
  unsigned __int16 v55[136]; // [rsp+100h] [rbp-268h] BYREF
  _QWORD v56[34]; // [rsp+210h] [rbp-158h] BYREF
  int v57; // [rsp+360h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v43 = 0LL;
  if ( a2 < 2u )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v2 )
    {
      v8 = *(unsigned __int8 *)(v5 + 792) | *(unsigned __int8 *)(v5 + 870);
      v41 = 0LL;
      v42 = 0LL;
      if ( v8 != 63 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v5, 1u, 1, 1, (__int64)&v41, (__int64)&v42, (__int64)&CurrentPrcb->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v42, (__int64)&CurrentPrcb->AbSelfIoBoostsList, (__int64)&v41);
        KiReadyDeferredReadyList((__int64)CurrentPrcb, &v41);
      }
      v40 = 0;
      v43 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v40);
        while ( *(_QWORD *)(a1 + 48) );
      }
      v9 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      _disable();
      *(_BYTE *)(a1 + 32) = 1;
      v10 = __rdtsc();
      v11 = v10 - *(_QWORD *)(a1 + 33152);
      *(_QWORD *)(v5 + 72) += v11;
      v12 = *(unsigned int *)(v5 + 80);
      v13 = v11 * *(unsigned int *)(a1 + 33208);
      *(_QWORD *)(a1 + 33152) = v10;
      v14 = (v13 >> 16) + v12;
      if ( v14 > 0xFFFFFFFF )
        LODWORD(v14) = -1;
      v6 = (*(_BYTE *)(v5 + 2) & 0xBE) == 0;
      *(_DWORD *)(v5 + 80) = v14;
      if ( !v6 )
      {
        LOBYTE(v10) = 1;
        KiEndThreadAccountingPeriodEx(a1, v5, v11, v10);
      }
      v15 = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)v15->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v18 = *SchedulerAssist;
        do
        {
          v19 = v18;
          v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
        }
        while ( v19 != v18 );
        if ( (v18 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
      _enable();
      *(_QWORD *)(a1 + 8) = v9;
      if ( *(_BYTE *)(v9 + 388) == 1 )
        *(_DWORD *)(v9 + 132) = *(_DWORD *)(v9 + 132) - *(_DWORD *)(v9 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v9 + 388) = 2;
      *(_BYTE *)(v5 + 643) = 32;
      *(_BYTE *)(v5 + 390) = v3;
      KiQueueReadyThread(a1, &v43, v5);
      LOBYTE(v17) = v3;
      LOBYTE(v2) = KiSwapContext(v5, v9, v17);
      v6 = (_BYTE)v2 == 0;
    }
    else
    {
      LODWORD(v2) = *(_DWORD *)(v5 + 116);
      v6 = (v2 & 0x40) == 0;
    }
    if ( !v6 )
    {
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v6 = (v23[5] & 0xFFFF0003) == 0;
          v23[5] &= 0xFFFF0003;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v5 + 116) &= ~0x40u;
      LOBYTE(v2) = KiDeliverApc(0LL, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v2) = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v2) = v2 - 2;
        if ( (unsigned __int8)v2 <= 0xDu )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          LODWORD(v2) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = ((unsigned int)v2 & v25[5]) == 0;
          v25[5] &= v2;
          if ( v6 )
            LOBYTE(v2) = KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(v3);
    return v2;
  }
  if ( !v2 )
    return v2;
  LOBYTE(v2) = *(_BYTE *)(a1 + 13242);
  if ( (_BYTE)v2 )
    return v2;
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 6) = 1;
    return v2;
  }
  memset(v55, 0, 0x108uLL);
  v53 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v52 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v37 = 1;
    v35[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v35[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v7 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, _QWORD, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                               + 120);
    _disable();
    LOBYTE(v2) = v7(*(_QWORD *)(HalpInterruptController + 16), v35, &v52, (unsigned int)(v37 + 46), &ProcNumber);
    if ( (v57 & 0x200) != 0 )
      _enable();
    return v2;
  }
  KeInitializeAffinityEx2((__int64)v55, 0x20u);
  KeAddProcessorAffinityEx(v55, KeGetPcr()->Prcb.Number);
  v35[0] = 0;
  ProcNumber = 0;
  v51 = 0LL;
  v54 = 0LL;
  v50 = 0LL;
  memset(v56, 0, 0x108uLL);
  v39 = 0;
  v38 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(v2) = qword_140C621C8(v55, 47LL);
    return v2;
  }
  KeInitializeAffinityEx2((__int64)v56, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v55, v56, WORD1(v56[0]));
  v26 = v57;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v55, (__int64)(i + 2), (char *)&v54) )
      {
        v28 = v54;
        LODWORD(v38) = 6;
        v29 = (_QWORD)v54 == 0LL;
        *((_QWORD *)&v38 + 1) = *i;
        ProcNumber.Group = WORD4(v54);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v29 )
            break;
          if ( (v28 & 1) != 0 )
          {
            v35[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v38) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0] + 12);
            j = ProcNumber.Number;
          }
          v28 >>= 1;
          v29 = v28 == 0;
        }
        v44[0] = -1;
        v44[1] = 1;
        v45[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v45[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v31 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        LODWORD(v2) = v31(*(_QWORD *)(HalpInterruptController + 16), v45, &v38, 47LL, v44);
        if ( (v26 & 0x200) != 0 )
          _enable();
        if ( (int)v2 < 0 )
          return v2;
      }
    }
    goto LABEL_69;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_69;
  LODWORD(v38) = 5;
  DWORD2(v38) = 0;
  KeInitializeEnumerationContext((__int64)&v50, (__int64)v55);
  while ( !(unsigned int)KeEnumerateNextProcessor(v35, (unsigned __int16 **)&v50) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0]) == 5 )
      DWORD2(v38) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0] + 8);
  }
  if ( !DWORD2(v38) )
    goto LABEL_69;
  v46[0] = -1;
  v46[1] = 1;
  v47[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v47[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v32 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  LODWORD(v2) = v32(*(_QWORD *)(HalpInterruptController + 16), v47, &v38, 47LL, v46);
  if ( (v26 & 0x200) != 0 )
    _enable();
  if ( (int)v2 >= 0 )
  {
LABEL_69:
    *((_QWORD *)&v50 + 1) = v56[1];
    *(_QWORD *)&v50 = v56;
    v35[0] = 0;
    LOWORD(v51) = 0;
    do
    {
      LODWORD(v2) = KeEnumerateNextProcessor(v35, (unsigned __int16 **)&v50);
      if ( (_DWORD)v2 )
        break;
      LODWORD(v38) = 4;
      v48[0] = -1;
      v48[1] = 1;
      DWORD2(v38) = *(_DWORD *)(HalpInterruptTargets + 24LL * v35[0] + 8);
      v49[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v49[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v33 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      LODWORD(v2) = v33(*(_QWORD *)(HalpInterruptController + 16), v49, &v38, 47LL, v48);
      if ( (v26 & 0x200) != 0 )
        _enable();
    }
    while ( (int)v2 >= 0 );
  }
  return v2;
}
