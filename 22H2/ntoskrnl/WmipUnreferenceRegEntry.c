/*
 * XREFs of WmipUnreferenceRegEntry @ 0x14032E244
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140371974 (WmipDeregisterRegEntry.c)
 *     WmipQueryWmiDataBlock @ 0x14065F9D0 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1406A25F4 (IoWMISystemControl.c)
 *     WmipForwardWmiIrp @ 0x1406B24CC (WmipForwardWmiIrp.c)
 *     WmipUpdateRegistration @ 0x140752FAC (WmipUpdateRegistration.c)
 *     WmipDeregisterDevice @ 0x140754674 (WmipDeregisterDevice.c)
 *     IoWMIRegistrationControl @ 0x140754720 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x1407547F8 (WmipRegisterDevice.c)
 *     WmipEventNotification @ 0x140755D00 (WmipEventNotification.c)
 *     WmipRegistrationWorker @ 0x14076C580 (WmipRegistrationWorker.c)
 *     WmipFreeTraceDeviceList @ 0x1407C1DA0 (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
