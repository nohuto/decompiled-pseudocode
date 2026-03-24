/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C000C3FC
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C000D080 (ReadPointerDeviceSettings.c)
 *     GetTouchTimeFromCPLValue @ 0x1C0127AD0 (GetTouchTimeFromCPLValue.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C000C4A0 (GetDWORDSettingValuesEx.c)
 *     ApiSetEditionOverrideDefaultTouchGestureSettings @ 0x1C000C6B8 (ApiSetEditionOverrideDefaultTouchGestureSettings.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  __int64 result; // rax

  if ( !gTouchMonitor )
  {
    ApiSetEditionOverrideDefaultTouchGestureSettings(off_1C02450F8);
    if ( !(unsigned int)GetDWORDSettingValuesEx(2LL, off_1C02450F8, 13LL) )
      return 0LL;
  }
  if ( !gMultiTouchMonitor && !(unsigned int)GetDWORDSettingValuesEx(3LL, off_1C02450E8, 1LL) )
    return 0LL;
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
