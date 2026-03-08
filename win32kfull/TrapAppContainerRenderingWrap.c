/*
 * XREFs of TrapAppContainerRenderingWrap @ 0x1C005C760
 * Callers:
 *     <none>
 * Callees:
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 */

_BOOL8 __fastcall TrapAppContainerRenderingWrap(struct XDCOBJ *a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  return TrapAppContainerRenderingWorker(a1, a2, a3, a4);
}
