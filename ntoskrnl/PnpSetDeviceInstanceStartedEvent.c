/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x140201FD8
 * Callers:
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 * Callees:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140201FF4 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
