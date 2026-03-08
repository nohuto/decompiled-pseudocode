/*
 * XREFs of EngMovePointer @ 0x1C0269DC0
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C0127E08 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  int v4; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EngpMovePointer(pso, x, y, prcl, v4);
}
