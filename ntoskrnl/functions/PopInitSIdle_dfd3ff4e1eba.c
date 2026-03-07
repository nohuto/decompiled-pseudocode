__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  _BYTE v3[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  return PopUpdateSystemIdleContext(a1);
}
