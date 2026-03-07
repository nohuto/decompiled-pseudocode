__int64 __fastcall ACPIDevicePowerFlushQueue(_QWORD *a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(
         a1,
         (void (__fastcall *)(__int64, __int64, __int64))ACPIInitPowerRequestCompletion,
         (__int64)&Event);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v2;
}
