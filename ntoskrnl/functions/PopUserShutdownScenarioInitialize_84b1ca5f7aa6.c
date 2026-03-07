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
