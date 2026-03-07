LONG UsbhEtwRundown()
{
  struct _DEVICE_OBJECT *i; // rdi
  void (__fastcall **p_DeferredRoutine)(_KDPC *, void *, void *, void *); // rbx
  __int64 Flink; // rsi
  _DWORD *v3; // rax
  _DWORD *v4; // rax
  __int64 v5; // rcx
  char *j; // r14
  _DWORD *v7; // rax
  KIRQL v8; // dl
  _DWORD *v9; // rax

  KeWaitForSingleObject(&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  for ( i = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject;
        i = *(struct _DEVICE_OBJECT **)&i->Type )
  {
    p_DeferredRoutine = &i[-16].Dpc.DeferredRoutine;
    Flink = (__int64)i[-12].Queue.ListEntry.Flink;
    v3 = FdoExt(Flink);
    if ( (unsigned int)UsbhAcquireFdoPnpLock(Flink, (__int64)(v3 + 346), 13, 0, 1) == 5 )
    {
      UsbhEtwLogHubInformation((__int64)&i[-16].Dpc.DeferredRoutine, &USBHUB_ETW_EVENT_HUB_INFORMATION);
      UsbhEtwLogHubPastExceptions((__int64)&i[-16].Dpc.DeferredRoutine);
      UsbhEtwLogPortInformation(Flink);
      v4 = FdoExt(Flink);
      UsbhAcquirePdoStateLock(v5, (__int64)(v4 + 346), 25);
      for ( j = (char *)p_DeferredRoutine[601]; j != (char *)(p_DeferredRoutine + 601); j = *(char **)j )
      {
        UsbhEtwLogDeviceInformation((__int64)(j - 1320), &USBHUB_ETW_EVENT_DEVICE_INFORMATION, 1);
        UsbhEtwLogDeviceDescription((__int64)(j - 1320), &USBHUB_ETW_EVENT_DEVICE_DESCRIPTION);
      }
      v7 = FdoExt(Flink) + 346;
      v7[34] = 0;
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      v8 = *((_BYTE *)v7 + 132);
      v7[22] = 1734964085;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v8);
    }
    v9 = FdoExt(Flink);
    UsbhReleaseFdoPnpLock(Flink, (__int64)(v9 + 346));
  }
  return KeSetEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, 0, 0);
}
