/*
 * XREFs of ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C011DA20
 * Callers:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C012031C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C0120BA0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C014F784 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B7194 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 * Callees:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C011DA70 (xInsertMetricsPlusRFONTOBJ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C01234E4 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bInsertMetricsPlus(RFONTOBJ *this, struct _GLYPHDATA **a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(*(_QWORD *)this + 480LL) )
    return xInsertMetricsPlusRFONTOBJ(this);
  result = RFONTOBJ::bAllocateCache(this, (struct RFONTOBJ *)a2);
  if ( (_DWORD)result )
    return xInsertMetricsPlusRFONTOBJ(this);
  return result;
}
