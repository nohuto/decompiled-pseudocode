/*
 * XREFs of EngMovePointer @ 0x1C026CCD0
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C0153AF0 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, prcl, 0);
}
