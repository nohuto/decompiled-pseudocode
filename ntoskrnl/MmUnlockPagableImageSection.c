/*
 * XREFs of MmUnlockPagableImageSection @ 0x140225D90
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x140964064 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1409809F4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140A8D5A0 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140A96D40 (IoUnregisterShutdownNotification.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA37E0 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140AA7BF8 (ExQuerySystemLockInformation.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     VfClearDifWithoutReboot @ 0x140ABFBAC (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140ABFC04 (VfInitDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AEC590 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
