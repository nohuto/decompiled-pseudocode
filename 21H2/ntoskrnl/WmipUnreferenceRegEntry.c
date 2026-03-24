/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1402650E4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140371194 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x1406396EC (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x140682580 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1406BFA04 (IoWMISystemControl.c)
 *     WmipUpdateRegistration @ 0x1407537BC (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140754E84 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140754F30 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140755008 (WmipRegisterDevice.c)
 *     WmipEventNotification @ 0x140756510 (WmipEventNotification.c)
 *     WmipRegistrationWorker @ 0x14076CDB0 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x1407C15E0 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
