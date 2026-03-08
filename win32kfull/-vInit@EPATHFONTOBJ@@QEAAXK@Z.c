/*
 * XREFs of ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C0288F7C
 * Callers:
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02FF7F8 (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02FF940 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02FFB54 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EPATHFONTOBJ::vInit(EPATHFONTOBJ *this, int a2)
{
  *((_QWORD *)this + 1) = (char *)this + 80;
  *((_QWORD *)this + 13) = (char *)this + 400;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = (char *)this + 424;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 104) = a2 - 400;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 40) = 1;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 41) = 1;
  *(_QWORD *)this = 0LL;
}
