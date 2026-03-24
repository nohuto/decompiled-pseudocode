/*
 * XREFs of ACPIBusReenumerateSelf @ 0x1C004DEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ACPIBusReenumerateSelf(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  KIRQL v4; // di

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = *(_QWORD *)(a1 + 752);
  v4 = v2;
  if ( v3 && *(_QWORD *)(v3 + 744) )
  {
    *(_QWORD *)(a1 + 960) |= 0x20000000uLL;
    IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v3 + 744), BusRelations);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
}
