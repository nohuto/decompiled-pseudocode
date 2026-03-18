/*
 * XREFs of HalpIsInterruptTypeSecondary @ 0x140368080
 * Callers:
 *     HalpCheckInterruptType @ 0x1403B2F2C (HalpCheckInterruptType.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x140519FC4 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpQueryPrimaryInterruptInformation @ 0x14082099C (HalpQueryPrimaryInterruptInformation.c)
 *     HalacpiIrqTranslateResourcesIsa @ 0x140845020 (HalacpiIrqTranslateResourcesIsa.c)
 *     HalacpiIrqTranslateResourceRequirementsIsa @ 0x140845100 (HalacpiIrqTranslateResourceRequirementsIsa.c)
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
