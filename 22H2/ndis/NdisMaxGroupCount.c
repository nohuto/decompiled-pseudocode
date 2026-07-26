/*
 * XREFs of NdisMaxGroupCount @ 0x1C00BD3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT NdisMaxGroupCount(void)
{
  return KeQueryMaximumGroupCount();
}
