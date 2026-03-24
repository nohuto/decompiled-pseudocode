/*
 * XREFs of MiThreadIdealNode @ 0x140547B0C
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x1408C8A94 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 32532);
}
