void __fastcall HalpIommuFreeDomainId(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  if ( !HalpHvIommu )
  {
    v4 = (volatile signed __int64 *)(a1 + 464);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 464));
    *(_BYTE *)(*(_QWORD *)(a1 + 480) + ((unsigned __int64)a2 >> 3)) &= ~(1 << (a2 & 7));
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
  }
}
