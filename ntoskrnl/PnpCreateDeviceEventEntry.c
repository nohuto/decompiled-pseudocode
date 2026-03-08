/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x140688A98
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140201FF4 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B1B9C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D071C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x140680D20 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x140683CA4 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x140688820 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140688958 (PnpSetCustomTargetEvent.c)
 *     PnpShutdownDevices @ 0x14094F28C (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1409616C0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140961730 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14096183C (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1409618D8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140961990 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCreateDeviceEventEntry(unsigned int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, a1, 1265659472LL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
