/*
 * XREFs of ExpTimerApcRoutine @ 0x140300160
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpTimerApcRoutine(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = a1 - 72;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 72 + 64));
  if ( (*(_BYTE *)(v3 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v3 + 80) )
  {
    if ( !*(_DWORD *)(v3 + 240) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
      v6 = *(_QWORD *)(v3 + 224);
      v7 = *(_QWORD **)(v3 + 232);
      if ( *(_QWORD *)(v6 + 8) != v3 + 224 || *v7 != v3 + 224 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      KxReleaseSpinLock((volatile signed __int64 *)&CurrentThread[1].StackLimit);
      *(_BYTE *)(v3 + 304) &= ~1u;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(v3 + 64));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  return ObfDereferenceObjectWithTag((PVOID)v3, 0x746C6644u);
}
