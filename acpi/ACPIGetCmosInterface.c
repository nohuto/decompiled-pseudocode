/*
 * XREFs of ACPIGetCmosInterface @ 0x1C0019B00
 * Callers:
 *     OSInitializeCallbacks @ 0x1C00A8160 (OSInitializeCallbacks.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 *     CmosGetInterface @ 0x1C008231C (CmosGetInterface.c)
 */

__int64 ACPIGetCmosInterface()
{
  ULONG_PTR v0; // rbx
  KIRQL v1; // dl
  KIRQL v2; // al

  KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v0 = RootDeviceExtension;
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
  LODWORD(v0) = CmosGetInterface(*(PDEVICE_OBJECT *)(v0 + 768));
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  --*(_DWORD *)(RootDeviceExtension + 732);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v2);
  return (unsigned int)v0;
}
