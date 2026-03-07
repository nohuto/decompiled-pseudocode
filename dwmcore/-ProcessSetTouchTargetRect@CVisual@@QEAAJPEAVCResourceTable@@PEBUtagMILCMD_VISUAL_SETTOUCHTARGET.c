__int64 __fastcall CVisual::ProcessSetTouchTargetRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETTOUCHTARGETRECT *a3)
{
  float v4; // xmm1_4
  __m128i v5; // xmm0
  float v6; // xmm1_4
  __int128 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF

  v4 = (float)*((int *)a3 + 3);
  *(float *)&v8 = (float)*((int *)a3 + 2);
  v5 = _mm_cvtsi32_si128(*((_DWORD *)a3 + 4));
  *((float *)&v8 + 1) = v4;
  v6 = (float)*((int *)a3 + 5);
  DWORD2(v8) = _mm_cvtepi32_ps(v5).m128_u32[0];
  *((float *)&v8 + 3) = v6;
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(&v8) )
    v8 = 0uLL;
  CVisual::GetTouchTargetBounds(this, &v9);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v9, &v8) )
  {
    v9 = v8;
    CVisual::SetTouchTargetBounds(this, &v9);
    CVisual::PropagateFlags(this, 1LL);
  }
  return 0LL;
}
