/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B6840
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140866B78 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B685C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
