/*
 * XREFs of ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C014DCE6
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C011B94C (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z @ 0x1C011CCCC (-ppfeSynthesizeAMatch@MAPPER@@QEAAPEAVPFE@@PEAK0PEAU_POINTL@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C014F852 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029D344 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IFIOBJ::bSimItalic(IFIOBJ *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  result = 0LL;
  v3 = *(int *)(*(_QWORD *)this + 24LL);
  if ( (_DWORD)v3 )
  {
    if ( (*(_BYTE *)(v1 + 52) & 0x20) != 0 )
      return *(unsigned int *)(v3 + v1 + 8);
    else
      return *(unsigned int *)(v3 + v1 + 4);
  }
  return result;
}
