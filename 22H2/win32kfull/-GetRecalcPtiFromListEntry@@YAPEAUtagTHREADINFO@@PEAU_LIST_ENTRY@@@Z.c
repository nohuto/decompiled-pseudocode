/*
 * XREFs of ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C005C5D4
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C005C014 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C005C4E0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x1C005C618 (-IsPackedQueueRecalc@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( (unsigned int)IsPackedQueueRecalc() )
    Flink = a1[1].Flink;
  else
    Flink = (struct _LIST_ENTRY *)((char *)a1 - 744);
  if ( Flink && !Flink[28].Blink )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10711LL);
  return Flink;
}
