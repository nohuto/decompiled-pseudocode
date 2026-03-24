/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x1407D4A40
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmEndHighPerfRequest @ 0x1403A6C60 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1403A79D0 (PpmBeginHighPerfRequest.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B9AE8 (PpmReinitializeHeteroEngine.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  int v0; // ebx

  if ( PpmHighPerfDuration[0] )
  {
    v0 = PpmBeginHighPerfRequest();
    if ( v0 >= 0 )
    {
      PpmEndHighPerfRequest(0);
      return (unsigned int)v0;
    }
  }
  else
  {
    v0 = 0;
  }
  PpmPerfBootHeteroPolicyOverrideEnabled = 0;
  if ( PopHeteroSystem )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmReinitializeHeteroEngine(0);
  }
  return (unsigned int)v0;
}
