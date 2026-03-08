/*
 * XREFs of LogSchedEvent @ 0x1C004E3AC
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     AMLIPauseInterpreter @ 0x1C0048968 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0048D2C (AMLIResumeInterpreter.c)
 *     RestartContext @ 0x1C00512E8 (RestartContext.c)
 *     RestartCtxtCallback @ 0x1C0051440 (RestartCtxtCallback.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     AsyncCallBack @ 0x1C00543D8 (AsyncCallBack.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C004E2DC (LogEvent.c)
 */

PVOID __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8

  v6 = 0LL;
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (__int64)KeGetCurrentThread(), v6, a2, (unsigned int)gReadyQueue, a3, a4, a5);
}
