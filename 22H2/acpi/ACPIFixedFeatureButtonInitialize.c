/*
 * XREFs of ACPIFixedFeatureButtonInitialize @ 0x1C0031290
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097FAC (ACPIRootInitialize.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017F20 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildFixedButtonExtension @ 0x1C00312F0 (ACPIBuildFixedButtonExtension.c)
 */

void ACPIFixedFeatureButtonInitialize()
{
  KIRQL v0; // al
  KIRQL v1; // bl
  __int64 v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = 0LL;
  v1 = v0;
  if ( (int)ACPIBuildFixedButtonExtension(v2, &v3) >= 0 && v3 )
    ACPIInitReferenceDeviceExtension(v3);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v1);
}
