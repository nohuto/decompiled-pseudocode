/*
 * XREFs of EngCopyBits @ 0x1C02714F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
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

  result = (int)qword_1C02D5808;
  if ( qword_1C02D5808 )
    return qword_1C02D5808(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return result;
}
