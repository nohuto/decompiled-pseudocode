/*
 * XREFs of MiThreadIdealNode @ 0x1406153C8
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x140A2F604 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
