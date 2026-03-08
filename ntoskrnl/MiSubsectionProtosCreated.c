/*
 * XREFs of MiSubsectionProtosCreated @ 0x14063D324
 * Callers:
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiPurgeFileOnlyPfn @ 0x14063CAD0 (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiSubsectionProtosCreated(ULONG_PTR a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdi
  unsigned __int64 v9; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  int v13; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v4 = *(_QWORD *)a1;
  KeAbPostRelease(a1);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + 72));
  if ( (*(_DWORD *)(v4 + 56) & 0x20) != 0 )
  {
    v10 = *(__int64 **)(v4 + 80);
    *(_QWORD *)(v4 + 80) = 0LL;
  }
  else
  {
    if ( a4 )
    {
      *(_DWORD *)(a1 + 52) |= 0x40000000u;
    }
    else if ( a3 == *(_DWORD *)(a1 + 44) - (*(_DWORD *)(a1 + 52) & 0x3FFFFFFF) )
    {
      *(_DWORD *)(a1 + 52) &= ~0x40000000u;
    }
    v10 = *(__int64 **)(a1 + 24);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( v10 )
  {
    do
    {
      v11 = (__int64 *)*v10;
      if ( v10 != (__int64 *)a2 )
      {
        v12 = *((_DWORD *)v10 + 2);
        *((_DWORD *)v10 + 3) = 1;
        if ( (v12 & 0x40) == 0 )
        {
          v13 = 1;
          if ( (*(_DWORD *)(a2 + 8) & 0x100) != 0 )
            v13 = 2;
          *((_DWORD *)v10 + 3) = v13;
          KeSignalGate((__int64)(v10 + 2), 1u);
        }
      }
      v10 = v11;
    }
    while ( v11 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 72));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
}
