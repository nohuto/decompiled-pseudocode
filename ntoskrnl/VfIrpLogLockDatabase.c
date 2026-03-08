/*
 * XREFs of VfIrpLogLockDatabase @ 0x140AD9844
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140AC0C04 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VfIrpLogLockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v7; // edx
  bool v8; // zf

  v1 = a1;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( *(_DWORD *)(ViIrpLogDatabase + 24 * v1) )
  {
    v3 = -1073741267;
  }
  else
  {
    *(_DWORD *)(ViIrpLogDatabase + 24 * v1) = 1;
    v3 = 0;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&ViIrpLogDatabaseLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v3;
}
