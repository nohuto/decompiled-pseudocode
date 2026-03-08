/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C009D22C
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C009CC40 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C0167FF0 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C009D450 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1C009D718 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(off_1C02C4038);
    if ( !(unsigned int)GetDWORDSettingValuesEx(2LL, off_1C02C4038, 13LL, 0LL) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValuesEx(3LL, off_1C02C4028, 1LL, 0LL) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
