/*
 * XREFs of PpmPerfClearBootOverrides @ 0x14036D1E4
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x1407E9D00 (PopPowerRequestCallbackPerfBoostRequired.c)
 *     PopSetupHighPerfPowerRequest @ 0x140822BE4 (PopSetupHighPerfPowerRequest.c)
 * Callees:
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140830CF8 (PpmReinitializeHeteroEngine.c)
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
      return PpmReinitializeHeteroEngine(0LL, 0LL);
    }
  }
  return result;
}
