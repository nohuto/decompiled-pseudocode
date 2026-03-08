/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x1402FCE50
 * Callers:
 *     HalpCheckInterruptType @ 0x1403AE16C (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140517A94 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14080BECC (HalpQueryPrimaryInterruptInformation.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x1408421E0 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x1408422C0 (HalacpiIrqTranslateResourceRequirementsIsa.c)
 * Callees:
 *     <none>
 */

bool __fastcall HalpIsInterruptTypeSecondary(int a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 && a2 >= SecondaryGsivRangeStart )
    return a2 < SecondaryGsivRangeSize + SecondaryGsivRangeStart;
  return v2;
}
