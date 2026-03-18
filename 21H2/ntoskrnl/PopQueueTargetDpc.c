/*
 * XREFs of PopQueueTargetDpc @ 0x140293BA0
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x140293A88 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x140293B50 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
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
    Dpc->Number = v6 + 2048;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
