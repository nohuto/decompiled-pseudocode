/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x1409C6D50
 * Callers:
 *     VfAddVerifierEntry @ 0x1409EC9E8 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x1409ECBFC (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x1405B3B18 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x1405B682C (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1406FE5A0 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x1409C477C (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x1409C6E80 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x1409D57AC (VfPendingInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x1409E0230 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x1409E0588 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
    qword_140C1D0F8 = (__int64)&ViVerifierDriverAddedThunkListHead;
    ViVerifierDriverAddedThunkListHead = (__int64)&ViVerifierDriverAddedThunkListHead;
    qword_140C1D0D8 = (__int64)&ViVerifierDriverAddedSpecialThunkListHead;
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
