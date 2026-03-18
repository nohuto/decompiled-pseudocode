/*
 * XREFs of CLIPOBJ_ppoGetPath @ 0x1C026B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C026B18C (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 */

PATHOBJ *__stdcall CLIPOBJ_ppoGetPath(CLIPOBJ *pco)
{
  return XCLIPOBJ::ppoGetPath((XCLIPOBJ *)pco);
}
