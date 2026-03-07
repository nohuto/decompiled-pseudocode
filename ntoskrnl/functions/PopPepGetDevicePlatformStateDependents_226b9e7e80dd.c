char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rsi
  int *v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int i; // r8d
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  if ( *(_DWORD *)(a1 + 172) == 2 )
  {
    v5 = (int *)(a1 + 144);
    v6 = 3LL;
    do
    {
      v7 = *v5++;
      *a2 |= v7;
      --v6;
    }
    while ( v6 );
    for ( i = 0; i < *(_DWORD *)(a1 + 180); ++i )
    {
      v9 = 0LL;
      v10 = 208LL * i;
      if ( *(_DWORD *)(v10 + a1 + 380) )
      {
        do
        {
          v11 = 3 * v9;
          v9 = (unsigned int)(v9 + 1);
          *a2 |= *(_DWORD *)(*(_QWORD *)(v10 + a1 + 392) + 8 * v11 + 16);
        }
        while ( (unsigned int)v9 < *(_DWORD *)(v10 + a1 + 380) );
      }
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return 0;
}
