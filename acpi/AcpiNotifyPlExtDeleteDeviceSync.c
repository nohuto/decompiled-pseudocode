__int64 __fastcall AcpiNotifyPlExtDeleteDeviceSync(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v5 = AcpiNotifyPlExtDeleteDeviceAsync(a1, a2, v4, (__int64)&Event);
  if ( v5 == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return v5;
}
