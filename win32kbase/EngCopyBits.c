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
