/*
 * XREFs of MmLockPagableSectionByHandle @ 0x14063C7E0
 * Callers:
 *     PoRunDownDeviceObject @ 0x140360358 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403A67F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x1404BC230 (HalStartDynamicProcessor.c)
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409918D8 (PopTransitionSystemPowerStateEx.c)
 *     IoUnregisterShutdownNotification @ 0x1409AB150 (IoUnregisterShutdownNotification.c)
 *     MiShutdownSystem @ 0x1409AFEF8 (MiShutdownSystem.c)
 *     ExQuerySystemLockInformation @ 0x1409B2DA4 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3140 (ExpSystemErrorHandler2.c)
 *     KiInitializeMTRR @ 0x140A4CEC4 (KiInitializeMTRR.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  MiLockPagableImageSection((ULONG_PTR)ImageSectionHandle, 1uLL);
}
