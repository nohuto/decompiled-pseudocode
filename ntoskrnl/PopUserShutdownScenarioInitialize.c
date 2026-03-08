/*
 * XREFs of PopUserShutdownScenarioInitialize @ 0x140B46CF0
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage @ 0x14040B7EC (Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage.c)
 *     PdcTaskClientRegister @ 0x14080F930 (PdcTaskClientRegister.c)
 */

__int64 __fastcall PopUserShutdownScenarioInitialize(int a1)
{
  if ( a1 == 1 )
  {
    Feature_DisableAutoUserShutdownTimeout__private_ReportDeviceUsage();
  }
  else if ( (int)PdcTaskClientRegister(120, &PopUserShutdownTaskClient) < 0 )
  {
    PopUserShutdownTaskClient = 0LL;
  }
  return 0LL;
}
