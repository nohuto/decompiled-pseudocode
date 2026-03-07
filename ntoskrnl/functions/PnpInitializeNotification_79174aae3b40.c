LIST_ENTRY *PnpInitializeNotification()
{
  __int64 v0; // rcx
  _QWORD *v1; // rax
  LIST_ENTRY *result; // rax

  v0 = 13LL;
  v1 = &PnpDeviceClassNotifyList;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --v0;
  }
  while ( v0 );
  PnpDeviceClassNotifyLock.Count = 1;
  qword_140D54ED8 = (__int64)&PnpProfileNotifyList;
  PnpProfileNotifyList = &PnpProfileNotifyList;
  qword_140D54EA8 = (__int64)&PnpDeferredRegistrationList;
  PnpDeferredRegistrationList = &PnpDeferredRegistrationList;
  PnpDeviceClassNotifyLock.Event.Header.WaitListHead.Blink = &PnpDeviceClassNotifyLock.Event.Header.WaitListHead;
  PnpDeviceClassNotifyLock.Event.Header.WaitListHead.Flink = &PnpDeviceClassNotifyLock.Event.Header.WaitListHead;
  PnpTargetDeviceNotifyLock.Event.Header.WaitListHead.Blink = &PnpTargetDeviceNotifyLock.Event.Header.WaitListHead;
  PnpTargetDeviceNotifyLock.Event.Header.WaitListHead.Flink = &PnpTargetDeviceNotifyLock.Event.Header.WaitListHead;
  PnpHwProfileNotifyLock.Event.Header.WaitListHead.Blink = &PnpHwProfileNotifyLock.Event.Header.WaitListHead;
  PnpHwProfileNotifyLock.Event.Header.WaitListHead.Flink = &PnpHwProfileNotifyLock.Event.Header.WaitListHead;
  result = &PnpDeferredRegistrationLock.Event.Header.WaitListHead;
  PnpDeferredRegistrationLock.Event.Header.WaitListHead.Blink = &PnpDeferredRegistrationLock.Event.Header.WaitListHead;
  PnpDeferredRegistrationLock.Event.Header.WaitListHead.Flink = &PnpDeferredRegistrationLock.Event.Header.WaitListHead;
  PnpDeviceClassNotifyLock.Owner = 0LL;
  PnpDeviceClassNotifyLock.Contention = 0;
  LOWORD(PnpDeviceClassNotifyLock.Event.Header.Lock) = 1;
  PnpDeviceClassNotifyLock.Event.Header.Size = 6;
  PnpDeviceClassNotifyLock.Event.Header.SignalState = 0;
  PnpTargetDeviceNotifyLock.Count = 1;
  PnpTargetDeviceNotifyLock.Owner = 0LL;
  PnpTargetDeviceNotifyLock.Contention = 0;
  LOWORD(PnpTargetDeviceNotifyLock.Event.Header.Lock) = 1;
  PnpTargetDeviceNotifyLock.Event.Header.Size = 6;
  PnpTargetDeviceNotifyLock.Event.Header.SignalState = 0;
  PnpHwProfileNotifyLock.Count = 1;
  PnpHwProfileNotifyLock.Owner = 0LL;
  PnpHwProfileNotifyLock.Contention = 0;
  LOWORD(PnpHwProfileNotifyLock.Event.Header.Lock) = 1;
  PnpHwProfileNotifyLock.Event.Header.Size = 6;
  PnpHwProfileNotifyLock.Event.Header.SignalState = 0;
  PnpDeferredRegistrationLock.Count = 1;
  PnpDeferredRegistrationLock.Owner = 0LL;
  PnpDeferredRegistrationLock.Contention = 0;
  LOWORD(PnpDeferredRegistrationLock.Event.Header.Lock) = 1;
  PnpDeferredRegistrationLock.Event.Header.Size = 6;
  PnpDeferredRegistrationLock.Event.Header.SignalState = 0;
  return result;
}
