/*
 * XREFs of PpmPerfClearBootOverrides @ 0x140225D70
 * Callers:
 *     PopPowerRequestCallbackPerfBoostRequired @ 0x14069DD40 (PopPowerRequestCallbackPerfBoostRequired.c)
 * Callees:
 *     PpmAcquireLock @ 0x140224E90 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140848BE8 (PpmReinitializeHeteroEngine.c)
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
