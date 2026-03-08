/*
 * XREFs of FONTOBJ_cGetGlyphs @ 0x1C029AF90
 * Callers:
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02CE7E0 (NtGdiFONTOBJ_cGetGlyphs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02FF64C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  ULONG result; // eax
  HGLYPH v6; // eax
  int inserted; // eax
  struct _GLYPHPOS v8; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v9; // [rsp+68h] [rbp+20h] BYREF

  result = 0;
  memset(&v8, 0, sizeof(v8));
  if ( phg )
  {
    v6 = *phg;
    v9 = pfo;
    v8.hg = v6;
    inserted = RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v9, &v8, iMode);
    v9 = 0LL;
    if ( inserted )
    {
      *ppvGlyph = v8.pgdf;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      return 1;
    }
    else
    {
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      return 0;
    }
  }
  return result;
}
