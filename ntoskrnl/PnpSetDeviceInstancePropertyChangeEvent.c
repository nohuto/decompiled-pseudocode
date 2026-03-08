/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1403B1B80
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140863B28 (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B1B9C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
