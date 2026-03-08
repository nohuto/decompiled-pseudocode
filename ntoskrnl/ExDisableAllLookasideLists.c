/*
 * XREFs of ExDisableAllLookasideLists @ 0x140608E58
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140ABFCE8 (VfInitSystemNoRebootNeeded.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 ExDisableAllLookasideLists()
{
  KIRQL v0; // al
  __int64 *v1; // rdx
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  KIRQL v8; // al
  __int64 *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8

  ExMinimumLookasideDepth = 0;
  v0 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  v1 = (__int64 *)ExNPagedLookasideListHead;
  v2 = v0;
  while ( v1 != &ExNPagedLookasideListHead )
  {
    *((_DWORD *)v1 - 12) = -65536;
    v1 = (__int64 *)*v1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&ExNPagedLookasideLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  v8 = KeAcquireSpinLockRaiseToDpc(&ExPagedLookasideLock);
  v9 = (__int64 *)ExPagedLookasideListHead;
  v10 = v8;
  while ( v9 != &ExPagedLookasideListHead )
  {
    *((_DWORD *)v9 - 12) = -65536;
    v9 = (__int64 *)*v9;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&ExPagedLookasideLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v13 = v12->SchedulerAssist;
      v7 = ((unsigned int)result & v13[5]) == 0;
      v13[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
  }
  __writecr8(v10);
  return result;
}
