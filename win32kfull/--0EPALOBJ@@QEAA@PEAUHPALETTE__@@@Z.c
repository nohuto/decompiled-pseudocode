/*
 * XREFs of ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C007CA7C
 * Callers:
 *     ?DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z @ 0x1C0007394 (-DxEngSelectPaletteToSurface@@YAPEAUHPALETTE__@@PEAU_SURFOBJ@@PEAU1@@Z.c)
 *     ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1C0007418 (-DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z.c)
 *     GreExtGetObjectW @ 0x1C0065580 (GreExtGetObjectW.c)
 *     GreGetPaletteEntries @ 0x1C007BA80 (GreGetPaletteEntries.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C007C5E0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x1C026E880 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 *     ?DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z @ 0x1C0270FC8 (-DxEngSyncPaletteTableWithDevice@@YAHPEAUHPALETTE__@@PEAUHDEV__@@@Z.c)
 *     EngQueryPalette @ 0x1C0293F70 (EngQueryPalette.c)
 *     ?vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z @ 0x1C02B5680 (-vSetupDevBitmap@@YAXPEAVPDEVOBJ@@PEAVSURFACE@@@Z.c)
 *     NtGdiEngDeletePalette @ 0x1C02CBDF0 (NtGdiEngDeletePalette.c)
 *     NtGdiColorCorrectPalette @ 0x1C02D0DA0 (NtGdiColorCorrectPalette.c)
 *     GreAnimatePalette @ 0x1C02D3250 (GreAnimatePalette.c)
 *     GreCreateHalftonePalette @ 0x1C02D32E0 (GreCreateHalftonePalette.c)
 *     GreSetPaletteEntries @ 0x1C02D3E00 (GreSetPaletteEntries.c)
 *     GreUnrealizeObject @ 0x1C02D42E8 (GreUnrealizeObject.c)
 *     NtGdiGetNearestPaletteIndex @ 0x1C02D4460 (NtGdiGetNearestPaletteIndex.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
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
