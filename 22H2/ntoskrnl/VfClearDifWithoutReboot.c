/*
 * XREFs of VfClearDifWithoutReboot @ 0x140AC3BAC
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140ADEA7C (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140ADEBEC (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14025A320 (MmUnlockPagableImageSection.c)
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
