/*
 * XREFs of MiFindLastSubsection @ 0x1402A5010
 * Callers:
 *     MiCanFileBeTruncatedInternal @ 0x1402A492C (MiCanFileBeTruncatedInternal.c)
 *     MiComputeDataFlushRange @ 0x1403324D0 (MiComputeDataFlushRange.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 *     MmFlushVirtualMemory @ 0x14075ED38 (MmFlushVirtualMemory.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFindLastSubsection(__int64 a1, int a2)
{
  KIRQL v3; // bl
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  if ( a2 )
    v3 = 17;
  else
    v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v4 = *(_QWORD *)(a1 + 280);
  v5 = 0LL;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 8);
  }
  v6 = v5 - 56;
  if ( v3 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (v3 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  return v6;
}
