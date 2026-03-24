/*
 * XREFs of UserActivateMITInputProcessingHelper @ 0x1C01B1E60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C01B1C58 (-InitializeInputSensors@@YAJXZ.c)
 */

__int64 UserActivateMITInputProcessingHelper()
{
  unsigned int v0; // ebx
  int v1; // edi

  v0 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      23,
      (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  if ( !gpIOCPDispatcher )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 376);
  v1 = InitializeInputSensors();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      24,
      (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  LOBYTE(v0) = v1 >= 0;
  return v0;
}
