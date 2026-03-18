/*
 * XREFs of LogSchedEvent @ 0x1C004E3CC
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     AMLIPauseInterpreter @ 0x1C0048988 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0048D4C (AMLIResumeInterpreter.c)
 *     RestartContext @ 0x1C0051308 (RestartContext.c)
 *     RestartCtxtCallback @ 0x1C0051460 (RestartCtxtCallback.c)
 *     RunContext @ 0x1C0053F54 (RunContext.c)
 *     AsyncCallBack @ 0x1C00543F8 (AsyncCallBack.c)
 *     AsyncEvalObject @ 0x1C00544F0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054EAC (SyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C004E2FC (LogEvent.c)
 */

PVOID __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8

  v6 = 0LL;
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (__int64)KeGetCurrentThread(), v6, a2, (unsigned int)gReadyQueue, a3, a4, a5);
}
