/*
 * XREFs of PnpCreateDeviceEventEntry @ 0x14079487C
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x140321A6C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x1403B685C (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403D5A18 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x140685ED4 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x140794534 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x140794604 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14079473C (PnpSetCustomTargetEvent.c)
 *     PnpShutdownDevices @ 0x1409522AC (PnpShutdownDevices.c)
 *     PnpSetBlockedDriverEvent @ 0x1409646E0 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x140964750 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x14096485C (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1409648F8 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1409649B0 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCreateDeviceEventEntry(unsigned int a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, a1, 1265659472LL);
  if ( result )
    *(_DWORD *)(result + 64) = 1;
  return result;
}
