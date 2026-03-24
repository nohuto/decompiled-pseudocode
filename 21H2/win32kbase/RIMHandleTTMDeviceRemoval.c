/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C0182344
 * Callers:
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1)
{
  if ( !gbTtmEnabled )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 141);
  if ( !*(_DWORD *)(a1 + 1320) )
    TtmNotifyDeviceDeparture(2LL, a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d((_DWORD)gRimLog, 4, 1, 13, (__int64)&WPP_aac38269f52f3d1812b82afa174c5f16_Traceguids, 0);
  return 0LL;
}
