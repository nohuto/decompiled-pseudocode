/*
 * XREFs of WmipUnreferenceRegEntry @ 0x140253174
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140370CE4 (WmipDeregisterRegEntry.c)
 *     WmipQueryWmiDataBlock @ 0x1405E3F50 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x14061E914 (IoWMISystemControl.c)
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     WmipUpdateRegistration @ 0x14075397C (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140755044 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x1407550F0 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x1407551C8 (WmipRegisterDevice.c)
 *     WmipEventNotification @ 0x1407566D0 (WmipEventNotification.c)
 *     WmipRegistrationWorker @ 0x14076CF70 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x1407C1B00 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
