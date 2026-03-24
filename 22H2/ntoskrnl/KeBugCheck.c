/*
 * XREFs of KeBugCheck @ 0x1403FD550
 * Callers:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiDetachProcess @ 0x1402075C0 (KiDetachProcess.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KeExpandKernelStackAndCalloutInternal @ 0x1402AA680 (KeExpandKernelStackAndCalloutInternal.c)
 *     PspSystemThreadStartup @ 0x14035D690 (PspSystemThreadStartup.c)
 *     KiLockServiceTable @ 0x14039EA94 (KiLockServiceTable.c)
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     KxStartSystemThread @ 0x140406550 (KxStartSystemThread.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140619D80 (PspThreadDelete.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6CD0 (CmpAddProcessorConfigurationEntry.c)
 *     Phase1Initialization @ 0x1407B3EE0 (Phase1Initialization.c)
 *     EtwDeleteSiloState @ 0x140937D74 (EtwDeleteSiloState.c)
 *     KiInitializeKernel @ 0x14099CCF0 (KiInitializeKernel.c)
 *     KiSetCacheInformation @ 0x14099DC6C (KiSetCacheInformation.c)
 *     KeWriteProtectProcessorState @ 0x14099ED90 (KeWriteProtectProcessorState.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     IoInitSystemPreDrivers @ 0x140A3DF90 (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 *     PspInitPhase1 @ 0x140A4B338 (PspInitPhase1.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 *     BvgaSaveResources @ 0x140A6B7D8 (BvgaSaveResources.c)
 *     KiFatalExceptionFilter @ 0x140A7221C (KiFatalExceptionFilter.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __stdcall __noreturn KeBugCheck(ULONG BugCheckCode)
{
  ULONG_PTR v1; // rdx
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // [rsp+20h] [rbp-8h]

  KeBugCheckEx(BugCheckCode, v1, v2, v3, v4);
}
