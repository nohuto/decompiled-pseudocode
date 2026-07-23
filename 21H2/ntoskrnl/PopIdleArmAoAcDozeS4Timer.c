/*
 * XREFs of PopIdleArmAoAcDozeS4Timer @ 0x14057C458
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x14066DD84 (PopUmpoProcessPowerMessage.c)
 *     PopUpdateSystemIdleContext @ 0x1408F1404 (PopUpdateSystemIdleContext.c)
 *     PopIdleCsStateChanged @ 0x1408F5794 (PopIdleCsStateChanged.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1408F586C (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopIdleChooseDozeS4Time @ 0x14057C59C (PopIdleChooseDozeS4Time.c)
 *     PopIsDozeSupported @ 0x14066EA68 (PopIsDozeSupported.c)
 *     PopFilterCapabilities @ 0x14066EBC4 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleS0LowPowerDozeTimerArmed @ 0x1408EC944 (PopTraceSystemIdleS0LowPowerDozeTimerArmed.c)
 */

__int64 PopIdleArmAoAcDozeS4Timer()
{
  __int64 result; // rax
  char v1; // di
  unsigned __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v5; // zf
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v7; // [rsp+80h] [rbp+8h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = 0LL;
  v7 = 0;
  memset(v6, 0, 0x4CuLL);
  PopFilterCapabilities(&PopCapabilities, v6);
  result = PopIsDozeSupported(v6);
  v1 = 0;
  if ( (_BYTE)result )
  {
    result = PopIdleChooseDozeS4Time(&v8, &v7);
    if ( (_BYTE)result )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
      if ( !byte_140C239A4 )
      {
        KeSetTimer2((__int64)&PopIdleAoAcDozeS4Timer, v8, 0LL, 0LL);
        v1 = 1;
        dword_140C239A8 = v7;
        byte_140C239A4 = 1;
      }
      KxReleaseSpinLock(&PopIdleAoAcDozeS4Lock);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
            v5 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= result;
            if ( v5 )
              result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v2);
      if ( v1 )
        return PopTraceSystemIdleS0LowPowerDozeTimerArmed(v7, v8);
    }
  }
  return result;
}
