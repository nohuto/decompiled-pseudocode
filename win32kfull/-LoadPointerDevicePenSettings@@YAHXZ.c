/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C00F5D4C
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C0106DA0 (ReadPointerDeviceSettingsFull.c)
 *     GetPenDoubleClickTime @ 0x1C01F4C04 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1C01F4C50 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C0357038) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
