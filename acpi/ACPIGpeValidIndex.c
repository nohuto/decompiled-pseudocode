/*
 * XREFs of ACPIGpeValidIndex @ 0x1C002C6DC
 * Callers:
 *     ACPIGpeIndexToByteIndex @ 0x1C0003564 (ACPIGpeIndexToByteIndex.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C002C39C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C002C3F8 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorConnect @ 0x1C0043E40 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIValidateGPEEventIndex @ 0x1C002C71C (ACPIValidateGPEEventIndex.c)
 */

bool __fastcall ACPIGpeValidIndex(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9

  return (unsigned __int8)ACPIValidateGPEEventIndex(a1, 0LL, *((unsigned __int16 *)AcpiInformation + 43))
      || (unsigned __int8)ACPIValidateGPEEventIndex(v1, *(unsigned __int16 *)(v2 + 100), *(unsigned __int16 *)(v2 + 98)) != 0;
}
