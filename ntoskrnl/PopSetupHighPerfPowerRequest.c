/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x140810204
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1402B884C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1402B8BBC (PpmBeginHighPerfRequest.c)
 *     PpmPerfClearBootOverrides @ 0x1402D1A5C (PpmPerfClearBootOverrides.c)
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
  PpmPerfClearBootOverrides();
  return (unsigned int)v0;
}
