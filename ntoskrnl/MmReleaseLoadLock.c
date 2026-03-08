/*
 * XREFs of MmReleaseLoadLock @ 0x1407D2400
 * Callers:
 *     MmProtectDriverSection @ 0x140302930 (MmProtectDriverSection.c)
 *     MmLockRegistryRecoverySections @ 0x140618448 (MmLockRegistryRecoverySections.c)
 *     MmWriteSystemImageTracepoint @ 0x140640F7C (MmWriteSystemImageTracepoint.c)
 *     MiSessionUnloadAllImages @ 0x14067E8F8 (MiSessionUnloadAllImages.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14072EE44 (MiObtainSectionForDriver.c)
 *     MmChangeImageProtection @ 0x1407D1E10 (MmChangeImageProtection.c)
 *     MmUnloadSystemImage @ 0x1407F5FA0 (MmUnloadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084B4CC (MmFreeBootDriverInitializationCode.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1408612A4 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmBackSystemImageWithPagefile @ 0x14086FA4C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2A740 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2A850 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x140A352A0 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3892C (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140A392C0 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     VfAddVerifierEntry @ 0x140ADA630 (VfAddVerifierEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE4F80 (MmApplyVerifierToRunningImage.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE503C (MmEnableOrDisableVerifierForDriver.c)
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 *     MiReloadBootLoadedDrivers @ 0x140B3B9BC (MiReloadBootLoadedDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 *     MmRegisterHotPatches @ 0x140B7092C (MmRegisterHotPatches.c)
 *     MmReapplyBootPatchImports @ 0x140B70FB0 (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B71424 (MmDiscardDriverSection.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B72430 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B9685C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall MmReleaseLoadLock(__int64 a1)
{
  char result; // al

  if ( dword_140C65560-- == 1 )
  {
    qword_140C65558 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65550);
    KeAbPostRelease((ULONG_PTR)&qword_140C65550);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
