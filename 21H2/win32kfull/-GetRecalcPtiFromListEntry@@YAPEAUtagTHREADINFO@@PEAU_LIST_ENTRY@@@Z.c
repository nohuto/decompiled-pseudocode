/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A9310
 * Callers:
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00A918C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00A924C (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    Flink = (struct _LIST_ENTRY *)((char *)a1 - 744);
  else
    Flink = a1[1].Flink;
  if ( Flink && !Flink[28].Blink )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return Flink;
}
