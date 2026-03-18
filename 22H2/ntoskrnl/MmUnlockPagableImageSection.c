/*
 * XREFs of MmUnlockPagableImageSection @ 0x14025A320
 * Callers:
 *     PnprUnlockPagesForReplace @ 0x140967084 (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1409738B8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983AA4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x140A353F8 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140A90A30 (HalpPowerInitSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140A99E80 (IoUnregisterShutdownNotification.c)
 *     PopUnlockAfterSleepWorker @ 0x140AA6A10 (PopUnlockAfterSleepWorker.c)
 *     ExQuerySystemLockInformation @ 0x140AAAE28 (ExQuerySystemLockInformation.c)
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     VfClearDifWithoutReboot @ 0x140AC3BAC (VfClearDifWithoutReboot.c)
 *     VfInitDifWithoutReboot @ 0x140AC3C04 (VfInitDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140AF02E0 (BgkpUnlockBgfxCodeSection.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 0LL);
}
