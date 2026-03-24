/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14035A910
 * Callers:
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
