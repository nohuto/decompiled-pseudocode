/*
 * XREFs of PpmPerfClearBootOverrides @ 0x1402D1A5C
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x14075DD70 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopSetupHighPerfPowerRequest @ 0x140810204 (PopSetupHighPerfPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
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
      PpmAcquireLock(&PpmPerfPolicyLock);
      return PpmReinitializeHeteroEngine(0LL, 0LL);
    }
  }
  return result;
}
