/*
 * XREFs of ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00E3CD4
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreRealizePalette @ 0x1C02D3600 (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DE318 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XEPALOBJ::bIsPalDefault(XEPALOBJ *this)
{
  return *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(this) + 750);
}
