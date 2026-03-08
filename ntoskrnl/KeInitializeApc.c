/*
 * XREFs of KeInitializeApc @ 0x140237E20
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 *     IoRaiseHardError @ 0x140554680 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140554960 (IoRaiseInformationalHardError.c)
 *     EtwpTraceThreadRundownWithStack @ 0x1405FF6DC (EtwpTraceThreadRundownWithStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406010A0 (EtwpCovSampCaptureQueueApc.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140639018 (MiQueueSyncModifiedWriterApc.c)
 *     MiStoreModifiedWriteDereference @ 0x14065A280 (MiStoreModifiedWriteDereference.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x1406B180C (PspRecheckThreadOptionalXStateFeatures.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406B40B0 (NtNotifyChangeMultipleKeys.c)
 *     NtQueueApcThreadEx2 @ 0x1406F5AB0 (NtQueueApcThreadEx2.c)
 *     IopCancelIrpsInThreadList @ 0x1407701C8 (IopCancelIrpsInThreadList.c)
 *     PerfLogImageUnload @ 0x1407EA8E0 (PerfLogImageUnload.c)
 *     PspSetContextThreadInternal @ 0x1407EE340 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407EE524 (PspGetContextThreadInternal.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140937F04 (DbgkpLkmdLaunchSnapApc.c)
 *     KeSpecialUserApcKernelRoutine @ 0x1409723F0 (KeSpecialUserApcKernelRoutine.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x1409AB970 (PspEnableProcessOptionalXStateFeatures.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 *     KeInitThread @ 0x140A845D0 (KeInitThread.c)
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
