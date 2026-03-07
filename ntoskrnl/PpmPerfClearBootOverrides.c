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
