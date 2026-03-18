/*
 * XREFs of VfInitDifWithoutReboot @ 0x140A82298
 * Callers:
 *     VfVolatileSetDifRuleClass @ 0x140A9CBF8 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 */

char VfInitDifWithoutReboot()
{
  char v0; // bl

  v0 = 0;
  if ( ViFullyInitialized )
    return 0;
  ViCodeSectionHandle = MmLockPagableDataSection(VfInitVerifierComponents);
  if ( ViCodeSectionHandle )
  {
    ViDataSectionHandle = MmLockPagableDataSection(&ViLoadedDriversCount);
    if ( ViDataSectionHandle )
    {
      v0 = 1;
      *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = &ViVerifierDriverAddedThunkListHead;
      *(_QWORD *)&ViVerifierDriverAddedThunkListHead = &ViVerifierDriverAddedThunkListHead;
      *(&ViVerifierDriverAddedSpecialThunkListHead + 1) = &ViVerifierDriverAddedSpecialThunkListHead;
      ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    }
    else
    {
      MmUnlockPagableImageSection(ViCodeSectionHandle);
    }
  }
  return v0;
}
