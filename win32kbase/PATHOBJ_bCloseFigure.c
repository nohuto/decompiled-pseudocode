/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x1C01819B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0180EF0 (-bCloseFigure@EPATHOBJ@@QEAAHXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
