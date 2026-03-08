/*
 * XREFs of IoSetDeviceInterfacePropertyData @ 0x14086B810
 * Callers:
 *     <none>
 * Callees:
 *     PnpSetDeviceInterfacePropertyData @ 0x14086B858 (PnpSetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall IoSetDeviceInterfacePropertyData(int a1, int a2, int a3, __int64 a4, int a5, int a6, __int64 a7)
{
  return PnpSetDeviceInterfacePropertyData(
           a1,
           a2,
           a3,
           a5 & (unsigned int)-(a7 != 0),
           a5 & (unsigned int)-(a7 != 0),
           a6 & (unsigned int)-(a7 != 0),
           a7);
}
