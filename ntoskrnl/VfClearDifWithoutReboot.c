/*
 * XREFs of VfClearDifWithoutReboot @ 0x140ABFBAC
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADAA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADABEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140225D90 (MmUnlockPagableImageSection.c)
 */

void VfClearDifWithoutReboot()
{
  if ( ViCodeSectionHandle )
  {
    MmUnlockPagableImageSection(ViCodeSectionHandle);
    ViCodeSectionHandle = 0LL;
  }
  if ( ViDataSectionHandle )
  {
    MmUnlockPagableImageSection(ViDataSectionHandle);
    ViDataSectionHandle = 0LL;
  }
  ViVerifierDriverAddedThunkListHead = 0LL;
  *(_OWORD *)&ViVerifierDriverAddedSpecialThunkListHead = 0LL;
}
