/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x18012F7EE
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180012524 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180019DA4 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z @ 0x18012F7CE (-AreAllMarginsZero@@YA_NAEBU_MARGINS@@@Z.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18012F972 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801E3E44 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        __int64 a1,
        struct IUnknown *a2,
        int *a3,
        COcclusionContext *a4,
        __int64 a5,
        char a6)
{
  unsigned int v10; // ebx
  __int64 v11; // r8
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  float v20[4]; // [rsp+30h] [rbp-58h] BYREF

  v10 = 0;
  if ( !AreAllMarginsZero((const struct _MARGINS *)(a1 + 836)) )
    CWindowNode::IntersectWithAlphaMargins(a1, v11);
  CWindowNode::IntersectWithMaximizedClip(a1, a3);
  v12 = (float)a3[1];
  v13 = (float)a3[2];
  v14 = (float)a3[3];
  v20[0] = (float)*a3;
  v20[1] = v12;
  v20[2] = v13;
  v20[3] = v14;
  if ( a6 )
  {
    v15 = COcclusionContext::DrawImage(a4, a2, (int)v20, *(_DWORD *)(a1 + 852));
    v10 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x420u, 0LL);
  }
  else if ( a5 )
  {
    v17 = COcclusionContext::DrawClippedImage((_DWORD)a4, (_DWORD)a2, (unsigned int)v20, a5, *(_DWORD *)(a1 + 852));
    v10 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x427u, 0LL);
  }
  return v10;
}
