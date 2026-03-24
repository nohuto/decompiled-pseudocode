/*
 * XREFs of UserDeactivateMITInputProcessingHelper @ 0x1C01B1FC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C01B1CF4 (-UninitializeInputSensors@@YAXXZ.c)
 */

void __fastcall UserDeactivateMITInputProcessingHelper(PDEVICE_OBJECT a1, char a2)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        25,
        (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
  UninitializeInputSensors((__int64)a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        26,
        (__int64)&WPP_df1c4b029be03b6c5997ec023b76ba85_Traceguids);
  }
}
