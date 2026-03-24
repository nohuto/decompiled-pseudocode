/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1403A3300
 * Callers:
 *     PopPerfBoostPowerRequest @ 0x14078B530 (PopPerfBoostPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B9AE8 (PpmReinitializeHeteroEngine.c)
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
