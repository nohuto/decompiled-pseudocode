/*
 * XREFs of ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0119460
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0005264 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C014EE00 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C02BD9A8 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02BDC10 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02BE130 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02BE76C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C001DFB8 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0098A30 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00993F0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C009C938 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C009D900 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00E7118 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01527DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct XDCOBJ *a6,
        struct ESTROBJ *a7)
{
  __int64 v9; // r15
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _DWORD *v13; // rcx
  bool v14; // zf
  struct GPRUN *v15; // r13
  _DWORD *v16; // r8
  int v17; // ebp
  __int64 v18; // r12
  struct _GLYPHDATA *LinkMetricsPlus; // rbp
  __int64 result; // rax
  struct GPRUN *Run; // rax
  unsigned __int16 *v22; // [rsp+40h] [rbp-48h]
  unsigned __int16 *v23; // [rsp+48h] [rbp-40h]
  unsigned __int16 *v24; // [rsp+50h] [rbp-38h]
  _DWORD *i; // [rsp+90h] [rbp+8h]

  v9 = (unsigned int)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) || (result = RFONTOBJ::bAllocateCache(this, a2), (_DWORD)result) )
  {
    v11 = *(_QWORD *)this;
    v12 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 1824LL) & 0x40000000) != 0 && *(_DWORD *)(v11 + 88) == 1 )
    {
      if ( a5 )
        *a5 = 0;
      return (unsigned int)RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v9, a3, a4, a6, a7);
    }
    else
    {
      v13 = *(_DWORD **)(v11 + 480);
      v22 = a4;
      v23 = a4;
      v14 = *v13 == 0;
      *a5 = 1;
      if ( !v14 )
      {
        v24 = &a4[v9];
        v15 = (struct GPRUN *)(v13 + 4);
        if ( a4 >= v24 )
          return v12;
        v16 = v13 + 5;
        for ( i = v13 + 5; ; v16 = i )
        {
          v17 = *a4;
          v18 = (unsigned int)(v17 - *(_DWORD *)v15);
          if ( (unsigned int)v18 >= *v16 )
          {
            Run = RFONTOBJ::gprunFindRun(this, v17);
            v15 = Run;
            v18 = (unsigned int)(v17 - *(_DWORD *)Run);
            i = (_DWORD *)((char *)Run + 4);
            if ( (unsigned int)v18 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, a4, v22, v9, a5, 1);
              if ( !LinkMetricsPlus )
                return 0;
            }
            else
            {
              _mm_lfence();
              LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v18);
            }
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v15 + 1) + 8 * v18);
          }
          if ( !LinkMetricsPlus )
          {
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(
                                  this,
                                  (struct _GLYPHDATA **)(*((_QWORD *)v15 + 1) + 8 * v18)) )
              return 0;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v15 + 1) + 8 * v18);
          }
          if ( !LinkMetricsPlus->gdf.pgb
            && *a5
            && *(_DWORD *)(*(_QWORD *)this + 88LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits((struct _FONTOBJ **)this, LinkMetricsPlus, a4 == v23) )
          {
            *a5 = 0;
          }
          ++a4;
          a3->hg = LinkMetricsPlus->hg;
          a3->pgdf = &LinkMetricsPlus->gdf;
          ++a3;
          if ( a4 >= v24 )
            return v12;
        }
      }
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        a3->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        a3->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++a3;
      }
    }
    return v12;
  }
  return result;
}
