/*
 * XREFs of PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140566AB4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F01AC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140566B9C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingResiliencyUpdate(char a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 i; // rax
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  result = PpmPlatformStates;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v5 = 0LL;
    for ( i = PpmPlatformStates; (unsigned int)v5 < *(_DWORD *)PpmPlatformStates; v5 = (unsigned int)(v5 + 1) )
    {
      LOBYTE(v3) = 2;
      v7 = 384 * v5;
      LOBYTE(v7) = a1;
      PpmIdleCsVetoAccountingUpdateBlock(384 * v5 + i + 80, v3, v7);
      i = PpmPlatformStates;
    }
    KxReleaseSpinLock(&PpmIdleVetoLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v10 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
  }
  return result;
}
