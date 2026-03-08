/*
 * XREFs of ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x180045EB4
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045460 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180045F98 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800618D4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A72B4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::GetEffectiveBounds(_DWORD *a1, CShape *a2, _DWORD *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool IsAxisAlignedRectangle; // si
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  *a3 = 0;
  a3[1] = 0;
  IsAxisAlignedRectangle = 1;
  a3[2] = a1[192] - a1[190];
  a3[3] = a1[193] - a1[191];
  if ( a2 )
  {
    v9 = *(_QWORD *)a2;
    v13 = 0LL;
    v10 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(v9 + 48))(a2, &v13, 0LL);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x358u, 0LL);
      return v4;
    }
    PixelAlign(v14, &v13);
    TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(a3, v14);
    IsAxisAlignedRectangle = CShape::IsAxisAlignedRectangle(a2);
  }
  if ( a4 )
    *a4 = IsAxisAlignedRectangle;
  return v4;
}
