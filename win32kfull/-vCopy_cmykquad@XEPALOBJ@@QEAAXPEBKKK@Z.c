/*
 * XREFs of ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02DACDC
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1C008C990 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C008D940 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1C00906B0 (-GreCreateDIBitmapReal@@YAPEAUHBITMAP__@@PEAUHDC__@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 * Callees:
 *     ?vUpdateTime@XEPALOBJ@@QEAAXXZ @ 0x1C00D922C (-vUpdateTime@XEPALOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

void __fastcall XEPALOBJ::vCopy_cmykquad(XEPALOBJ *this, const unsigned int *a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // r8d
  void *v6; // rcx

  v5 = *(_DWORD *)(*(_QWORD *)this + 28LL);
  v6 = *(void **)(*(_QWORD *)this + 112LL);
  if ( a4 > v5 )
    a4 = v5;
  memmove(v6, a2, 4LL * a4);
  XEPALOBJ::vUpdateTime(this);
}
