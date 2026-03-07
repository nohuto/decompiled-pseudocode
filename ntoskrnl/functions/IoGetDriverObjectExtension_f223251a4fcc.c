PVOID __stdcall IoGetDriverObjectExtension(PDRIVER_OBJECT DriverObject, PVOID ClientIdentificationAddress)
{
  KIRQL v4; // al
  struct _DRIVER_OBJECT *i; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  for ( i = DriverObject->DriverExtension[1].DriverObject;
        i && i->DeviceObject != ClientIdentificationAddress;
        i = *(struct _DRIVER_OBJECT **)&i->Type )
  {
    ;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  if ( i )
    return &i->Flags;
  else
    return 0LL;
}
