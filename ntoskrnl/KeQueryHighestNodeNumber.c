/*
 * XREFs of KeQueryHighestNodeNumber @ 0x1402AEF30
 * Callers:
 *     ExpQueryNumaProcessorMap @ 0x140729CDC (ExpQueryNumaProcessorMap.c)
 *     IoGetDeviceNumaNode @ 0x14085FE10 (IoGetDeviceNumaNode.c)
 *     EtwpProcessorRundown @ 0x1409EC980 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryHighestNodeNumber(void)
{
  return KeNumberNodes - 1;
}
