/*
 * XREFs of ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x180077D00
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A480 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z @ 0x1800772F0 (-AppendDirtyRegionLists@CDirtyRegion@@AEAAXII@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800D4D28 (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CDirtyRegion::Merge(__m128 *this, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v5; // rbx
  __int64 v6; // r15
  __m128 v7; // xmm6
  __int64 v8; // r10
  bool IsEmpty; // al
  __int64 v10; // rdx
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm4_4
  __m128 *v14; // rax
  __m128 *v15; // r10
  __m128 v16; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2;
  v5 = a3;
  v6 = a3;
  v16 = this[a2 + 98];
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v16.m128_f32, this[v5 + 98].m128_f32);
  v7 = v16;
  *(__m128 *)((char *)this + 8 * v8) = v16;
  IsEmpty = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v16.m128_f32);
  *(_BYTE *)(v10 + 12) = IsEmpty;
  v11 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  v12 = _mm_shuffle_ps(v7, v7, 255).m128_f32[0] - v11;
  v13 = _mm_shuffle_ps(v7, v7, 170).m128_f32[0] - v7.m128_f32[0];
  *(float *)(v10 + 8) = v12 * v13;
  *(float *)(v10 + 4) = (float)(v12 * 0.5) + v11;
  *(float *)v10 = (float)(v13 * 0.5) + v7.m128_f32[0];
  this[v6 + 122].m128_i32[0] = 0;
  this[v5 + 122].m128_i32[2] = 0;
  this[v5 + 122].m128_i32[1] = 0;
  this[v5 + 122].m128_i8[12] = 1;
  v14 = &this[v6 + 98];
  v14->m128_i32[3] = 0;
  v14->m128_i32[2] = 0;
  v14->m128_i32[1] = 0;
  v14->m128_i32[0] = 0;
  CDirtyRegion::UpdateAcceleration((CDirtyRegion *)this, v3);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
    this[v3 + 106].m128_f32,
    this[v5 + 106].m128_f32);
  v15 = &this[v6 + 106];
  v15->m128_i32[3] = 0;
  v15->m128_i32[2] = 0;
  v15->m128_i32[1] = 0;
  v15->m128_i32[0] = 0;
  CDirtyRegion::AppendDirtyRegionLists((CDirtyRegion *)this, v3, v6);
}
