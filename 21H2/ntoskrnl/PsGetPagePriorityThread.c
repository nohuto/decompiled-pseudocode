/*
 * XREFs of PsGetPagePriorityThread @ 0x1402427D0
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14022E5C0 (CcInitializeCacheMapEx.c)
 *     MiAllocateKernelStackPages @ 0x14023E800 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x14023EFE0 (MiInitializeInPageSupport.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiInitializePfn @ 0x140241A00 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x140241E80 (ExpWorkerThread.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     SmSetThreadPagePriority @ 0x1402E1280 (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x1402F7640 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x1402F8440 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x1402F8E00 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x1402F9DF0 (CcPerformReadAhead.c)
 *     EtwpTraceThreadRundown @ 0x1403AE820 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x140564E48 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x14062955C (EtwTraceThread.c)
 *     PfSnAsyncContextInitialize @ 0x1406B350C (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x1406CB1FC (PfSnCheckActionsNeeded.c)
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
