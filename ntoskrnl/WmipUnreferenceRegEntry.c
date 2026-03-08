/*
 * XREFs of WmipUnreferenceRegEntry @ 0x140208DE4
 * Callers:
 *     WmipDeregisterRegEntry @ 0x1403CEEF0 (WmipDeregisterRegEntry.c)
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 *     WmipQueryWmiDataBlock @ 0x140725910 (WmipQueryWmiDataBlock.c)
 *     IoWMISystemControl @ 0x1407939D4 (IoWMISystemControl.c)
 *     WmipFreeTraceDeviceList @ 0x140847BA8 (WmipFreeTraceDeviceList.c)
 *     WmipEventNotification @ 0x1408526D0 (WmipEventNotification.c)
 *     WmipUpdateRegistration @ 0x14085F310 (WmipUpdateRegistration.c)
 *     IoWMIRegistrationControl @ 0x140869750 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x140869828 (WmipRegisterDevice.c)
 *     WmipRegistrationWorker @ 0x14086D070 (WmipRegistrationWorker.c)
 *     WmipDeregisterDevice @ 0x14087DDC8 (WmipDeregisterDevice.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 */

LONG __fastcall WmipUnreferenceRegEntry(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
