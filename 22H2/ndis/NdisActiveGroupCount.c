/*
 * XREFs of NdisActiveGroupCount @ 0x1C00BD340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisActiveGroupCount(void)
{
  return KeQueryActiveGroupCount();
}
