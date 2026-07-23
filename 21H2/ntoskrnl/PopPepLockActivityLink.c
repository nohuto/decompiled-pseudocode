/*
 * XREFs of PopPepLockActivityLink @ 0x140283448
 * Callers:
 *     PopPepProcessEvent @ 0x140282F54 (PopPepProcessEvent.c)
 *     PopPepCompleteComponentIdleState @ 0x1405743D4 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1405744DC (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1405745C8 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405746C0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepLockActivityLink(__int64 a1, volatile LONG *a2, unsigned int a3, unsigned int a4, KIRQL *a5)
{
  char v5; // si
  KIRQL v9; // al
  bool v10; // zf
  unsigned __int64 v11; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax

  v5 = 0;
  if ( !a2 || *(_DWORD *)(a1 + 180) == 1 )
    goto LABEL_3;
  if ( a3 == 6 )
  {
    if ( a4 == 6 )
      goto LABEL_3;
  }
  else if ( a3 <= 5 && ActivityAttributes[136 * a3] == 1 )
  {
    goto LABEL_3;
  }
  if ( a4 > 5 || ActivityAttributes[136 * a4] != 1 )
  {
    v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
    v10 = *(_BYTE *)(a1 + 125) == 1;
    v11 = v9;
    *a5 = v9;
    if ( !v10 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(a2);
      return v5;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v10 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
  }
LABEL_3:
  *a5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
  v5 = 1;
  *(_BYTE *)(a1 + 125) = 1;
  return v5;
}
