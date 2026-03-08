/*
 * XREFs of IopFindPassiveInterruptBlock @ 0x14039E808
 * Callers:
 *     IoProcessPassiveInterrupts @ 0x14039E784 (IoProcessPassiveInterrupts.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408472F4 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1409552AC (IopDestroyPassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x14039E868 (IopFindPassiveInterruptBlockLocked.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x14039E89C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopFindPassiveInterruptBlock(unsigned int a1)
{
  __int64 PassiveInterruptBlockLocked; // rdi
  unsigned __int8 v3; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int8 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  IopAcquireGlobalPassiveInterruptListLock(&v10);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(a1);
  KxReleaseSpinLock((volatile signed __int64 *)&PassiveInterruptListLock);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v3 = v10;
    if ( v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = v10;
      v8 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v3 = v10;
  }
  __writecr8(v3);
  return PassiveInterruptBlockLocked;
}
