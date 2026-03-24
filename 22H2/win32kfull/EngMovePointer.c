/*
 * XREFs of EngMovePointer @ 0x1C026E9D0
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C0136230 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, prcl, 0);
}
