/*
 * XREFs of EngMovePointer @ 0x1C026EFB0
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C01365E0 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, prcl, 0);
}
