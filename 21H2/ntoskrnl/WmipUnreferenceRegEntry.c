/*
 * XREFs of WmipUnreferenceRegEntry @ 0x1402E0164
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403A5AF0 (WmipDeregisterRegEntry.c)
 *     WmipQueryWmiDataBlock @ 0x1406932C0 (WmipQueryWmiDataBlock.c)
 *     WmipEventNotification @ 0x14069A660 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x1406C81D4 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x1406C82F8 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x1406DAF30 (WmipRegistrationWorker.c)
 *     IoWMISystemControl @ 0x1406E5154 (IoWMISystemControl.c)
 *     WmipForwardWmiIrp @ 0x140783A9C (WmipForwardWmiIrp.c)
 *     WmipDeregisterDevice @ 0x140810420 (WmipDeregisterDevice.c)
 *     WmipFreeTraceDeviceList @ 0x14081AB2C (WmipFreeTraceDeviceList.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
