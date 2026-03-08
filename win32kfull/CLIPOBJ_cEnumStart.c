/*
 * XREFs of CLIPOBJ_cEnumStart @ 0x1C000DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

ULONG __stdcall CLIPOBJ_cEnumStart(CLIPOBJ *pco, BOOL bAll, ULONG iType, ULONG iDirection, ULONG cLimit)
{
  return XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, bAll, iType, iDirection, cLimit);
}
