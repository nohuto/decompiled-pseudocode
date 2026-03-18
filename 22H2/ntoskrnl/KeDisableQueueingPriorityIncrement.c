/*
 * XREFs of KeDisableQueueingPriorityIncrement @ 0x14031E08C
 * Callers:
 *     NtCreateWorkerFactory @ 0x1407860A0 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall KeDisableQueueingPriorityIncrement(volatile signed __int32 *a1)
{
  _interlockedbittestandset(a1, 9u);
}
