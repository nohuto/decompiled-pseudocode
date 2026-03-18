/*
 * XREFs of ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C015DA50
 * Callers:
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C012A800 (NtGdiFONTOBJ_pifi.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C0150FC4 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B2E70 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B30C0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTTMPOBJ::~RFONTTMPOBJ(RFONTTMPOBJ *this)
{
  *(_QWORD *)this = 0LL;
  RFONTOBJ::~RFONTOBJ(this);
}
