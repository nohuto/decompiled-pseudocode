/*
 * XREFs of AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C000AB60
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDC0 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C0083D08 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

__int64 AcpiIrqTranslateSecondaryInterruptToNtResources()
{
  return AcpiExternalQueryTranslatedDescriptorForGsiv();
}
