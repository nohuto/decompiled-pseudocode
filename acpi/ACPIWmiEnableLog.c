__int64 __fastcall ACPIWmiEnableLog(__int64 a1, unsigned int a2, int a3, int a4)
{
  _InterlockedExchange(&ACPIWmiTraceEnable, 1);
  if ( a2 >= 0x30 )
  {
    ACPIWmiLoggerHandle = *(_QWORD *)(a1 + 8);
    if ( ACPIWmiTraceGlobalEnable )
      ACPIWmiTraceGlobalEnable = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_IdDD(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  }
  return 0LL;
}
