/*
 * XREFs of ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800198D0
 * Callers:
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A43BC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180049484 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058018 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(CWindowBackgroundTreatment *this)
{
  __int128 v3; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+34h] [rbp-34h]
  __int128 v6; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v4 = 0;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v3 = 0LL;
  v6 = 0LL;
  CMILMatrix::Transform3DBoundsHelper<0>((CWindowBackgroundTreatment *)((char *)this + 232));
  CMILMatrix::Transform3DBoundsHelper<0>((CWindowBackgroundTreatment *)((char *)this + 160));
  return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v6, &v3);
}
