/*
 * XREFs of ExInitializeExternalBootSupport @ 0x140B44DE8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

__int64 ExInitializeExternalBootSupport()
{
  __int64 result; // rax

  LOWORD(ExBootDevicesRemovedEvent.Header.Lock) = 1;
  ExNumMissingBootDevices = 0;
  qword_140C2D2A8 = (__int64)&ExBootDeviceList;
  ExBootDeviceList = (__int64)&ExBootDeviceList;
  ExBootDevicesRemovedEvent.Header.WaitListHead.Blink = &ExBootDevicesRemovedEvent.Header.WaitListHead;
  ExBootDevicesRemovedEvent.Header.WaitListHead.Flink = &ExBootDevicesRemovedEvent.Header.WaitListHead;
  ExExternalBootSupportInitializationEvent.Header.WaitListHead.Blink = &ExExternalBootSupportInitializationEvent.Header.WaitListHead;
  ExExternalBootSupportInitializationEvent.Header.WaitListHead.Flink = &ExExternalBootSupportInitializationEvent.Header.WaitListHead;
  result = 0LL;
  ExBootDeviceRemovalHandler = 0LL;
  ExBootDeviceListSpinLock = 0LL;
  ExBootDevicesRemovedEvent.Header.Size = 6;
  ExBootDevicesRemovedEvent.Header.SignalState = 0;
  LOWORD(ExExternalBootSupportInitializationEvent.Header.Lock) = 1;
  ExExternalBootSupportInitializationEvent.Header.Size = 6;
  ExExternalBootSupportInitializationEvent.Header.SignalState = 1;
  return result;
}
