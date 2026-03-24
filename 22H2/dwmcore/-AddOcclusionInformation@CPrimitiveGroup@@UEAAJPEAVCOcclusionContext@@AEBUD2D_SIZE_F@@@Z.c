/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800C4B58
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800F4250 (-AddOcclusionInformation@CPrimitiveGroup@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180076700 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  int v7; // eax
  __int64 v8; // rcx
  float v9[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this - 26) )
  {
    v3 = *((float *)this - 37);
    v4 = *((float *)this - 38);
    v5 = *((float *)this - 36);
    v9[0] = *((float *)this - 39);
    v9[1] = v4;
    v9[2] = v3;
    v9[3] = v5;
    if ( v3 > v9[0] && v5 > v4 )
    {
      v7 = COcclusionContext::CollectRectangleForOcclusion((__int64)a2, v9, (__int64)a3, 0LL);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x416u, 0LL);
    }
  }
  return 0LL;
}
