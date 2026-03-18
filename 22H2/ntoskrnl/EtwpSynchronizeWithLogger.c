/*
 * XREFs of EtwpSynchronizeWithLogger @ 0x1407F5FE0
 * Callers:
 *     EtwpTransitionToRealtime @ 0x1405FF618 (EtwpTransitionToRealtime.c)
 *     EtwpRealtimeDisconnectConsumer @ 0x140682118 (EtwpRealtimeDisconnectConsumer.c)
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 *     EtwpFlushTrace @ 0x1407F6068 (EtwpFlushTrace.c)
 *     EtwpUpdateTrace @ 0x1407F8630 (EtwpUpdateTrace.c)
 *     EtwpIncrementTraceFile @ 0x1409E7FE0 (EtwpIncrementTraceFile.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9C0 (ObGetCurrentIrql.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeInsertQueueDpc @ 0x140254650 (KeInsertQueueDpc.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 */

__int64 __fastcall EtwpSynchronizeWithLogger(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _KEVENT *)(a1 + 456);
  KeResetEvent((PRKEVENT)(a1 + 456));
  _InterlockedOr((volatile signed __int32 *)(a1 + 824), a2);
  if ( ObGetCurrentIrql() > 2u )
  {
    if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 824), 8u) )
      KeInsertQueueDpc((PRKDPC)(a1 + 568), 0LL, 0LL);
  }
  else
  {
    KeSetEvent((PRKEVENT)(a1 + 480), 0, 0);
  }
  KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
  v5 = *(_DWORD *)(a1 + 40);
  KeResetEvent(v2);
  *(_DWORD *)(a1 + 40) = 0;
  return v5;
}
