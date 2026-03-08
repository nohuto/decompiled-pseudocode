/*
 * XREFs of MmLockPagableSectionByHandle @ 0x1406A7BD0
 * Callers:
 *     PoRunDownDeviceObject @ 0x140368158 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403AB2F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140502C20 (HalStartDynamicProcessor.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1405E4FF0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     IoUnregisterShutdownNotification @ 0x140A96D40 (IoUnregisterShutdownNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 *     ExQuerySystemLockInformation @ 0x140AA7BF8 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     KiInitializeMTRR @ 0x140B5FED0 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
