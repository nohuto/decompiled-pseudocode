/*
 * XREFs of ACPIGpeValidIndex @ 0x1C001A140
 * Callers:
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C0015900 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C00172E4 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C001A108 (ACPIGpeIndexToGpeRegister.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C002697C (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorConnect @ 0x1C0060B20 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIValidateGPEEventIndex @ 0x1C00560EC (ACPIValidateGPEEventIndex.c)
 */

char __fastcall ACPIGpeValidIndex(__int64 a1)
{
  char result; // al

  if ( (unsigned int)a1 < 8 * (unsigned int)*((unsigned __int16 *)AcpiInformation + 43) )
    return 1;
  result = ACPIValidateGPEEventIndex(
             a1,
             *((unsigned __int16 *)AcpiInformation + 50),
             *((unsigned __int16 *)AcpiInformation + 49));
  if ( result )
    return 1;
  return result;
}
