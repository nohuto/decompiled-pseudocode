BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  if ( qword_1C02D5918 )
    return ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))qword_1C02D5918)(
             psoTrg,
             psoSrc,
             psoMask,
             pco,
             pxlo,
             prclTrg,
             pptlSrc,
             pptlMask,
             pbo,
             pptlBrush,
             rop4);
  else
    return 0;
}
