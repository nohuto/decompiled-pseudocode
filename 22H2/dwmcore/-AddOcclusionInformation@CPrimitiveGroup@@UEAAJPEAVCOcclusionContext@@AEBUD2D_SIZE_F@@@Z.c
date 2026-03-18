/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180016810
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18011BE00 (-AddOcclusionInformation@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016884 (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180048E20 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800819D8 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x18010EF20 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v4; // r9d
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( (unsigned __int8)CPrimitiveGroup::GetLargestOpaqueRect((char *)this - 680, &v5, a3, a2)
    && (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(&v5) )
  {
    COcclusionContext::CollectRectangleForOcclusion(v4, (unsigned int)&v5, 0, v4, 0LL);
  }
  return 0LL;
}
