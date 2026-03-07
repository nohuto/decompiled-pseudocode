void __fastcall ACPIBusReenumerateSelf(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = *(_QWORD *)(a1 + 792);
  v4 = v2;
  if ( v3 && *(_QWORD *)(v3 + 784) )
  {
    *(_QWORD *)(a1 + 1008) |= 0x20000000uLL;
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v3 + 784), BusRelations);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
