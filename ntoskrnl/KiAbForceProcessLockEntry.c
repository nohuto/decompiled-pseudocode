/*
 * XREFs of KiAbForceProcessLockEntry @ 0x1403C7578
 * Callers:
 *     KeAbMarkCrossThreadReleasable @ 0x1403C7520 (KeAbMarkCrossThreadReleasable.c)
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
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiEndThreadAccountingPeriodEx @ 0x140256710 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiAbTryIncrementIoWaiterCounts @ 0x140282B80 (KiAbTryIncrementIoWaiterCounts.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiDeliverApc @ 0x140350B60 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiAbIoBoostOwners @ 0x140357CB0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x140357DB4 (KiAbCpuBoostOwners.c)
 *     KiAbEntryUpdateWaiterTreePosition @ 0x140358150 (KiAbEntryUpdateWaiterTreePosition.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035822C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140358338 (KiAbOwnerComputeCpuPriorityKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiSwapContext @ 0x14041F890 (KiSwapContext.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiAbForceProcessLockEntry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r14
  __int64 CurrentPrcb; // rsi
  __int128 *LockedHeadEntry; // rax
  __int64 v5; // rbx
  int Processor; // eax
  ULONG_PTR v7; // rbp
  bool v8; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *); // rax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  struct _KPRCB *v19; // rcx
  signed __int32 *v20; // r8
  __int64 v21; // r8
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  struct _KPRCB *v24; // rdi
  __int64 v25; // rax
  char v26; // bp
  char v27; // al
  char v28; // r8
  char CpuPriorityKey; // di
  int v30; // r10d
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  __int16 v38; // bp
  unsigned int *i; // rbx
  unsigned __int64 v40; // rdi
  bool v41; // zf
  unsigned __int8 j; // al
  __int64 (__fastcall *v43)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v44)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  __int64 (__fastcall *v45)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  _DWORD v47[2]; // [rsp+40h] [rbp-348h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+48h] [rbp-340h] BYREF
  int v49; // [rsp+4Ch] [rbp-33Ch]
  __int128 v50; // [rsp+50h] [rbp-338h] BYREF
  int v51; // [rsp+60h] [rbp-328h]
  int v52; // [rsp+68h] [rbp-320h] BYREF
  _QWORD *v53; // [rsp+70h] [rbp-318h] BYREF
  _QWORD *v54; // [rsp+78h] [rbp-310h] BYREF
  __int64 *v55; // [rsp+80h] [rbp-308h] BYREF
  unsigned __int64 v56; // [rsp+88h] [rbp-300h] BYREF
  _DWORD v57[2]; // [rsp+90h] [rbp-2F8h] BYREF
  _DWORD v58[2]; // [rsp+98h] [rbp-2F0h] BYREF
  _DWORD v59[2]; // [rsp+A0h] [rbp-2E8h] BYREF
  _DWORD v60[2]; // [rsp+A8h] [rbp-2E0h] BYREF
  _DWORD v61[2]; // [rsp+B0h] [rbp-2D8h] BYREF
  _DWORD v62[2]; // [rsp+B8h] [rbp-2D0h] BYREF
  __int128 v63; // [rsp+C0h] [rbp-2C8h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-2B8h]
  struct _KLOCK_QUEUE_HANDLE v65; // [rsp+D8h] [rbp-2B0h] BYREF
  int v66; // [rsp+F0h] [rbp-298h] BYREF
  __int128 v67; // [rsp+F4h] [rbp-294h]
  __int128 v68; // [rsp+108h] [rbp-280h] BYREF
  unsigned __int16 v69[136]; // [rsp+120h] [rbp-268h] BYREF
  _QWORD v70[34]; // [rsp+230h] [rbp-158h] BYREF
  int v71; // [rsp+380h] [rbp-8h]

  v53 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v10) = 4;
    else
      v10 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v10;
  }
  CurrentPrcb = (__int64)KeGetCurrentPrcb();
  memset(&v65, 0, sizeof(v65));
  LockedHeadEntry = KiAbEntryGetLockedHeadEntry((__int128 *)a1, 1, &v65);
  v5 = (__int64)LockedHeadEntry;
  if ( LockedHeadEntry )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
LABEL_4:
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&v65);
      goto LABEL_5;
    }
    if ( (__int128 *)a1 != LockedHeadEntry )
      KiAbEntryUpdateWaiterTreePosition(a1, (__int64)LockedHeadEntry);
    v25 = *(_QWORD *)(v5 + 56);
    if ( v25 )
      v26 = *(_BYTE *)(v25 + 24);
    else
      v26 = 30;
    if ( !*(_BYTE *)(v5 + 17) )
    {
      v27 = KiAbOwnerComputeCpuPriorityKey(v5);
      v28 = v26;
      if ( v27 < v26 )
        v28 = v27;
      v26 = v28;
    }
    KiAbTryIncrementIoWaiterCounts((unsigned __int8 *)a1, v5);
    CpuPriorityKey = KiAbEntryGetCpuPriorityKey((unsigned __int8 *)a1);
    if ( v26 < CpuPriorityKey )
    {
      if ( !v30 )
      {
LABEL_60:
        KiAbCpuBoostOwners(v5, CpuPriorityKey, (int)&v53, 0, CurrentPrcb + 35696);
        goto LABEL_4;
      }
    }
    else if ( !v30 )
    {
      goto LABEL_4;
    }
    KiAbIoBoostOwners(v5, v30, (int)&v53, 0, CurrentPrcb + 35696);
    goto LABEL_60;
  }
LABEL_5:
  LOBYTE(Processor) = KiReadyDeferredReadyList(CurrentPrcb, &v53);
  v56 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v7 = *(_QWORD *)(CurrentPrcb + 8);
    if ( *(_QWORD *)(CurrentPrcb + 16) )
    {
      v12 = *(unsigned __int8 *)(v7 + 792) | *(unsigned __int8 *)(v7 + 870);
      v54 = 0LL;
      v55 = 0LL;
      if ( v12 != 63 )
      {
        v24 = KeGetCurrentPrcb();
        KiAbProcessThreadLocks(v7, 1u, 1, 1, (__int64)&v54, (__int64)&v55, (__int64)&v24->AbSelfIoBoostsList);
        KiAbPropagateBoosts(&v55, (__int64)&v24->AbSelfIoBoostsList, (__int64)&v54);
        KiReadyDeferredReadyList((__int64)v24, &v54);
      }
      v52 = 0;
      v56 = CurrentPrcb & 0xFFFFFFFFFFFFFFFEuLL;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(CurrentPrcb + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v52);
        while ( *(_QWORD *)(CurrentPrcb + 48) );
      }
      v13 = *(_QWORD *)(CurrentPrcb + 16);
      *(_QWORD *)(CurrentPrcb + 16) = 0LL;
      _disable();
      *(_BYTE *)(CurrentPrcb + 32) = 1;
      v14 = __rdtsc();
      v15 = v14 - *(_QWORD *)(CurrentPrcb + 33152);
      *(_QWORD *)(v7 + 72) += v15;
      v16 = *(unsigned int *)(v7 + 80);
      v17 = v15 * *(unsigned int *)(CurrentPrcb + 33208);
      *(_QWORD *)(CurrentPrcb + 33152) = v14;
      v18 = (v17 >> 16) + v16;
      if ( v18 > 0xFFFFFFFF )
        LODWORD(v18) = -1;
      v8 = (*(_BYTE *)(v7 + 2) & 0xBE) == 0;
      *(_DWORD *)(v7 + 80) = v18;
      if ( !v8 )
      {
        LOBYTE(v14) = 1;
        KiEndThreadAccountingPeriodEx(CurrentPrcb, v7, v15, v14);
      }
      v19 = KeGetCurrentPrcb();
      v20 = (signed __int32 *)v19->SchedulerAssist;
      if ( v20 )
      {
        _m_prefetchw(v20);
        v22 = *v20;
        do
        {
          v23 = v22;
          v22 = _InterlockedCompareExchange(v20, v22 & 0xFFDFFFFF, v22);
        }
        while ( v23 != v22 );
        if ( (v22 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
      _enable();
      *(_QWORD *)(CurrentPrcb + 8) = v13;
      if ( *(_BYTE *)(v13 + 388) == 1 )
        *(_DWORD *)(v13 + 132) = *(_DWORD *)(v13 + 132) - *(_DWORD *)(v13 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v13 + 388) = 2;
      *(_BYTE *)(v7 + 643) = 32;
      *(_BYTE *)(v7 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, (__int64 *)&v56, v7);
      LOBYTE(v21) = CurrentIrql;
      v8 = (unsigned __int8)KiSwapContext(v7, v13, v21) == 0;
    }
    else
    {
      v8 = (*(_DWORD *)(v7 + 116) & 0x40) == 0;
    }
    if ( !v8 )
    {
      if ( KiIrqlFlags )
      {
        v31 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v31 - 2) <= 0xDu )
        {
          v32 = KeGetCurrentPrcb();
          v33 = v32->SchedulerAssist;
          v8 = (v33[5] & 0xFFFF0003) == 0;
          v33[5] &= 0xFFFF0003;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(v32);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v7 + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags )
    {
      v34 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v34 - 2) <= 0xDu )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v8 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick(v35);
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
  memset(v69, 0, 0x108uLL);
  v67 = 0LL;
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x40) != 0 && !HalpInterruptNoShorthand )
  {
    v66 = 3;
    ProcNumber = (struct _PROCESSOR_NUMBER)-1;
    v49 = 1;
    v47[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
    v47[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
    v11 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, int *, __int64, struct _PROCESSOR_NUMBER *))(HalpInterruptController
                                                                                                 + 120);
    _disable();
    LOBYTE(Processor) = v11(*(_QWORD *)(HalpInterruptController + 16), v47, &v66, 47LL, &ProcNumber);
    if ( (v71 & 0x200) != 0 )
      _enable();
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v69, 0x20u);
  KeAddProcessorAffinityEx(v69, KeGetPcr()->Prcb.Number);
  v47[0] = 0;
  ProcNumber = 0;
  v64 = 0LL;
  v68 = 0LL;
  v63 = 0LL;
  memset(v70, 0, 0x108uLL);
  v51 = 0;
  v50 = 0LL;
  if ( qword_140C621C8 )
  {
    LOBYTE(Processor) = qword_140C621C8(v69, 47LL);
    return Processor;
  }
  KeInitializeAffinityEx2((__int64)v70, 0x20u);
  KiAndAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v69, v70, WORD1(v70[0]));
  v38 = v71;
  if ( HalpInterruptClusterModeEnabled )
  {
    for ( i = (unsigned int *)HalpInterruptClusterData; (unsigned __int64)i < HalpInterruptClusterDataEnd; i += 6 )
    {
      if ( (unsigned int)KeAndGroupAffinityEx(v69, (__int64)(i + 2), (char *)&v68) )
      {
        v40 = v68;
        LODWORD(v50) = 6;
        v41 = (_QWORD)v68 == 0LL;
        *((_QWORD *)&v50 + 1) = *i;
        ProcNumber.Group = WORD4(v68);
        for ( j = 0; ; ++j )
        {
          ProcNumber.Number = j;
          if ( v41 )
            break;
          if ( (v40 & 1) != 0 )
          {
            v47[0] = KeGetProcessorIndexFromNumber(&ProcNumber);
            HIDWORD(v50) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v47[0] + 12);
            j = ProcNumber.Number;
          }
          v40 >>= 1;
          v41 = v40 == 0;
        }
        v57[0] = -1;
        v57[1] = 1;
        v58[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
        v58[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
        v43 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
        _disable();
        Processor = v43(*(_QWORD *)(HalpInterruptController + 16), v58, &v50, 47LL, v57);
        if ( (v38 & 0x200) != 0 )
          _enable();
        if ( Processor < 0 )
          return Processor;
      }
    }
    goto LABEL_94;
  }
  if ( HalpInterruptPhysicalModeOnly )
    goto LABEL_94;
  LODWORD(v50) = 5;
  DWORD2(v50) = 0;
  KeInitializeEnumerationContext((__int64)&v63, (__int64)v69);
  while ( !(unsigned int)KeEnumerateNextProcessor(v47, (unsigned __int16 **)&v63) )
  {
    if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v47[0]) == 5 )
      DWORD2(v50) |= *(_DWORD *)(HalpInterruptTargets + 24LL * v47[0] + 8);
  }
  if ( !DWORD2(v50) )
    goto LABEL_94;
  v59[0] = -1;
  v59[1] = 1;
  v60[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v60[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v44 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  Processor = v44(*(_QWORD *)(HalpInterruptController + 16), v60, &v50, 47LL, v59);
  if ( (v38 & 0x200) != 0 )
    _enable();
  if ( Processor >= 0 )
  {
LABEL_94:
    *((_QWORD *)&v63 + 1) = v70[1];
    *(_QWORD *)&v63 = v70;
    v47[0] = 0;
    LOWORD(v64) = 0;
    do
    {
      Processor = KeEnumerateNextProcessor(v47, (unsigned __int16 **)&v63);
      if ( Processor )
        break;
      LODWORD(v50) = 4;
      v61[0] = -1;
      v61[1] = 1;
      DWORD2(v50) = *(_DWORD *)(HalpInterruptTargets + 24LL * v47[0] + 8);
      v62[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
      v62[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
      v45 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
      _disable();
      Processor = v45(*(_QWORD *)(HalpInterruptController + 16), v62, &v50, 47LL, v61);
      if ( (v38 & 0x200) != 0 )
        _enable();
    }
    while ( Processor >= 0 );
  }
  return Processor;
}
