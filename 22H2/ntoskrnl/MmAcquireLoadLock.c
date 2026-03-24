/*
 * XREFs of MmAcquireLoadLock @ 0x1406FEA40
 * Callers:
 *     MmWriteSystemImageTracepoint @ 0x14053F638 (MmWriteSystemImageTracepoint.c)
 *     MmChangeImageProtection @ 0x1406FE6A0 (MmChangeImageProtection.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiObtainSectionForDriver @ 0x14075BB48 (MiObtainSectionForDriver.c)
 *     MmUnloadSystemImage @ 0x140771E10 (MmUnloadSystemImage.c)
 *     MiSessionUnloadAllImages @ 0x1407784DC (MiSessionUnloadAllImages.c)
 *     MmBackSystemImageWithPagefile @ 0x14078098C (MmBackSystemImageWithPagefile.c)
 *     MmEnumerateSystemImages @ 0x140792C70 (MmEnumerateSystemImages.c)
 *     MiFlushDeferredRetpolineImageLoadEvents @ 0x1407A56B8 (MiFlushDeferredRetpolineImageLoadEvents.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3F48 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x1408C64E0 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1408C6600 (MmAddVerifierThunks.c)
 *     MiLoadHotPatch @ 0x1408CAC20 (MiLoadHotPatch.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
 *     MiQueryProcessActivePatches @ 0x1408CDF38 (MiQueryProcessActivePatches.c)
 *     MiUnloadHotPatch @ 0x1408CE818 (MiUnloadHotPatch.c)
 *     MiShutdownSystem @ 0x1409AFEF8 (MiShutdownSystem.c)
 *     MmEnableVerifierForDriver @ 0x1409C5BC4 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1409EC9E8 (VfAddVerifierEntry.c)
 *     MiReloadBootLoadedDrivers @ 0x140A4F9F0 (MiReloadBootLoadedDrivers.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x140A54464 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 *     MmRegisterHotPatch @ 0x140A9232C (MmRegisterHotPatch.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A925BC (MmMarkHypercallPageRetpolineBit.c)
 *     MmDiscardDriverSection @ 0x140A92E70 (MmDiscardDriverSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C4CCD8 )
  {
    ++dword_140C4CCE0;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CCD0, 0LL);
    qword_140C4CCD8 = (__int64)CurrentThread;
    dword_140C4CCE0 = 1;
  }
  return CurrentThread;
}
