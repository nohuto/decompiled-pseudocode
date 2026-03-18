/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0015648
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0016754 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0018C7C (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetDEVICEMETRICS(POINTL **this, struct _FD_DEVICEMETRICS *a2)
{
  FD_XFORM v4; // xmm0
  struct _FONTOBJ *v5; // r8
  struct DHPDEV__ *v6; // rdx
  unsigned int v7; // r8d
  FLONG flRealizedType; // eax
  FIX fxMaxAscender; // edx
  POINTL *v10; // rcx
  FIX fxMaxDescender; // eax
  POINTL *v12; // rcx
  LONG y; // r10d
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // edx
  unsigned __int64 v18; // r9
  POINTL v20; // [rsp+40h] [rbp-18h] BYREF

  v4 = *(FD_XFORM *)&(*this)[17].x;
  a2->lNonLinearExtLeading = 0x80000000;
  a2->fdxQuantized = v4;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v5 = (struct _FONTOBJ *)*this;
  v6 = (struct DHPDEV__ *)(*this)[14];
  v20 = (*this)[16];
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v20, v6, v5, 3u, 0xFFFFFFFF, 0LL, a2, 0x7Cu) == -1 )
    return 0;
  v7 = 1;
  (*this)[34].y = 1;
  flRealizedType = a2->flRealizedType;
  if ( (a2->flRealizedType & 2) != 0 )
  {
    (*this)[34].y |= 0x40u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 4) != 0 )
  {
    (*this)[34].y |= 0x20u;
    flRealizedType = a2->flRealizedType;
  }
  if ( (flRealizedType & 8) != 0 )
    (*this)[34].y |= 0x10u;
  (*this)[43].x = a2->cxMax;
  (*this)[35] = a2->ptlUnderline1;
  (*this)[36] = a2->ptlStrikeout;
  (*this)[37] = a2->ptlULThickness;
  (*this)[38] = a2->ptlSOThickness;
  fxMaxAscender = a2->fxMaxAscender;
  v10 = *this;
  fxMaxDescender = a2->fxMaxDescender;
  if ( fxMaxAscender < 0 )
    goto LABEL_11;
  if ( fxMaxDescender >= 0 )
  {
    fxMaxDescender += fxMaxAscender;
LABEL_11:
    v10[40].y = fxMaxDescender;
    goto LABEL_12;
  }
  v10[40].y = fxMaxAscender;
LABEL_12:
  (*this)[39].y = a2->fxMaxAscender;
  (*this)[40].x = -a2->fxMaxDescender;
  (*this)[44].x = ((*this)[39].y + 8) >> 4;
  (*this)[44].y = ((*this)[39].y - (*this)[40].x + 8) >> 4;
  (*this)[39].x = a2->lD;
  if ( (*this)[39].x < 0 )
    return 0;
  (*this)[43].y = a2->cyMax;
  (*this)[79].x = a2->cjGlyphMax;
  (*this)[79].y = a2->cjGlyphMax;
  v12 = *this;
  y = (*this)[1].y;
  if ( (y & 0x10000000) != 0 )
  {
    v15 = (unsigned int)v12[43].y;
    v16 = v15 * ((unsigned int)v12[43].x + 2LL);
    if ( (y & 0x20000000) != 0 )
    {
      v16 *= 5LL;
      v17 = (v12[43].x + 2) * (v15 + 1);
    }
    else
    {
      v17 = v15 * (v12[43].x + 2);
    }
    v18 = ((v16 + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
    if ( v18 <= 0xFFFFFFFF )
    {
      v12[79].x = ((v17 + 3) & 0xFFFFFFFC) + 16;
      (*this)[79].y = v18;
      v12 = *this;
      goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  *(FD_XFORM *)&v12[45].x = a2->fdxQuantized;
  (*this)[47].x = a2->lNonLinearExtLeading;
  (*this)[47].y = a2->lNonLinearIntLeading;
  (*this)[48].x = a2->lNonLinearMaxCharWidth;
  (*this)[48].y = a2->lNonLinearAvgCharWidth;
  (*this)[87].x = a2->lMinA;
  (*this)[87].y = a2->lMinC;
  (*this)[88].x = a2->lMinD;
  (*this)[1].x = (*this)[43].x;
  return v7;
}
