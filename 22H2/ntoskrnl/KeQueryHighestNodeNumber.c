/*
 * XREFs of KeQueryHighestNodeNumber @ 0x14033CA40
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x1407B43C0 (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x140864350 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1409EF810 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
