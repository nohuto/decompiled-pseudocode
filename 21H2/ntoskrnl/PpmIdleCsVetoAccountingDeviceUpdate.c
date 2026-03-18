/*
 * XREFs of PpmIdleCsVetoAccountingDeviceUpdate @ 0x1405C7DCC
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x1405CD1FC (PopFxPlatformStateAvailable.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1405C7F88 (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingDeviceUpdate(unsigned int a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  KIRQL v5; // al
  __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  result = PpmPlatformStates;
  v4 = a1;
  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    LOBYTE(v6) = a2;
    v7 = v5;
    LOBYTE(v8) = 1;
    PpmIdleCsVetoAccountingUpdateBlock(448 * v4 + PpmPlatformStates + 80, v8, v6);
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v11 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return result;
}
