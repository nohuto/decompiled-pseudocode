void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  int v4; // [rsp+20h] [rbp-18h]

  v4 = 0;
  EngpMovePointer(pso, x, y, prcl, v4);
}
