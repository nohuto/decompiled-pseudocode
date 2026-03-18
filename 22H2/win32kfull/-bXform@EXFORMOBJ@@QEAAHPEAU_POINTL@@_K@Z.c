/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00DC274
 * Callers:
 *     NtGdiGetPixel @ 0x1C0005580 (NtGdiGetPixel.c)
 *     GreSetBoundsRect @ 0x1C00094E4 (GreSetBoundsRect.c)
 *     GreGetBoundsRect @ 0x1C0009A58 (GreGetBoundsRect.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001D390 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C001EE80 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C02704B0 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C029A530 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C02AA0E0 (NtGdiPtVisible.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA938 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D6E10 (NtGdiSetPixel.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02DBE30 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C00F7380 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  int v6; // eax

  v3 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v3 + 32) & 0x43) == 0x43 )
    return 1;
  v6 = bCvtPts1(v3, a2, a3);
  v4 = 0;
  if ( v6 )
    return 1;
  return v4;
}
