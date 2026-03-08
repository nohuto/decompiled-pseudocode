/*
 * XREFs of KiAltReturnDpcRoutine @ 0x14057DE00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void KiAltReturnDpcRoutine()
{
  ExQueueWorkItem(&stru_140C40978, CriticalWorkQueue);
}
