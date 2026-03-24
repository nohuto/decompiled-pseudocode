/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1403A2C00
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x14078B430 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407BA2A8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PpmPerfClearBootOverrides()
{
  __int64 result; // rax

  result = 0LL;
  if ( PpmPerfBootHeteroPolicyOverrideEnabled )
  {
    PpmPerfBootHeteroPolicyOverrideEnabled = 0;
    if ( PopHeteroSystem )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      return PpmReinitializeHeteroEngine(0LL);
    }
  }
  return result;
}
