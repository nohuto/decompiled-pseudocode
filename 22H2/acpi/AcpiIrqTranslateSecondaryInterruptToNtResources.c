/*
 * XREFs of AcpiIrqTranslateSecondaryInterruptToNtResources @ 0x1C000AB60
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4C0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDD0 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C0083D18 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 */

__int64 AcpiIrqTranslateSecondaryInterruptToNtResources()
{
  return AcpiExternalQueryTranslatedDescriptorForGsiv();
}
