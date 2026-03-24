/*
 * XREFs of ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801F3428
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180075C80 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180018AEC (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ?IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18003C498 (-IntersectWithMaximizedClip@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1800D0B0C (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusionHelper(
        const RECT *a1,
        struct IUnknown *a2,
        int *a3,
        COcclusionContext *a4,
        __int64 a5,
        char a6)
{
  unsigned int v8; // edi
  int v9; // r8d
  int v12; // eax
  int v13; // edx
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  float v22[4]; // [rsp+30h] [rbp-58h] BYREF

  *a3 += a1[51].top;
  v8 = 0;
  v9 = a3[2] - a1[51].right;
  v12 = a3[3] - a1[52].left;
  v13 = a3[1] + a1[51].bottom;
  if ( v9 <= *a3 )
    v9 = *a3;
  a3[1] = v13;
  if ( v12 <= v13 )
    v12 = v13;
  a3[2] = v9;
  a3[3] = v12;
  CWindowNode::IntersectWithMaximizedClip(a1, (__int64)a3);
  v14 = (float)a3[1];
  v15 = (float)a3[2];
  v16 = (float)a3[3];
  v22[0] = (float)*a3;
  v22[1] = v14;
  v22[2] = v15;
  v22[3] = v16;
  if ( a6 )
  {
    v17 = COcclusionContext::DrawImage(a4, a2, v22, a1[52].top);
    v8 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x495u, 0LL);
  }
  else if ( a5 )
  {
    v19 = COcclusionContext::DrawClippedImage(a4, a2, v22, a5, a1[52].top);
    v8 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x49Cu, 0LL);
  }
  return v8;
}
