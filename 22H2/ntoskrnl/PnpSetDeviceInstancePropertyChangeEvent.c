/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14037DFAC
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14074307C (PnpSetDevicePropertyData.c)
 * Callees:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037DFC8 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
