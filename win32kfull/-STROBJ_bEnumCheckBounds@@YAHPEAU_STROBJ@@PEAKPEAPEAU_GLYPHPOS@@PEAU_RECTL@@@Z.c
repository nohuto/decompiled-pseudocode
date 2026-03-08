/*
 * XREFs of ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C02DB668
 * Callers:
 *     EngTextOut @ 0x1C001A540 (EngTextOut.c)
 * Callees:
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C02DBE24 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C02DD9A0 (STROBJ_bEnum.c)
 *     vGetPosInfo @ 0x1C02DDBC0 (vGetPosInfo.c)
 */

__int64 __fastcall STROBJ_bEnumCheckBounds(struct _STROBJ *a1, ULONG *pc, PGLYPHPOS *ppgpos, struct _RECTL *a4)
{
  PGLYPHPOS *v5; // rbx
  ULONG *v6; // r13
  int v8; // r14d
  ULONG cGlyphs; // r15d
  BOOL v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // r12d
  PGLYPHPOS v13; // rax
  __int64 v14; // rbx
  PGLYPHPOS v15; // r13
  __int64 v16; // rsi
  BOOL v18; // [rsp+20h] [rbp-58h]
  PGLYPHPOS v19; // [rsp+28h] [rbp-50h]

  v5 = ppgpos;
  v6 = pc;
  v8 = 1;
  while ( 1 )
  {
    cGlyphs = a1[1].cGlyphs;
    v10 = STROBJ_bEnum(a1, v6, v5);
    v11 = *v6;
    v12 = v10;
    v18 = v10;
    v13 = *v5;
    v14 = 0LL;
    v19 = v13;
    if ( *v6 )
    {
      v15 = v13;
      do
      {
        if ( !(unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v15[v14], a4, cGlyphs + (unsigned int)v14) )
          break;
        v14 = (unsigned int)(v14 + 1);
      }
      while ( (unsigned int)v14 < v11 );
      v6 = pc;
      if ( (unsigned int)v14 < v11 )
        break;
    }
    if ( !v12 )
    {
      *v6 = 0;
      return 0LL;
    }
    v5 = ppgpos;
  }
  v16 = (unsigned int)(v14 + 1);
  if ( (unsigned int)v16 < v11 )
  {
    do
    {
      if ( (unsigned int)bGlyphOutOfBounds((struct ESTROBJ *)a1, &v19[v16], a4, (unsigned int)v16 + cGlyphs) )
        break;
      ++v8;
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < v11 );
    v12 = v18;
    v6 = pc;
  }
  if ( v8 + (int)v14 < v11 )
    v12 = 1;
  a1[1].cGlyphs = v14 + v8 + cGlyphs;
  *ppgpos += (unsigned int)v14;
  *v6 = v8;
  if ( ((__int64)a1[4].pwszOrg & 0x1400) == 0 && (cGlyphs || (_DWORD)v14) )
  {
    if ( a1->ulCharInc )
      vGetPosInfo(a1, cGlyphs + (unsigned int)v14, &(*ppgpos)->ptl);
  }
  return v12;
}
