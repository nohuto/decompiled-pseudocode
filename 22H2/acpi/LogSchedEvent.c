/*
 * XREFs of LogSchedEvent @ 0x1C002A1C0
 * Callers:
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C00047A0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AMLIPauseInterpreter @ 0x1C006355C (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0063690 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C00682D8 (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C002A21C (LogEvent.c)
 */

__int64 __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11

  v5 = a3;
  LODWORD(a3) = 0;
  if ( a2 )
    a3 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (unsigned int)KeGetCurrentThread(), a3, a2, (unsigned int)gReadyQueue, v5, a4, a5);
}
