/*
 * XREFs of KeBugCheck @ 0x140415FE0
 * Callers:
 *     KiLockServiceTable @ 0x1402E3C60 (KiLockServiceTable.c)
 *     KiDetachProcess @ 0x14030E460 (KiDetachProcess.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x140315620 (KeExpandKernelStackAndCalloutInternal.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     PspSystemThreadStartup @ 0x140354CF0 (PspSystemThreadStartup.c)
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     KxStartSystemThread @ 0x14041B140 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x14075E4B0 (PspThreadDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140816B6C (CmpAddProcessorConfigurationEntry.c)
 *     EtwCleanupSiloState @ 0x1409DEED0 (EtwCleanupSiloState.c)
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x140A898B0 (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x140A8E420 (KeWriteProtectProcessorState.c)
 *     KeStartAllProcessors @ 0x140B3C580 (KeStartAllProcessors.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     PspInitPhase1 @ 0x140B422C8 (PspInitPhase1.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     BvgaSaveResources @ 0x140B48554 (BvgaSaveResources.c)
 *     VslRegisterBootDrivers @ 0x140B6F694 (VslRegisterBootDrivers.c)
 *     KiFatalExceptionFilter @ 0x140B7015C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
