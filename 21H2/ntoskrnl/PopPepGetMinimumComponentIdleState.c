/*
 * XREFs of PopPepGetMinimumComponentIdleState @ 0x1405749C0
 * Callers:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14056CAC4 (PopFxSetDeviceAccountingCsPlatformState.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall PopPepGetMinimumComponentIdleState(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v5; // r13
  char v6; // di
  int v8; // r14d
  KIRQL v9; // al
  int v10; // r15d
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned int v17; // edx
  unsigned int v18; // r8d

  v5 = a2;
  v6 = 0;
  v8 = 1 << a3;
  v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 172);
  v11 = v9;
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
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v10 == 2 )
  {
    v17 = 0;
    v18 = *(_DWORD *)(200 * v5 + a1 + 372);
    if ( v18 )
    {
      do
      {
        if ( (v8 & *(_DWORD *)(*(_QWORD *)(200 * v5 + a1 + 376) + 24LL * v17 + 16)) == 0 )
          break;
        ++v17;
      }
      while ( v17 < v18 );
    }
    if ( v17 < v18 )
    {
      *a4 = v17;
      return 1;
    }
  }
  return v6;
}
