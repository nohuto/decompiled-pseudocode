/*
 * XREFs of EtwpCloseRealTimeConnectionObject @ 0x14067ED20
 * Callers:
 *     <none>
 * Callees:
 *     EtwpRealtimeDisconnectConsumer @ 0x14067ED38 (EtwpRealtimeDisconnectConsumer.c)
 */

__int64 __fastcall EtwpCloseRealTimeConnectionObject(__int64 a1, __int64 a2)
{
  return EtwpRealtimeDisconnectConsumer(a2);
}
