/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C007E540
 * Callers:
 *     PortTraceInitTracing @ 0x1C005AB94 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C005A8F8 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C007E564 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
