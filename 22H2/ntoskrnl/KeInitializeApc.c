/*
 * XREFs of KeInitializeApc @ 0x1402BE6A0
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x14028C2B0 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 *     EtwpQueueStackWalkApc @ 0x140468426 (EtwpQueueStackWalkApc.c)
 *     IoRaiseHardError @ 0x140556B20 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140556E00 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140601B3C (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406034F0 (EtwpCovSampCaptureQueueApc.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14063B498 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14065C8C4 (MiStoreModifiedWriteDereference.c)
 *     PerfLogImageUnload @ 0x140697438 (PerfLogImageUnload.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073FC68 (PspRecheckThreadOptionalXStateFeatures.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     PspSetContextThreadInternal @ 0x140770B00 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140770CE4 (PspGetContextThreadInternal.c)
 *     NtQueueApcThreadEx2 @ 0x140779F90 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1407C2078 (IopCancelIrpsInThreadList.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14093AF24 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x140975490 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AE9B8 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExSwapinWorkerThreads @ 0x140A00678 (ExSwapinWorkerThreads.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  char result; // al

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 32) = a4;
  result = a6 != 0 ? a7 : 0;
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8 & -(__int64)(a6 != 0);
  *(_BYTE *)(a1 + 82) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  return result;
}
