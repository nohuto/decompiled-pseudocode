/*
 * XREFs of PpmHeteroHgsUpdateDpcRoutine @ 0x140577AC0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void PpmHeteroHgsUpdateDpcRoutine()
{
  ExQueueWorkItem(&PpmHeteroHgsUpdateWorkItem, CriticalWorkQueue);
}
