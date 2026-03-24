/*
 * XREFs of EngCopyBits @ 0x1C01FBC50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
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

  result = (int)qword_1C0256288;
  if ( qword_1C0256288 )
    return qword_1C0256288(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
