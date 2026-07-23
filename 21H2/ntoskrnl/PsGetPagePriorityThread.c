/*
 * XREFs of PsGetPagePriorityThread @ 0x1402E7020
 * Callers:
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     SmSetThreadPagePriority @ 0x1402925D0 (SmSetThreadPagePriority.c)
 *     CcInitializeCacheMapEx @ 0x1402D2E10 (CcInitializeCacheMapEx.c)
 *     MiAllocateKernelStackPages @ 0x1402E3050 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x1402E3830 (MiInitializeInPageSupport.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x140302390 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x140303190 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x140303B50 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x140304B40 (CcPerformReadAhead.c)
 *     EtwpTraceThreadRundown @ 0x1403AE970 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x140565088 (PfLogFileDataAccess.c)
 *     PfSnAsyncContextInitialize @ 0x1406126DC (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x140679AEC (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPagePriorityThread(__int64 a1)
{
  __int64 result; // rax

  result = (*(_DWORD *)(a1 + 1296) >> 12) & 7;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 544) + 1124LL) & 0x100000) != 0 && (unsigned int)result >= 2 )
    return 2LL;
  return result;
}
