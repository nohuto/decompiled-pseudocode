/*
 * XREFs of HvlQueryVsmConnection @ 0x14033FE98
 * Callers:
 *     VslpEnterIumSecureMode @ 0x14033FAF0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x14033FE30 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x140387354 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403B5EB0 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x14054AD64 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14054B370 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14054B410 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslMakeProtectedPageWritable @ 0x14054BD28 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054BF04 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054C0B0 (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x14063081C (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x140942EB8 (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140B373F0 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140B7391C (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B73A00 (VslRegisterBootDrivers.c)
 *     VslpIumPhase0Initialize @ 0x140B945CC (VslpIumPhase0Initialize.c)
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
