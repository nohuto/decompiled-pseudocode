/*
 * XREFs of ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C011E1F4
 * Callers:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0120BA0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C02FFCB0 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C011E244 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C01234E4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertGlyphbits(RFONTOBJ *this, struct _GLYPHDATA *a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) )
    return xInsertGlyphbitsRFONTOBJ(this);
  result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2);
  if ( (_DWORD)result )
    return xInsertGlyphbitsRFONTOBJ(this);
  return result;
}
