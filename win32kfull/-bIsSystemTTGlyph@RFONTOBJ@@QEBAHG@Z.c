/*
 * XREFs of ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1C02B9180
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C01211B4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0121768 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C02B630C (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B8154 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RFONTOBJ::bIsSystemTTGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  int v2; // edi
  __int64 v4; // rax
  unsigned int v5; // r11d
  __int64 v6; // r8
  int v7; // eax

  v2 = a2;
  v4 = SGDGetSessionState(this);
  v5 = 0;
  if ( *(_DWORD *)(*(_QWORD *)this + 708LL) )
  {
    v6 = *(_QWORD *)(v4 + 32);
    v7 = *(unsigned __int16 *)(v6 + 13880);
    if ( (unsigned __int16)v2 >= (unsigned __int16)v7 && (unsigned __int16)v2 <= *(_WORD *)(v6 + 13882) )
      return ((0x80000000 >> ((v2 - v7) % 32)) & *(_DWORD *)(*(_QWORD *)(v6 + 13888) + 4LL * ((v2 - v7) / 32))) != 0;
  }
  return v5;
}
