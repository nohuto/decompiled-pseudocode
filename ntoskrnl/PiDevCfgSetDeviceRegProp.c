/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x140875718
 * Callers:
 *     PpDevCfgProcessDeviceOperations @ 0x14078AC6C (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842090 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgInitDeviceCallback @ 0x14095B580 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x14095F98C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14095FD04 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14096044C (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x140876040 (PiPnpRtlSetDeviceRegProperty.c)
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
