/*
 * XREFs of ??1EPALOBJ@@QEAA@XZ @ 0x1C0124F2C
 * Callers:
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     GreGetPaletteEntries @ 0x1C007BA80 (GreGetPaletteEntries.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C0089BF0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 *     RecreateRedirectionBitmap @ 0x1C0096A48 (RecreateRedirectionBitmap.c)
 *     GreIsReusedDeviceDependentBitmap @ 0x1C00974AC (GreIsReusedDeviceDependentBitmap.c)
 *     GreReferenceObject @ 0x1C00D7C78 (GreReferenceObject.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C012448C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C01299C8 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ??1SURFFAKEOBJ@@QEAA@XZ @ 0x1C012FD24 (--1SURFFAKEOBJ@@QEAA@XZ.c)
 *     ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0283F18 (-vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     EngMarkBandingSurface @ 0x1C02911C0 (EngMarkBandingSurface.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C02AA444 (GreGetBitmapDpiScaleValue.c)
 *     ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C02BC660 (-UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     NtGdiEngDeletePalette @ 0x1C02CBDF0 (NtGdiEngDeletePalette.c)
 *     NtGdiEngDeleteSurface @ 0x1C02CBEE0 (NtGdiEngDeleteSurface.c)
 *     NtGdiMonoBitmap @ 0x1C02D31F0 (NtGdiMonoBitmap.c)
 *     GreCreateHalftonePalette @ 0x1C02D32E0 (GreCreateHalftonePalette.c)
 *     NtGdiResizePalette @ 0x1C02D4500 (NtGdiResizePalette.c)
 *     EngHTBlt @ 0x1C02E0A38 (EngHTBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall EPALOBJ::~EPALOBJ(EPALOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
