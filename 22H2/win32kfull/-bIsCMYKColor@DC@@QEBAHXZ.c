/*
 * XREFs of ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00058C8
 * Callers:
 *     NtGdiGetPixel @ 0x1C0005580 (NtGdiGetPixel.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C002AB30 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C00300D0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00DD3B0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C00DF680 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D6E10 (NtGdiSetPixel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bIsCMYKColor(DC *this)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 30);
  v2 = 1;
  if ( (v1 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)this + 122) + 248LL) || (v1 & 0x10000000) == 0 )
    return 0;
  return v2;
}
