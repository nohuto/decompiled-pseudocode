/*
 * XREFs of MiReplenishSlabAllocatorWorker @ 0x14034A100
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReplenishSlabAllocator @ 0x1403496D8 (MiReplenishSlabAllocator.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReplenishSlabAllocatorWorker(__int64 a1)
{
  unsigned __int64 v1; // rdx
  volatile LONG *v3; // rbp
  KIRQL v4; // al
  __int64 *v5; // rsi
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 < 0x200 )
    v1 = 512LL;
  MiReplenishSlabAllocator((_QWORD *)a1, v1);
  v3 = (volatile LONG *)(a1 + 16);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 16));
  *(_QWORD *)(a1 + 240) = 0LL;
  v5 = (__int64 *)(a1 + 248);
  v6 = *(__int64 **)(a1 + 248);
  v7 = v4;
  while ( v6 != v5 )
  {
    KeSetEvent((PRKEVENT)(v6 + 2), 0, 0);
    v6 = (__int64 *)*v6;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
}
