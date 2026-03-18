/*
 * XREFs of ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C013A388
 * Callers:
 *     STROBJ_bEnum @ 0x1C013A2C0 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C02A567C (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC3E0 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BCA2C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0018B2C (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 */

unsigned __int64 __fastcall RFONTOBJ::cGetGlyphDataCache(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  struct _GLYPHPOS *v5; // rbx
  struct _GLYPHPOS *v6; // rsi
  struct _GLYPHDATA *pgdf; // rdx

  if ( !*(_DWORD *)(*(_QWORD *)this + 88LL) )
    return a2;
  v5 = a3;
  v6 = &a3[a2];
  if ( a3 < v6 )
  {
    do
    {
      pgdf = (struct _GLYPHDATA *)v5->pgdf;
      if ( !pgdf->gdf.pgb && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, pgdf) )
        break;
      ++v5;
    }
    while ( v5 < v6 );
  }
  return 0xAAAAAAAAAAAAAAABuLL * (((char *)v5 - (char *)a3) >> 3);
}
