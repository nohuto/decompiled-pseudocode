/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x140822BE4
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     PpmPerfClearBootOverrides @ 0x14036D1E4 (PpmPerfClearBootOverrides.c)
 *     PpmEndHighPerfRequest @ 0x14036E4A0 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14036E924 (PpmBeginHighPerfRequest.c)
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
