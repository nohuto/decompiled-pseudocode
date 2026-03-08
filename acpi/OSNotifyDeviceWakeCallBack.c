/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C0033670
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C0032FFC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0033280 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C003348C (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C0044CC8 (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C0044B4C (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( (_QWORD *)*a4 == a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        2,
        21,
        29,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        (char)a4);
  }
  else
  {
    ACPIWakeCompleteRequestQueue(a4);
  }
  ExFreePoolWithTag(a4, 0);
}
