/*
 * XREFs of WNDOBJ_bEnum @ 0x1C028B070
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 */

BOOL __stdcall WNDOBJ_bEnum(WNDOBJ *pwo, ULONG cj, ULONG *pul)
{
  return XCLIPOBJ::bEnum((XCLIPOBJ *)pwo, cj, (char *)pul, 0LL);
}
