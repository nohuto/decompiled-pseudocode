/*
 * XREFs of ?AddOcclusionInformation@CSnapshot@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180253A74
 * Callers:
 *     ?AddOcclusionInformation@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180117C70 (-AddOcclusionInformation@CSnapshot@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x180081808 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GetBounds@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180253CB4 (-GetBounds@CSnapshot@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 */

__int64 __fastcall CSnapshot::AddOcclusionInformation(
        CSnapshot *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // r9
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_BYTE *)this - 32) )
  {
    v6 = 0LL;
    CSnapshot::GetBounds(this);
    COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (__int64)&v6, 0, v4, 0LL);
  }
  return 0LL;
}
