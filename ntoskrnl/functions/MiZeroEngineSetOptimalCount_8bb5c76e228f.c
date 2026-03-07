void __fastcall MiZeroEngineSetOptimalCount(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v5; // rbp
  __int64 v6; // r15
  KIRQL v7; // al
  int v8; // edx
  unsigned __int64 v9; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v12; // eax
  _DWORD *SchedulerAssist; // r8
  bool v14; // zf

  v2 = *(_QWORD *)(a1 + 168);
  v5 = *(_QWORD *)(v2 + 48);
  v6 = *(_QWORD *)(v5 + 16) + 25408LL * *(unsigned int *)(v2 + 56);
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 23160));
  v8 = 1;
  v9 = v7;
  if ( *(_DWORD *)(a1 + 104) == *(_DWORD *)(v2 + 56) )
    v8 = a2;
  *(_DWORD *)(a1 + 8) = v8;
  if ( !*(_BYTE *)(a1 + 24) )
    *(_BYTE *)(a1 + 24) = 1;
  if ( *(_BYTE *)(a1 + 25) )
  {
    *(_BYTE *)(a1 + 25) = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 16484), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v5 + 16488), 0, 0);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23160));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
}
