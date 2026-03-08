/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C00D47F0
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C002834C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1)
{
  return DrvDisplayConfigGetDeviceInfoInternal(a1, 0);
}
