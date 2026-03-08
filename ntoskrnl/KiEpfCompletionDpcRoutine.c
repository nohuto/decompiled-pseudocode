/*
 * XREFs of KiEpfCompletionDpcRoutine @ 0x140576AF0
 * Callers:
 *     <none>
 * Callees:
 *     KiEpfDrainCompletionQueue @ 0x140576B0C (KiEpfDrainCompletionQueue.c)
 */

__int64 KiEpfCompletionDpcRoutine()
{
  _InterlockedIncrement(&dword_140C413EC);
  return KiEpfDrainCompletionQueue();
}
