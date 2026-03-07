void __fastcall UsbhRemoveAndDeletePdo(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  KIRQL v3; // bl
  KIRQL v4; // bp

  v2 = PdoExt((__int64)DeviceObject);
  RtlFreeUnicodeString((PUNICODE_STRING)v2 + 167);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
  UsbhFreeID((__int64)(v2 + 524));
  UsbhFreeID((__int64)(v2 + 520));
  UsbhFreeID((__int64)(v2 + 528));
  UsbhFreeID((__int64)(v2 + 536));
  UsbhFreeID((__int64)(v2 + 532));
  UsbhFreeID((__int64)(v2 + 540));
  UsbhFreeID((__int64)(v2 + 544));
  UsbhFreeID((__int64)(v2 + 548));
  UsbhFreeID((__int64)(v2 + 556));
  UsbhFreeID((__int64)(v2 + 552));
  WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v3);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 351);
  if ( v2[704] == 1 )
  {
    v2[704] = 0;
    USBD_RemoveDeviceFromGlobalList(DeviceObject);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2 + 351, v4);
  IoDeleteDevice(DeviceObject);
}
