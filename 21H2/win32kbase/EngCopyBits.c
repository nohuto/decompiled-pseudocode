/*
 * XREFs of EngCopyBits @ 0x1C023D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  BOOL result; // eax

  result = (int)qword_1C029B008;
  if ( qword_1C029B008 )
    return qword_1C029B008(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
