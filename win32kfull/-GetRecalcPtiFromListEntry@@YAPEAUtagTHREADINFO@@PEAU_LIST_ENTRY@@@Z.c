struct _LIST_ENTRY *__fastcall GetRecalcPtiFromListEntry(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx

  if ( (unsigned int)IsPackedQueueRecalc() )
    Flink = a1[1].Flink;
  else
    Flink = (struct _LIST_ENTRY *)((char *)a1 - 744);
  if ( Flink && !Flink[28].Blink )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10734LL);
  return Flink;
}
