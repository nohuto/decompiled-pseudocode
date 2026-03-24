/*
 * XREFs of KeStartThread @ 0x140340A7C
 * Callers:
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     KiInitializeIdleThread @ 0x14099D954 (KiInitializeIdleThread.c)
 * Callees:
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140230760 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateThreadPriority @ 0x1402307C0 (KiUpdateThreadPriority.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KiFreezeSingleThread @ 0x14031539C (KiFreezeSingleThread.c)
 *     KeFirstGroupAffinityEx @ 0x14031B960 (KeFirstGroupAffinityEx.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140340EE4 (KiUpdateNodeAffinitizedFlag.c)
 *     KeSelectIdealProcessor @ 0x140340F98 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x14035E2C0 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiExtendProcessAffinity @ 0x14052433C (KiExtendProcessAffinity.c)
 *     EtwTraceIdealProcessor @ 0x1405A7784 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeStartThread(__int64 a1, __int128 *a2, unsigned int *a3)
{
  __int128 *v4; // rsi
  __int64 v6; // r14
  unsigned __int16 v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *v9; // rdi
  __int64 CurrentIrql; // rcx
  char BasePriority; // al
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int *v15; // r9
  unsigned int v16; // r14d
  _LIST_ENTRY *p_ThreadListHead; // rsi
  __int64 v18; // r15
  int QuantumReset; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v25; // rax
  unsigned __int8 v26; // r15
  __int64 result; // rax
  char v28; // dl
  char v29; // cl
  _LIST_ENTRY **v30; // rcx
  _LIST_ENTRY *p_ProcessListEntry; // rax
  unsigned __int64 v32; // r8
  char v33; // r11
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  char v40; // [rsp+20h] [rbp-50h]
  unsigned __int16 v41; // [rsp+24h] [rbp-4Ch] BYREF
  int v42; // [rsp+28h] [rbp-48h] BYREF
  __int64 v43; // [rsp+30h] [rbp-40h]
  int *v44; // [rsp+38h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v46; // [rsp+58h] [rbp-18h] BYREF

  v42 = 0;
  v44 = 0LL;
  v4 = a2;
  v46 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a3 && a2 && *(_QWORD *)a2 )
  {
    v6 = KeSelectNodeForAffinity(a2);
    v40 = v33;
    v7 = *(_WORD *)(v6 + 108);
  }
  else
  {
    v6 = 0LL;
    v40 = 1;
    v7 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v9 = *(_KPROCESS **)(a1 + 184);
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (4 * *(_DWORD *)&v9->0)) & 8;
  CurrentIrql = KeGetCurrentIrql();
  v43 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  BasePriority = v9->BasePriority;
  *(_BYTE *)(a1 + 563) = BasePriority;
  *(_BYTE *)(a1 + 195) = BasePriority;
  if ( v4 )
  {
    v32 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
    if ( !v32 || (v32 & *(_QWORD *)v4) != *(_QWORD *)v4 )
      KiExtendProcessAffinity(v9);
    if ( !*(_QWORD *)v4 )
      *(_QWORD *)v4 = v9->Affinity.Bitmap[*((unsigned __int16 *)v4 + 4)];
  }
  else
  {
    if ( v9 == CurrentThread->Process )
    {
      WORD4(v46) = CurrentThread->UserAffinity.Group;
      *(_QWORD *)&v46 = v9->Affinity.Bitmap[WORD4(v46)];
    }
    else
    {
      KeFirstGroupAffinityEx((__int64)&v46, &v9->Affinity.Count);
    }
    v4 = &v46;
  }
  *(_WORD *)(a1 + 584) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 576) = *(_QWORD *)v4;
  *(_WORD *)(a1 + 560) = *((_WORD *)v4 + 4);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)v4;
  KiUpdateNodeAffinitizedFlag(a1);
  if ( a3 )
  {
    v16 = *a3;
  }
  else
  {
    if ( !v6 )
    {
      v14 = *((unsigned __int16 *)v4 + 4);
      v7 = v9->ThreadSeed[v14];
      v6 = KeNodeBlock[v9->IdealNode[v14]];
      v42 = v9->IdealProcessor[v14];
      v44 = &v42;
    }
    v15 = v44;
    *(_QWORD *)v4 &= *(_QWORD *)(v6 + 136);
    v41 = v7;
    v16 = (unsigned __int16)KeSelectIdealProcessor(v6, v4, &v41, v15);
    if ( v40 )
      v9->ThreadSeed[*((unsigned __int16 *)v4 + 4)] = v41;
  }
  *(_DWORD *)(a1 + 196) = v16;
  p_ThreadListHead = &v9->ThreadListHead;
  *(_DWORD *)(a1 + 588) = v16;
  v18 = KiProcessorBlock[v16];
  if ( p_ThreadListHead->Flink == p_ThreadListHead && v9 != (_KPROCESS *)&KiInitialProcess )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)KiProcessListLock;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, KiProcessListLock);
    v30 = (_LIST_ENTRY **)qword_140C31C78;
    p_ProcessListEntry = &v9->ProcessListEntry;
    if ( *(__int64 **)qword_140C31C78 != &KiProcessListHead )
      goto LABEL_50;
    v9->ProcessListEntry.Blink = (struct _LIST_ENTRY *)qword_140C31C78;
    p_ProcessListEntry->Flink = (struct _LIST_ENTRY *)&KiProcessListHead;
    *v30 = p_ProcessListEntry;
    qword_140C31C78 = (__int64)&v9->ProcessListEntry;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  *(_DWORD *)(a1 + 120) ^= (*(_DWORD *)(a1 + 120) ^ (*(_DWORD *)&v9->0 << 6)) & 0x100;
  QuantumReset = (unsigned __int8)v9->QuantumReset;
  v20 = *(unsigned int *)(a1 + 120);
  *(_BYTE *)(a1 + 651) = QuantumReset;
  v21 = (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
  if ( (v20 & 0x20) != 0 )
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 5u);
  *(_QWORD *)(a1 + 32) = v21;
  KiAcquireKobjectLockSafe(&v9->Header.Lock, v20, v12, v13);
  Blink = v9->ThreadListHead.Blink;
  v25 = (struct _LIST_ENTRY *)(a1 + 760);
  if ( Blink->Flink != p_ThreadListHead )
LABEL_50:
    __fastfail(3u);
  v25->Flink = p_ThreadListHead;
  *(_QWORD *)(a1 + 768) = Blink;
  Blink->Flink = v25;
  v9->ThreadListHead.Blink = v25;
  _InterlockedAnd(&v9->Header.Lock, 0xFFFFFF7F);
  if ( (*(_DWORD *)&v9->0 & 8) != 0 )
    KiFreezeSingleThread((__int64)KeGetCurrentPrcb(), a1, v22, v23);
  *(_QWORD *)(a1 + 104) = v9->SchedulingGroup;
  if ( v9->SchedulingGroup )
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  KiUpdateSharedReadyQueueAffinityThread(v18, a1);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2 && !*(_BYTE *)(a1 + 564) && (*(_DWORD *)(a1 + 120) & 8) == 0 )
  {
    v28 = *(_BYTE *)(a1 + 195);
    if ( v28 > 0 )
    {
      v29 = PsPrioritySeparation + *(_BYTE *)(a1 + 563);
      if ( v29 >= 16 )
        v29 = 15;
      if ( v29 > v28 )
      {
        *(_BYTE *)(a1 + 564) = (v29 - v28) & 0xF;
        KiUpdateThreadPriority(0LL, a1, (_SINGLE_LIST_ENTRY *)(unsigned int)v29, 0);
        KiUpdateSharedReadyQueueAffinityThread(0LL, a1);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
    *(_DWORD *)(a1 + 952) = v9->ProcessTimerDelay;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)&v9->ProcessLock);
  v26 = v43;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v43 <= 0xFu && v35 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v37 = CurrentPrcb->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v43 + 1));
        v39 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  result = v26;
  __writecr8(v26);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    result = EtwTraceIdealProcessor(a1, 1350LL, 0xFFFFFFFFLL, v16);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      result = EtwTraceIdealProcessor(a1, 1351LL, 0xFFFFFFFFLL, v16);
  }
  _InterlockedExchangeAdd(&v9->StackCount.Value, 8u);
  return result;
}
