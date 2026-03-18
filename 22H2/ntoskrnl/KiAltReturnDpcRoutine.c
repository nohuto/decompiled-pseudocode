/*
 * XREFs of KiAltReturnDpcRoutine @ 0x140580330
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140C40DD8, CriticalWorkQueue);
}
