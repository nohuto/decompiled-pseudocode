/*
 * XREFs of HvlQueryVsmConnection @ 0x1402D8618
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x1402D85B0 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140384704 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403B1220 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1405488C4 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x140548ED0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x140548F70 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslMakeProtectedPageWritable @ 0x140549888 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140549A64 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x140549C10 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x14062E39C (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x14093FE98 (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140B65038 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B6F694 (VslRegisterBootDrivers.c)
 *     VslpIumPhase0Initialize @ 0x140B903AC (VslpIumPhase0Initialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  char result; // al

  result = HvlpVsmVtlCallVa;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
  {
    if ( a1 )
      *a1 = *(_QWORD *)&HvlpVsmVtlCallVa;
    return 1;
  }
  return result;
}
