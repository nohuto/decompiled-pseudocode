/*
 * XREFs of _DeviceInfoTranslateStatusDefault @ 0x1C00221BC
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0021D40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C016E700 (NtUserDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     _QdcSdcTranslateStatusDefault @ 0x1C00221EC (_QdcSdcTranslateStatusDefault.c)
 */

__int64 __fastcall DeviceInfoTranslateStatusDefault(int a1, unsigned int a2)
{
  if ( (unsigned int)(a1 - 7) >= 2
    || a2 != -1073741811 && a2 != -1073741790 && a2 != -1073741649 && a2 != -1073741637 && a2 != -1073741632 )
  {
    return (unsigned int)QdcSdcTranslateStatusDefault(a2);
  }
  return a2;
}
