/*
 * XREFs of PopFxLockDevice @ 0x1402B91F4
 * Callers:
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 *     PoFxNotifySurprisePowerOn @ 0x140585B10 (PoFxNotifySurprisePowerOn.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408803F8 (PopFxUnregisterDeviceOrWait.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxLockDevice(__int64 a1, char a2)
{
  __int64 v4; // rdi
  KIRQL v5; // al
  unsigned __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v4 = 0LL;
  if ( a1 )
  {
    v5 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 88));
    v4 = *(_QWORD *)(a1 + 80);
    v6 = v5;
    if ( !a2
      || (_m_prefetchw((const void *)(a1 + 296)), (_InterlockedOr((volatile signed __int32 *)(a1 + 296), 0) & 4) != 0) )
    {
      if ( v4 && IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 240), 0LL, &Src, 1u, 0x20u) < 0 )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 88));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  return v4;
}
