/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x1408757F4
 * Callers:
 *     PiDevCfgConfigureDeviceDriver @ 0x140875764 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     PiDevCfgCopyObjectProperties @ 0x140875D30 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140876A38 (PiDevCfgConfigureDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        int a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  result = PiDevCfgCopyObjectProperties(PiPnpRtlCtx, 0, 0, a3);
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, a7, a8);
  return result;
}
