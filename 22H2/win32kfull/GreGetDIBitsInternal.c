/*
 * XREFs of GreGetDIBitsInternal @ 0x1C02DE6B0
 * Callers:
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01FC7BC (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     ?GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z @ 0x1C0223180 (-GetCursorColorPixels@CursorApiRouter@@CA_NPEAUHBITMAP__@@PEBUtagBITMAP@@IPEAK@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02CE840 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 * Callees:
 *     ?GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1C002F6C0 (-GreGetDIBitsInternalImpl@@YAHPEAUHDC__@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@II.c)
 */

__int64 __fastcall GreGetDIBitsInternal(
        __int64 a1,
        HSURF a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int *a6,
        int a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v10[3]; // [rsp+50h] [rbp-28h] BYREF
  __int16 v11; // [rsp+68h] [rbp-10h]

  v10[2] = 0LL;
  v10[0] = a5;
  v10[1] = a8;
  v11 = 0;
  return GreGetDIBitsInternalImpl(a1, a2, 0, a4, (__int64)v10, a6, 0, a8, a9);
}
