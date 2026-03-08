/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x140874858
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140875D30 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14095CA98 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095CBE0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14095FD04 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x140B5ACF8 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x140686898 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _DWORD *a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        const wchar_t *a9,
        unsigned int a10,
        int a11)
{
  int v11; // eax

  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v11 = a11 | 0x20000;
  else
    v11 = a11;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v11);
}
