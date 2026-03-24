/*
 * XREFs of PsGetPagePriorityThread @ 0x140242140
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiInitializeInPageSupport @ 0x14023E950 (MiInitializeInPageSupport.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiInitializePfn @ 0x140241370 (MiInitializePfn.c)
 *     ExpWorkerThread @ 0x1402417F0 (ExpWorkerThread.c)
 *     CcCompleteAsyncRead @ 0x140277CC0 (CcCompleteAsyncRead.c)
 *     CcAsyncCopyRead @ 0x140278AC0 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x140279480 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x1403135D0 (SmSetThreadPagePriority.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     EtwpTraceThreadRundown @ 0x1403A9640 (EtwpTraceThreadRundown.c)
 *     PfLogFileDataAccess @ 0x140564D88 (PfLogFileDataAccess.c)
 *     EtwTraceThread @ 0x14062997C (EtwTraceThread.c)
 *     PfSnCheckActionsNeeded @ 0x140630F78 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncContextInitialize @ 0x1406964CC (PfSnAsyncContextInitialize.c)
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
