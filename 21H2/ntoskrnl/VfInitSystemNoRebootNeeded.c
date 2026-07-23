/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x1409C7D40
 * Callers:
 *     VfAddVerifierEntry @ 0x1409ED9D8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409EDBEC (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140A70AB8 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x1405B3E08 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x1405B6B1C (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1406A7FB0 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1409C576C (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1409C7E70 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x1409D679C (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E1220 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1409E1578 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2)
{
  int v3; // edi
  int v4; // eax

  v3 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      MmLockPagableDataSection(VfInitVerifierComponents);
      MmLockPagableDataSection(&ViLoadedDriversCount);
      MmLockPagableDataSection((PVOID)&ViShortTime);
    }
    if ( v3 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v4 = MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v4 = 2491;
    MmVerifierData = v4;
    if ( v3 == 1 )
    {
      ViVerifyAllDrivers = 1;
      MmVerifyDriverLevel &= ~0x20u;
      MmVerifierData = v4 & 0xFFFFFFDF;
      ExSetPoolFlags(8u);
    }
    qword_140C1D518 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_140C1D328 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      VfInitVerifierComponents(
        (unsigned int)MmVerifierData,
        (unsigned int)ViVerifyAllDrivers,
        (unsigned int)KernelVerifier);
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
    }
    ViFullyInitialized = 1;
  }
}
