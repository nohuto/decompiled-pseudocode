/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x140203AE8
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068A160 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
