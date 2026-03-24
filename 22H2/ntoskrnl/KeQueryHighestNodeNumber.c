/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1403544C0
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1406FDCF0 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x1407735D0 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x14093E8DC (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
