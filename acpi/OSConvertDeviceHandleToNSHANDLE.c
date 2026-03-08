/*
 * XREFs of OSConvertDeviceHandleToNSHANDLE @ 0x1C000ABBC
 * Callers:
 *     ACPIEcRemoveOpRegionHandler @ 0x1C0083734 (ACPIEcRemoveOpRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C0083FF0 (AcpiGetFullyQualifiedBiosName.c)
 *     DeRegisterOpRegionHandler @ 0x1C008BA80 (DeRegisterOpRegionHandler.c)
 *     RegisterOpRegionHandler @ 0x1C008BAC0 (RegisterOpRegionHandler.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 */

__int64 __fastcall OSConvertDeviceHandleToNSHANDLE(ULONG_PTR a1)
{
  return *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
}
