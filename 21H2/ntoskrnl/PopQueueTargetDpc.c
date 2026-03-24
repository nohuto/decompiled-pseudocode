/*
 * XREFs of PopQueueTargetDpc @ 0x14027B910
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x14027B7DC (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x14027B8C0 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x140229400 (KeEnumerateNextProcessor.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(PRKDPC Dpc, __int64 a2)
{
  unsigned __int16 **v4; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(unsigned __int16 ***)(a2 + 32);
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
