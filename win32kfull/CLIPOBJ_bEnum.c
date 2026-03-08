/*
 * XREFs of CLIPOBJ_bEnum @ 0x1C00032E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 */

BOOL __stdcall CLIPOBJ_bEnum(CLIPOBJ *pco, ULONG cj, ULONG *pul)
{
  return XCLIPOBJ::bEnum((XCLIPOBJ *)pco, cj, pul, 0LL);
}
