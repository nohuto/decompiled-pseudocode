/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0049950
 * Callers:
 *     ReadPointerDeviceSettingsFull @ 0x1C0047820 (ReadPointerDeviceSettingsFull.c)
 *     GetPenDoubleClickTime @ 0x1C01F3A04 (GetPenDoubleClickTime.c)
 *     GetPenHoldTime @ 0x1C01F3A50 (GetPenHoldTime.c)
 * Callees:
 *     <none>
 */

__int64 LoadPointerDevicePenSettings(void)
{
  __int64 result; // rax

  if ( !(unsigned int)GetDWORDSettingValues(4LL, off_1C0354038, 8LL) )
    return 0LL;
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
