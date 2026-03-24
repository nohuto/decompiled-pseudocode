/*
 * XREFs of MmUnlockPagableImageSection @ 0x14029B0A0
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x1408AE904 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1408BA6C8 (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1408E3658 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PopUnlockAfterSleepWorker @ 0x140990530 (PopUnlockAfterSleepWorker.c)
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 *     HalpPowerInitSystem @ 0x1409A09F0 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB150 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409AFEF8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B2DA4 (ExQuerySystemLockInformation.c)
 *     BgkpUnlockBgfxCodeSection @ 0x1409F13F0 (BgkpUnlockBgfxCodeSection.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
