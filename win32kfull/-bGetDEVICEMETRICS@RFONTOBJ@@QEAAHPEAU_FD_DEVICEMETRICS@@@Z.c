/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0123228
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C01225F4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0122090 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetDEVICEMETRICS(POINTL **this, struct _FD_DEVICEMETRICS *a2)
{
  FD_XFORM v4; // xmm0
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *v6; // rdx
  FIX fxMaxAscender; // edx
  POINTL *v8; // rcx
  FIX fxMaxDescender; // eax
  unsigned int *v10; // rdx
  LONG y; // r9d
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  unsigned __int64 v15; // r8
  __int64 result; // rax
  POINTL v18; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(FD_XFORM *)&(*this)[17].x;
  a2->lNonLinearExtLeading = 0x80000000;
  a2->fdxQuantized = v4;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v5 = (struct _FONTOBJ *)*this;
  v6 = (struct DHPDEV__ *)(*this)[14];
  v18 = (*this)[16];
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v18, v6, v5, 3u, 0xFFFFFFFF, 0LL, a2, 0x7Cu) == -1 )
    return 0LL;
  (*this)[34].y = 1;
  if ( (a2->flRealizedType & 2) != 0 )
    (*this)[34].y |= 0x40u;
  if ( (a2->flRealizedType & 4) != 0 )
    (*this)[34].y |= 0x20u;
  if ( (a2->flRealizedType & 8) != 0 )
    (*this)[34].y |= 0x10u;
  (*this)[43].x = a2->cxMax;
  (*this)[35] = a2->ptlUnderline1;
  (*this)[36] = a2->ptlStrikeout;
  (*this)[37] = a2->ptlULThickness;
  (*this)[38] = a2->ptlSOThickness;
  fxMaxAscender = a2->fxMaxAscender;
  v8 = *this;
  fxMaxDescender = a2->fxMaxDescender;
  if ( fxMaxAscender < 0 )
    goto LABEL_11;
  if ( fxMaxDescender >= 0 )
  {
    fxMaxDescender += fxMaxAscender;
LABEL_11:
    v8[40].y = fxMaxDescender;
    goto LABEL_12;
  }
  v8[40].y = fxMaxAscender;
LABEL_12:
  (*this)[39].y = a2->fxMaxAscender;
  (*this)[40].x = -a2->fxMaxDescender;
  (*this)[44].x = ((*this)[39].y + 8) >> 4;
  (*this)[44].y = ((*this)[39].y - (*this)[40].x + 8) >> 4;
  (*this)[39].x = a2->lD;
  if ( (*this)[39].x >= 0 )
  {
    (*this)[43].y = a2->cyMax;
    (*this)[79].x = a2->cjGlyphMax;
    (*this)[79].y = a2->cjGlyphMax;
    v10 = (unsigned int *)*this;
    y = (*this)[1].y;
    if ( (y & 0x10000000) == 0 )
    {
LABEL_18:
      *(FD_XFORM *)&(*this)[45].x = a2->fdxQuantized;
      (*this)[47].x = a2->lNonLinearExtLeading;
      (*this)[47].y = a2->lNonLinearIntLeading;
      (*this)[48].x = a2->lNonLinearMaxCharWidth;
      result = 1LL;
      (*this)[48].y = a2->lNonLinearAvgCharWidth;
      (*this)[87].x = a2->lMinA;
      (*this)[87].y = a2->lMinC;
      (*this)[88].x = a2->lMinD;
      (*this)[1].x = (*this)[43].x;
      return result;
    }
    v12 = v10[87];
    v13 = v12 * (v10[86] + 2LL);
    if ( (y & 0x20000000) != 0 )
    {
      v13 *= 5LL;
      v14 = (v10[86] + 2) * (v12 + 1);
    }
    else
    {
      v14 = v12 * (v10[86] + 2);
    }
    v15 = ((v13 + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
    if ( v15 <= 0xFFFFFFFF )
    {
      v10[158] = ((v14 + 3) & 0xFFFFFFFC) + 16;
      (*this)[79].y = v15;
      goto LABEL_18;
    }
  }
  return 0LL;
}
