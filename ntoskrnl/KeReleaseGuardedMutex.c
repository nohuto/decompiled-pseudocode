/*
 * XREFs of KeReleaseGuardedMutex @ 0x1402CBD00
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 * Callees:
 *     ExpReleaseFastMutexContended @ 0x140239650 (ExpReleaseFastMutexContended.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __stdcall KeReleaseGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  unsigned __int64 OldIrql_low; // rdi
  signed __int32 v3; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  OldIrql_low = LOBYTE(Mutex->OldIrql);
  Mutex->Owner = 0LL;
  v3 = _InterlockedCompareExchange(&Mutex->Count, 1, 0);
  if ( v3 )
    ExpReleaseFastMutexContended(&Mutex->Count, v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)OldIrql_low <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql_low + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql_low);
  KeAbPostRelease((ULONG_PTR)Mutex);
}
