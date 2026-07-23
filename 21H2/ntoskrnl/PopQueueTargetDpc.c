/*
 * XREFs of PopQueueTargetDpc @ 0x1402698B0
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x14026977C (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x140269860 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(PRKDPC Dpc, __int64 a2)
{
  __int64 v4; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 32);
  v6 = 0;
  if ( (int)KeEnumerateNextProcessor(&v6, v4) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  Dpc->TargetInfoAsUlong = 787;
  Dpc->DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecuteProcessorCallback;
  Dpc->DeferredContext = (PVOID)a2;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  if ( !Dpc->DpcData )
    Dpc->Number = v6 + 1280;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
