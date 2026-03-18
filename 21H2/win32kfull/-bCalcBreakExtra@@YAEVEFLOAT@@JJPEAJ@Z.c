/*
 * XREFs of ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C00C49AC
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C001A108 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C00C4794 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02BCE14 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02BD198 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 * Callees:
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C014A834 (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

bool __fastcall bCalcBreakExtra(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  bool result; // al
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( a2 )
  {
    v7 = 0;
    bFToL(a1, &v7, 0LL);
    if ( !(unsigned int)SafeDivide<long,long,long>(v7, a3, a4) )
      return 1;
  }
  return result;
}
