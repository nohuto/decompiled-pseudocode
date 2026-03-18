/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14087C2AC
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x1407D94D0 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1408446E0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgProcessDevice @ 0x14087A6C0 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x14087C44C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095E5A0 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x1409629AC (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140962D24 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096346C (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14087CBD4 (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return PiPnpRtlSetDeviceRegProperty(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
