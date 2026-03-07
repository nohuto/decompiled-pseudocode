__int64 __fastcall EmonReleaseProfileResources(_QWORD *a1)
{
  int v2; // edi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v2 = EmonReleaseProfileResourcesInternal(a1);
  if ( v2 >= 0 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&EmonReservedResourcesLock);
    v4 = (_QWORD *)a1[1];
    v5 = v3;
    v6 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v4 != a1 )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    KxReleaseSpinLock((volatile signed __int64 *)&EmonReservedResourcesLock);
    v7 = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = (unsigned int)(v5 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
    HalpMmAllocCtxFree(v7, (__int64)a1);
  }
  return (unsigned int)v2;
}
