/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140AC3CE8
 * Callers:
 *     VfAddVerifierEntry @ 0x140ADE630 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140ADE7E8 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140B6A9C4 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x140607B08 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14060B2A8 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1406AD5B0 (MmLockPagableDataSection.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140844CB0 (PsSetCreateProcessNotifyRoutine.c)
 *     IoVerifierInit @ 0x140AC1CAC (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140AC3E40 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140AD2860 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase0 @ 0x140AD6E18 (VfFaultsInitPhase0.c)
 *     VfPoolInitPhase1 @ 0x140ADB118 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140ADBE88 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int v6; // eax

  v5 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      ViCodeSectionHandle = MmLockPagableDataSection(VfInitVerifierComponents);
      ViDataSectionHandle = MmLockPagableDataSection(&ViLoadedDriversCount);
      MmLockPagableDataSection((PVOID)&ViShortTime);
    }
    if ( v5 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v6 = MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v6 = 2491;
    MmVerifierData = v6;
    if ( v5 == 1 )
    {
      ViVerifyAllDrivers = 1;
      MmVerifyDriverLevel &= ~0x20u;
      MmVerifierData = v6 & 0xFFFFFFDF;
      ExSetPoolFlags(8u);
    }
    *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = &ViVerifierDriverAddedThunkListHead;
    *(_QWORD *)&ViVerifierDriverAddedThunkListHead = &ViVerifierDriverAddedThunkListHead;
    *(&ViVerifierDriverAddedSpecialThunkListHead + 1) = &ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      LOBYTE(a4) = 1;
      VfInitVerifierComponents(
        (unsigned int)MmVerifierData,
        (unsigned int)ViVerifyAllDrivers,
        (unsigned int)KernelVerifier,
        a4);
      VfFaultsInitPhase0();
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
      ViFaultsProcessNotifyRoutineSet = 1;
    }
    ViFullyInitialized = 1;
  }
}
