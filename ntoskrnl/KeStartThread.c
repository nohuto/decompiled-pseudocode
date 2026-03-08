/*
 * XREFs of KeStartThread @ 0x1402385C4
 * Callers:
 *     KiStartPrcbThread @ 0x14037F580 (KiStartPrcbThread.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140237154 (KiUpdateNodeAffinitizedFlag.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140238A10 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAdjustProcessIdealProcessorSetsForThreadCreation @ 0x140238A7C (KiAdjustProcessIdealProcessorSetsForThreadCreation.c)
 *     KiInitializeForegroundBoostThread @ 0x140238B34 (KiInitializeForegroundBoostThread.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiComputeGroupMask @ 0x1402967CC (KiComputeGroupMask.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KiFreezeSingleThread @ 0x140355BB4 (KiFreezeSingleThread.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x1403598E0 (KeSelectInitialIdealProcessorForThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiFindBiasedSetMember @ 0x14045780C (KiFindBiasedSetMember.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiExtendProcessAffinity @ 0x14057C4E4 (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405FA980 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, unsigned __int16 *a2, unsigned int *a3)
{
  unsigned __int64 CurrentThread; // rsi
  _KPROCESS *v7; // rdi
  unsigned __int8 CurrentIrql; // r15
  char BasePriority; // al
  __int64 v10; // rcx
  unsigned int v11; // r14d
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v13; // r12
  int QuantumReset; // eax
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r8
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v19; // rax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v22; // rax
  _LIST_ENTRY **v23; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  unsigned int v25; // eax
  unsigned int v26; // r10d
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf
  __int64 v32; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v35[68]; // [rsp+50h] [rbp-B0h] BYREF

  v35[0] = 2097153;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v35[1], 0, 0x104uLL);
  CurrentThread = (unsigned __int64)KeGetCurrentThread();
  v7 = *(_KPROCESS **)(a1 + 184);
  v33 = 0LL;
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v7->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v22) = 4;
    if ( CurrentIrql != 2 )
      v22 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v22;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v7->ProcessLock);
  KiAdjustProcessIdealProcessorSetsForThreadCreation(v7);
  BasePriority = v7->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    KiCopyAffinityEx((__int64)v35, HIWORD(v35[0]), &v7->Affinity.Count);
    a2 = (unsigned __int16 *)v35;
    if ( v7 == *(_KPROCESS **)(CurrentThread + 544) )
      LOWORD(CurrentThread) = *(_WORD *)(CurrentThread + 584);
    else
      LOWORD(CurrentThread) = v7->PrimaryGroup;
LABEL_5:
    LOWORD(v33) = CurrentThread;
    goto LABEL_6;
  }
  if ( !(unsigned int)KeIsSubsetAffinityEx(a2, &v7->Affinity) )
    KiExtendProcessAffinity(v7, a2);
  CurrentThread = v7->PrimaryGroup;
  if ( (unsigned __int16)CurrentThread < *a2 && *(_QWORD *)&a2[4 * CurrentThread + 4] )
    goto LABEL_5;
  ExGenRandom(1LL);
  v25 = KiComputeGroupMask(a2);
  LOWORD(CurrentThread) = KiFindBiasedSetMember(v25, v26);
  LOWORD(v33) = CurrentThread;
LABEL_6:
  if ( (unsigned __int16)CurrentThread >= *a2 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)&a2[4 * (unsigned __int16)CurrentThread + 4];
  v32 = v10;
  KiCopyAffinityEx(*(_QWORD *)(a1 + 576), *(_WORD *)(*(_QWORD *)(a1 + 576) + 2LL), a2);
  KiCopyAffinityEx(*(_QWORD *)(a1 + 552), *(_WORD *)(*(_QWORD *)(a1 + 552) + 2LL), a2);
  *(_WORD *)(a1 + 584) = CurrentThread;
  *(_WORD *)(a1 + 560) = CurrentThread;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v11 = *a3;
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0);
  }
  else
  {
    v11 = (unsigned __int16)KeSelectInitialIdealProcessorForThread(v7, &v32);
  }
  *(_DWORD *)(a1 + 196) = v11;
  p_ThreadListHead = &v7->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v11;
  v13 = KiProcessorBlock[v11];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v7 != (_KPROCESS *)&KiInitialProcess )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel(&KiProcessListLock, &LockHandle);
    v23 = (_LIST_ENTRY **)qword_140C42308;
    p_ProcessListEntry = &v7->ProcessListEntry;
    if ( *(__int64 **)qword_140C42308 != &KiProcessListHead )
      goto LABEL_51;
    v7->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140C42308;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v23 = p_ProcessListEntry;
    qword_140C42308 = (__int64)&v7->ProcessListEntry;
    KxReleaseQueuedSpinLock(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v7->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v7->QuantumReset;
  v15 = *(_DWORD *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v16 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v15 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v16;
  KiAcquireKobjectLockSafe(v7);
  Blink = v7->ThreadListHead.Blink;
  v19 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_51:
    __fastfail(3u);
  v19->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v19;
  v7->ThreadListHead.Blink = v19;
  _InterlockedAnd(&v7->Header.Lock, 0xFFFFFF7F);
  if ( v7->FreezeCount )
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, 0LL);
  if ( (*(_DWORD *)&v7->0 & 8) != 0 )
  {
    LOBYTE(v17) = 1;
    KiFreezeSingleThread(KeGetCurrentPrcb(), a1, v17);
  }
  *(_QWORD *)(a1 + 104) = v7->SchedulingGroup;
  if ( v7->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v13, a1);
  if ( v7->PerProcessorCycleTimes )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x17u);
  KiInitializeForegroundBoostThread(a1);
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = v7->ProcessTimerDelay;
  if ( dword_140D1D394 < (unsigned int)KiHgsPlusConfiguration )
  {
    *(_BYTE *)(a1 + 516) = dword_140D1D394;
    if ( dword_140D1D394 < (unsigned int)KiHgsPlusConfiguration )
      *(_BYTE *)(a1 + 516) = dword_140D1D394;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v7->ProcessLock);
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = CurrentPrcb->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(
               a1,
               1350LL,
               0xFFFFFFFFLL,
               v11,
               v32,
               v33,
               LockHandle.LockQueue.Next,
               LockHandle.LockQueue.Lock,
               *(_QWORD *)&LockHandle.OldIrql);
  if ( _bittest((const signed __int32 *)&xmmword_140D1EAD0, 0x1Bu) )
    result = EtwTraceIdealProcessor(
               a1,
               1351LL,
               0xFFFFFFFFLL,
               v11,
               v32,
               v33,
               LockHandle.LockQueue.Next,
               LockHandle.LockQueue.Lock,
               *(_QWORD *)&LockHandle.OldIrql);
  _InterlockedExchangeAdd(&v7->StackCount.Value, 8u);
  return result;
}
