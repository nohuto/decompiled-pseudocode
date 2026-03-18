/*
 * XREFs of ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C00E0C08
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     GreRealizePalette @ 0x1C02D181C (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02D2760 (NtGdiResizePalette.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02DC558 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XEPALOBJ::bIsPalDefault(XEPALOBJ *this)
{
  return *(_QWORD *)this == *((_QWORD *)Gre::Base::Globals(this) + 750);
}
