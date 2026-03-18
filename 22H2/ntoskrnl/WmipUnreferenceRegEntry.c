/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14022AAD4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403D4480 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1406C7530 (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x1407ABB30 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1407E3064 (IoWMISystemControl.c)
 *     WmipFreeTraceDeviceList @ 0x14084A218 (WmipFreeTraceDeviceList.c)
 *     WmipEventNotification @ 0x140856900 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x140863464 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x14086C380 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14086C458 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x14086F590 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x140882A38 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
