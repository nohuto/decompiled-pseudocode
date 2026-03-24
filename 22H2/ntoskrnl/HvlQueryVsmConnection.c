/*
 * XREFs of HvlQueryVsmConnection @ 0x140340478
 * Callers:
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     VslGetNestedPageProtectionFlags @ 0x140340410 (VslGetNestedPageProtectionFlags.c)
 *     VslGetSecureSpeculationControlInformation @ 0x1403CF3F8 (VslGetSecureSpeculationControlInformation.c)
 *     VslGetSecurePciEnabled @ 0x1403CF530 (VslGetSecurePciEnabled.c)
 *     VslConfigureDynamicMemory @ 0x1404FBDB4 (VslConfigureDynamicMemory.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x1404FC3F0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslMakeProtectedPageWritable @ 0x1404FCB54 (VslMakeProtectedPageWritable.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FCD30 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FCEDC (VslRegisterLogPages.c)
 *     MmSnapTriageDumpInformation @ 0x140538BF4 (MmSnapTriageDumpInformation.c)
 *     VslRelaxQuotas @ 0x1408901CC (VslRelaxQuotas.c)
 *     KiSwInterruptPresent @ 0x140A41820 (KiSwInterruptPresent.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 *     VslpIumPhase0Initialize @ 0x140A8F5C8 (VslpIumPhase0Initialize.c)
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
