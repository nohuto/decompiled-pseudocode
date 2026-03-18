/*
 * XREFs of MiThreadIdealNode @ 0x140617878
 * Callers:
 *     MiGetLargePagesForSystemMapping @ 0x140A32334 (MiGetLargePagesForSystemMapping.c)
 * Callees:
 *     <none>
 */

__int64 MiThreadIdealNode()
{
  return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
