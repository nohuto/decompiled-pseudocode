/*
 * XREFs of ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C00E0B4C
 * Callers:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0057310 (GreCreateCompatibleBitmapInternal.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DC33C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0276D58 (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028EBA0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 *     GreSetDIBColorTable @ 0x1C02D1F00 (GreSetDIBColorTable.c)
 * Callees:
 *     <none>
 */

struct SURFACE *__fastcall XDCOBJ::pSurfaceEff(XDCOBJ *this)
{
  struct SURFACE *result; // rax

  result = *(struct SURFACE **)(*(_QWORD *)this + 496LL);
  if ( !result )
    return SURFACE::pdibDefault;
  return result;
}
