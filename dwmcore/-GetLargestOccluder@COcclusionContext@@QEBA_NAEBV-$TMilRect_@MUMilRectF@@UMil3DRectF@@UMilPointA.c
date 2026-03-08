/*
 * XREFs of ?GetLargestOccluder@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NHPEAV2@@Z @ 0x1801E4098
 * Callers:
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x18000F130 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18012C1C4 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801E3DD0 (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?GetLargestOccluder@CArrayBasedCoverageSet@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAV2@@Z @ 0x1801F5ED0 (-GetLargestOccluder@CArrayBasedCoverageSet@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 */

char __fastcall COcclusionContext::GetLargestOccluder(
        __int64 a1,
        struct MilRectF *a2,
        char a3,
        unsigned int a4,
        float *a5)
{
  _BYTE *v5; // rbx
  char v9; // bp
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v5 = (_BYTE *)(a1 + 1204);
  v11 = 0LL;
  if ( a3 || !*v5 )
    v11 = *(_OWORD *)a2;
  else
    COcclusionContext::PageInPixelsRectToDeviceRect(a1, a2, (float *)&v11);
  v12 = 0LL;
  v9 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int128 *))CArrayBasedCoverageSet::GetLargestOccluder)(
         a1 + 448,
         &v11,
         a4,
         &v12);
  if ( v9 )
  {
    if ( a3 || !*v5 )
      *(_OWORD *)a5 = v12;
    else
      COcclusionContext::DeviceRectToPageInPixelsRect(a1, (struct MilRectF *)&v12, a5);
  }
  return v9;
}
