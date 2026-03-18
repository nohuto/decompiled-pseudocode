/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00921F8
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C0009E08 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GreGetPaletteEntries @ 0x1C00908E0 (GreGetPaletteEntries.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00911E4 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C009212C (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C00921B0 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C014B650 (NtGdiGetNearestPaletteIndex.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C02714F8 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C02735E0 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     EngQueryPalette @ 0x1C028BFC0 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02A4CB4 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B4E40 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02B5E20 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02B5EAC (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02B6290 (GreSetPaletteEntries.c)
 *     GreUnrealizeObject @ 0x1C02B66F8 (GreUnrealizeObject.c)
 *     NtGdiResizePalette @ 0x1C02B6830 (NtGdiResizePalette.c)
 * Callees:
 *     <none>
 */

EPALOBJ *__fastcall EPALOBJ::EPALOBJ(EPALOBJ *this, HPALETTE a2)
{
  HPALETTE v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = a2;
  LOBYTE(a2) = 8;
  *(_QWORD *)this = HmgShareLockCheck(v2, a2);
  return this;
}
