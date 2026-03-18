/*
 * XREFs of VfClearDifWithoutReboot @ 0x140A82240
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x140A9CAB4 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
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
