void __fastcall MiDeleteProcessLargePageCache(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp
  KIRQL v3; // al
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v1 = *(_QWORD **)(*(_QWORD *)(a1 + 1680) + 328LL);
  if ( v1 )
  {
    v2 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 1838));
    v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 16084));
    v4 = (_QWORD *)v1[1];
    v5 = v3;
    v6 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v4 != v1 )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 16084));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
    MiPruneProcessLargePageCaches(v2, 0LL);
    ExFreePoolWithTag(v1, 0);
  }
}
