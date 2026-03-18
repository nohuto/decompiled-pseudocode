/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406F5800
 * Callers:
 *     PoRunDownDeviceObject @ 0x140304F58 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403B0040 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140504D00 (HalStartDynamicProcessor.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1405E74A0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A99E80 (IoUnregisterShutdownNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140AAAE28 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140AABC30 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     KiInitializeMTRR @ 0x140B631C0 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
