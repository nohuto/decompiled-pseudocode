/*
 * XREFs of WER_UpdateThrottlePolicy @ 0x1C003C70C
 * Callers:
 *     WER_CreateReport @ 0x1C003CA80 (WER_CreateReport.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryDeviceWerThrottleMask @ 0x1C0081D10 (HUBREG_QueryDeviceWerThrottleMask.c)
 *     HUBREG_WriteDeviceWerThrottleMask @ 0x1C0081F18 (HUBREG_WriteDeviceWerThrottleMask.c)
 */

__int64 __fastcall WER_UpdateThrottlePolicy(__int64 a1, char a2, __int64 a3)
{
  unsigned int DeviceWerThrottleMask; // eax
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-10h]

  DeviceWerThrottleMask = HUBREG_QueryDeviceWerThrottleMask(a1, a3);
  result = HUBREG_WriteDeviceWerThrottleMask(a1, (1 << (a2 & 0x1F)) | DeviceWerThrottleMask, a3);
  if ( (int)result < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = result;
    return WPP_RECORDER_SF_d(a3, 2u, 5u, 0xAu, (__int64)&WPP_da8d3c15072a309c1475fbd55ea34768_Traceguids, v8);
  }
  return result;
}
