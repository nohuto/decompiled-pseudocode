LIST_ENTRY *PpProfileInit()
{
  LIST_ENTRY *result; // rax

  PiProfileDeviceListLock.Event.Header.Size = 6;
  PiProfileDeviceListLock.Count = 1;
  PiProfileDeviceListLock.Owner = 0LL;
  qword_140C5B078 = (__int64)&PiProfileDeviceListHead;
  PiProfileDeviceListHead = (__int64)&PiProfileDeviceListHead;
  PiProfileDeviceListLock.Event.Header.WaitListHead.Blink = &PiProfileDeviceListLock.Event.Header.WaitListHead;
  PiProfileDeviceListLock.Event.Header.WaitListHead.Flink = &PiProfileDeviceListLock.Event.Header.WaitListHead;
  result = &PiProfileChangeSemaphore.Header.WaitListHead;
  PiProfileChangeSemaphore.Header.WaitListHead.Blink = &PiProfileChangeSemaphore.Header.WaitListHead;
  PiProfileChangeSemaphore.Header.WaitListHead.Flink = &PiProfileChangeSemaphore.Header.WaitListHead;
  PiProfileDeviceListLock.Contention = 0;
  LOWORD(PiProfileDeviceListLock.Event.Header.Lock) = 1;
  PiProfileDeviceListLock.Event.Header.SignalState = 0;
  PiProfileDeviceCount = 0;
  PiProfileChangeSemaphore.Header.Type = 5;
  PiProfileChangeSemaphore.Header.Size = 8;
  PiProfileChangeSemaphore.Header.SignalState = 1;
  PiProfileChangeSemaphore.Limit = 1;
  return result;
}
