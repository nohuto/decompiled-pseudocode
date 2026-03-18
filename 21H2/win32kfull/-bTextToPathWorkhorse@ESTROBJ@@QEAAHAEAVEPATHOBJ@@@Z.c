/*
 * XREFs of ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCA2C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BC830 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     STROBJ_bEnum @ 0x1C013A2C0 (STROBJ_bEnum.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C013A388 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D464C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall ESTROBJ::bTextToPathWorkhorse(STROBJ *pstro, struct EPATHOBJ *a2)
{
  unsigned int v2; // ebx
  PGLYPHPOS v4; // rsi
  ULONG ulCharInc; // r12d
  FIX x; // ecx
  FIX y; // edx
  int v8; // r12d
  ULONG v9; // edi
  unsigned int GlyphDataCache; // r15d
  RFONTOBJ *v11; // rcx
  unsigned int i; // r13d
  FIX v13; // ecx
  FIX v14; // edx
  bool v15; // zf
  PGLYPHPOS ppgpos; // [rsp+20h] [rbp-18h] BYREF
  ULONG pc; // [rsp+80h] [rbp+48h] BYREF
  EPATHOBJ *v19; // [rsp+88h] [rbp+50h]
  BOOL v20; // [rsp+90h] [rbp+58h]
  struct _POINTFIX v21; // [rsp+98h] [rbp+60h] BYREF

  v19 = a2;
  v2 = 0;
  pc = 0;
  v21 = 0LL;
  ppgpos = 0LL;
  *(_QWORD *)&pstro[1].cGlyphs = 0LL;
  do
  {
    v20 = STROBJ_bEnum(pstro, &pc, &ppgpos);
    if ( !pc )
      break;
    v4 = ppgpos;
    if ( !ppgpos )
      break;
    ulCharInc = pstro->ulCharInc;
    if ( ulCharInc )
    {
      v15 = ((__int64)pstro[4].pwszOrg & 0x100) == 0;
      x = ppgpos->ptl.x;
      v21.x = x;
      y = ppgpos->ptl.y;
      v21.y = y;
      if ( v15 )
      {
        v21.y = 16 * y;
        v21.x = 16 * x;
      }
      v8 = 16 * ulCharInc;
      v21.x -= v8;
    }
    else
    {
      v8 = 0;
    }
    v9 = pc;
    GlyphDataCache = pc;
    do
    {
      if ( ((__int64)pstro[4].pwszOrg & 2) == 0 )
      {
        v11 = *(RFONTOBJ **)&pstro[1].ulCharInc;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 84LL) & 1) != 0 )
          GlyphDataCache = v9
                        && (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(
                                           v11,
                                           v4,
                                           *(_DWORD *)(*(_QWORD *)v11 + 88LL)) != 0;
        else
          GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(v11, v9, v4);
        if ( !GlyphDataCache )
          break;
      }
      for ( i = 0; i < GlyphDataCache; ppgpos = v4 )
      {
        if ( v8 )
        {
          v21.x += v8;
        }
        else
        {
          v15 = ((__int64)pstro[4].pwszOrg & 0x100) == 0;
          v13 = v4->ptl.x;
          v21.x = v13;
          v14 = v4->ptl.y;
          v21.y = v14;
          if ( v15 )
          {
            v21.y = 16 * v14;
            v21.x = 16 * v13;
          }
        }
        if ( !EPATHOBJ::bAppend(v19, (struct EPATHOBJ *)v4->pgdf->pgb, &v21) )
          goto LABEL_25;
        ++v4;
        ++i;
      }
      v9 -= GlyphDataCache;
    }
    while ( v9 );
LABEL_25:
    v15 = v9 == 0;
    if ( v9 )
      goto LABEL_28;
  }
  while ( v20 );
  v15 = 1;
LABEL_28:
  LOBYTE(v2) = v15;
  return v2;
}
