/*
 * XREFs of PpmIdleCsVetoAccountingResiliencyUpdate @ 0x140582A50
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x14099507C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140582B3C (PpmIdleCsVetoAccountingUpdateBlock.c)
 */

__int64 __fastcall PpmIdleCsVetoAccountingResiliencyUpdate(char a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 i; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  result = PpmPlatformStates;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = 0;
    for ( i = PpmPlatformStates; v4 < *(_DWORD *)PpmPlatformStates; ++v4 )
    {
      v6 = v4;
      v7 = 448LL * v4;
      LOBYTE(v6) = 2;
      v8 = v7 + i + 80;
      LOBYTE(v7) = a1;
      PpmIdleCsVetoAccountingUpdateBlock(v8, v6, v7);
      i = PpmPlatformStates;
    }
    result = KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v3 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
  return result;
}
