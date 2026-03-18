/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x140322E90
 * Callers:
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140321A6C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance((unsigned __int16 *)(a1 + 40));
}
