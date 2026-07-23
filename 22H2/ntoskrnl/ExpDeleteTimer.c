/*
 * XREFs of ExpDeleteTimer @ 0x14025FA00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KeCancelTimer @ 0x14025FAA0 (KeCancelTimer.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     PsRemoveVirtualizedTimer @ 0x1402F1444 (PsRemoveVirtualizedTimer.c)
 *     PoDestroyReasonContext @ 0x14034BC54 (PoDestroyReasonContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

BOOLEAN __fastcall ExpDeleteTimer(PKTIMER a1)
{
  LIST_ENTRY *p_WaitListHead; // r14
  KIRQL v3; // al
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  struct _KTHREAD *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v12; // dl
  __int64 v13; // rsi
  int SessionId; // eax
  bool v15; // zf
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *v19; // rbx
  unsigned __int8 v20; // r14
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rsi
  unsigned int v24; // ecx
  unsigned __int8 v25; // al
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v29; // eax
  _DWORD *SchedulerAssist; // r8
  PVOID P; // [rsp+30h] [rbp-58h]

  p_WaitListHead = &a1[4].Header.WaitListHead;
  if ( !a1[4].Header.WaitListHead.Flink )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  P = *(PVOID *)&a1[4].Header.Lock;
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  --v8->SpecialApcDisable;
  if ( ++v8->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v8, (ULONG_PTR)&ExpWakeTimerLock, KeGetCurrentIrql(), 0LL);
  LOBYTE(v9) = v8->AbEntrySummary;
  v10 = -1;
  if ( !(_BYTE)v9 )
  {
    if ( !v8->AbOrphanedEntrySummary )
    {
      v13 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v8, &ExpWakeTimerLock);
      goto LABEL_18;
    }
    AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
    v8->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = AbOrphanedEntrySummary | v8->AbEntrySummary;
  }
  v12 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  v8->AbEntrySummary = v12 & ~(1 << v9);
  v13 = (__int64)&v8->LockEntries[v9];
  if ( !v13 )
  {
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0x10u);
    goto LABEL_21;
  }
  if ( (unsigned __int64)&ExpWakeTimerLock >= 0xFFFF800000000000uLL
    && byte_140C4F9C8[(((unsigned __int64)&ExpWakeTimerLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx(v8->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  *(_DWORD *)(v13 + 40) = SessionId;
  *(_QWORD *)(v13 + 32) = (unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL;
LABEL_21:
  --v8->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v8);
  v15 = v8->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v13, &ExpWakeTimerLock);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  Flink = p_WaitListHead->Flink;
  Blink = p_WaitListHead->Blink;
  if ( p_WaitListHead->Flink->Blink != p_WaitListHead || Blink->Flink != p_WaitListHead )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WaitListHead->Flink = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&ExpWakeTimerLock);
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(&ExpWakeTimerLock) == 1 )
    v10 = MmGetSessionIdEx(v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v20 = ++v19->AbAllocationRegionCount;
  v21 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v22, v21);
    if ( v15 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v21 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&ExpWakeTimerLock & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v10 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v23);
          v24 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          *(_DWORD *)(v23 + 88) = v24;
          *(_QWORD *)(v23 + 32) = 0LL;
          v25 = 1 << ((char)(v23 - LOBYTE(v19->LockEntries)) / 96);
          if ( v20 == 1 )
            v19->AbEntrySummary |= v25;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, v25);
          goto LABEL_46;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, (ULONG_PTR)&ExpWakeTimerLock, v10, 0LL);
LABEL_46:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19);
  v15 = v19->SpecialApcDisable++ == -1;
  if ( v15 && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v26);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( P )
    PoDestroyReasonContext(P);
LABEL_2:
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&a1[1]);
  v5 = v3;
  if ( a1[4].DueTime.QuadPart )
  {
    LOBYTE(v4) = v3;
    PsRemoveVirtualizedTimer(&a1[4].DueTime, &a1[4].TimerListEntry, &a1[1], v4);
  }
  else
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&a1[1]);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = (v29 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v29;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return KeCancelTimer(a1);
}
