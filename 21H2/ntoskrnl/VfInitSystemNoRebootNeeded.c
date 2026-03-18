/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140A82328
 * Callers:
 *     VfAddVerifierEntry @ 0x140A9C668 (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140A9C820 (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140B27B30 (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x14063B338 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14063E374 (ExDisableAllLookasideLists.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x140832620 (PsSetCreateProcessNotifyRoutine.c)
 *     IoVerifierInit @ 0x140A7FDC0 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140A82480 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140A90ED8 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase0 @ 0x140A9697C (VfFaultsInitPhase0.c)
 *     VfPoolInitPhase1 @ 0x140A9A2E8 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140A9B0C8 (VfSettingsMiscellaneousChecksInitPhase1.c)
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
