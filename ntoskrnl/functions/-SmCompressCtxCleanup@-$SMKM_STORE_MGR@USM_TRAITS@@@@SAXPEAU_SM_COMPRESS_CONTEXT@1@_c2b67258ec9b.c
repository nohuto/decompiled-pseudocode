void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxCleanup(PEX_SPIN_LOCK SpinLock)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v2 = ExAcquireSpinLockExclusive(SpinLock);
  *((_DWORD *)SpinLock + 22) = 0;
  v3 = v2;
  KeSetEvent((PRKEVENT)SpinLock + 1, 0, 0);
  KeSetEvent((PRKEVENT)SpinLock + 2, 0, 0);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)SpinLock + 15);
}
