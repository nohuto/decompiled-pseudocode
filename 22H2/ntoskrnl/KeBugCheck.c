/*
 * XREFs of KeBugCheck @ 0x14041E370
 * Callers:
 *     KiDetachProcess @ 0x14022DD20 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x14022E6F0 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x14030BBA0 (PspSystemThreadStartup.c)
 *     KeWaitForMultipleObjects @ 0x140310FC0 (KeWaitForMultipleObjects.c)
 *     KiLockServiceTable @ 0x14034B8D0 (KiLockServiceTable.c)
 *     sub_1403E51E0 @ 0x1403E51E0 (sub_1403E51E0.c)
 *     KxStartSystemThread @ 0x1404234D0 (KxStartSystemThread.c)
 *     PspThreadDelete @ 0x1407478D0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14080EE9C (CmpAddProcessorConfigurationEntry.c)
 *     EtwCleanupSiloState @ 0x1409E1D70 (EtwCleanupSiloState.c)
 *     KiInitializeKernel @ 0x140A8C770 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140A8CEC0 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x140A918B0 (KeWriteProtectProcessorState.c)
 *     KeStartAllProcessors @ 0x140B4AC90 (KeStartAllProcessors.c)
 *     EtwpInitialize @ 0x140B4B150 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 *     PspInitPhase1 @ 0x140B54658 (PspInitPhase1.c)
 *     BvgaSaveResources @ 0x140B714F8 (BvgaSaveResources.c)
 *     VslRegisterBootDrivers @ 0x140B73A00 (VslRegisterBootDrivers.c)
 *     KiFatalExceptionFilter @ 0x140B740E8 (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
