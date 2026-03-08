/*
 * XREFs of PopIdleCancelAoAcDozeS4Timer @ 0x14036D07C
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14073B5A4 (PopUmpoProcessPowerMessage.c)
 *     PopIdleGlobalUserPresenceCallback @ 0x1407F8050 (PopIdleGlobalUserPresenceCallback.c)
 *     PopUpdateSystemIdleContext @ 0x14082A808 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x140998E5C (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140998F8C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KeCancelTimer2 @ 0x140204390 (KeCancelTimer2.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x14098FD78 (PopTraceSystemIdleS0LowPowerDozeTimerCancelled.c)
 */

char __fastcall PopIdleCancelAoAcDozeS4Timer(unsigned int a1)
{
  char v2; // bl
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  _DWORD *v5; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  if ( byte_140C3C9C4 )
  {
    KeCancelTimer2((__int64)&PopIdleAoAcDozeS4Timer, 0LL, v4, v5);
    byte_140C3C9C4 = 0;
    v2 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopIdleAoAcDozeS4Lock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v2 )
    PopTraceSystemIdleS0LowPowerDozeTimerCancelled(a1);
  return v2;
}
