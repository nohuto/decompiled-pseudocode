/*
 * XREFs of MmReleaseLoadLock @ 0x1407049E0
 * Callers:
 *     MmProtectDriverSection @ 0x14036E220 (MmProtectDriverSection.c)
 *     MmLockRegistryRecoverySections @ 0x14061A8F8 (MmLockRegistryRecoverySections.c)
 *     MmWriteSystemImageTracepoint @ 0x1406433DC (MmWriteSystemImageTracepoint.c)
 *     MiSessionUnloadAllImages @ 0x140681CD8 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x140696020 (MmUnloadSystemImage.c)
 *     MmLoadSystemImageEx @ 0x140703E70 (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x140704868 (MiObtainSectionForDriver.c)
 *     MmChangeImageProtection @ 0x140723EB0 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     MmEnumerateSystemImages @ 0x140828110 (MmEnumerateSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084E87C (MmFreeBootDriverInitializationCode.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1408658B4 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmBackSystemImageWithPagefile @ 0x140871F6C (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x140A2D4A0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140A2D5B0 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x140A37FD0 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x140A3B60C (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x140A3BFA4 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 *     VfAddVerifierEntry @ 0x140ADE630 (VfAddVerifierEntry.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE8F80 (MmApplyVerifierToRunningImage.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE903C (MmEnableOrDisableVerifierForDriver.c)
 *     MiInitializeRetpoline @ 0x140B48688 (MiInitializeRetpoline.c)
 *     MiReloadBootLoadedDrivers @ 0x140B4A0CC (MiReloadBootLoadedDrivers.c)
 *     MiInitializeLoadedModuleList @ 0x140B5FD1C (MiInitializeLoadedModuleList.c)
 *     MmRegisterHotPatches @ 0x140B74A30 (MmRegisterHotPatches.c)
 *     MmReapplyBootPatchImports @ 0x140B750B4 (MmReapplyBootPatchImports.c)
 *     MmDiscardDriverSection @ 0x140B756B4 (MmDiscardDriverSection.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140B7693C (MiFlushStrongCodeDriverLoadFailures.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B9AA6C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

_QWORD *__fastcall MmReleaseLoadLock(__int64 a1)
{
  _QWORD *result; // rax

  if ( dword_140C659E0-- == 1 )
  {
    qword_140C659D8 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C659D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C659D0);
    KeAbPostRelease((ULONG_PTR)&qword_140C659D0);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
