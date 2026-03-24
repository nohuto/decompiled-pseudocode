/*
 * XREFs of WNDOBJ_cEnumStart @ 0x1C0287970
 * Callers:
 *     <none>
 * Callees:
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CEBA0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 */

ULONG __stdcall WNDOBJ_cEnumStart(WNDOBJ *pwo, ULONG iType, ULONG iDirection, ULONG cLimit)
{
  return XCLIPOBJ::cEnumStart((XCLIPOBJ *)pwo, 1, iType, iDirection, cLimit);
}
