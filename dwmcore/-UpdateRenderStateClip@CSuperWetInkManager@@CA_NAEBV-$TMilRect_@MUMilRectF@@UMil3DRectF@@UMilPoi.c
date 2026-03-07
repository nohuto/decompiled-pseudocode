bool __fastcall CSuperWetInkManager::UpdateRenderStateClip(
        struct MilRectF *a1,
        __m128i *a2,
        CMILMatrix *a3,
        __m128i *a4)
{
  int *v6; // rax
  __m128i v7; // xmm0
  unsigned int v8; // ecx
  bool v9; // cc
  unsigned int v10; // edx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __m128i v18; // [rsp+20h] [rbp-30h] BYREF
  int v19[4]; // [rsp+30h] [rbp-20h] BYREF

  if ( a3 )
    CMILMatrix::Transform2DBoundsHelper<0>(a3, a1, (float *)v18.m128i_i32);
  else
    v18 = *(__m128i *)a1;
  v6 = PixelAlign(v19, (float *)v18.m128i_i32);
  v7 = *a2;
  v8 = 0;
  v9 = *v6 <= 0;
  v18 = *a2;
  if ( !v9 )
    v8 = *v6;
  v10 = 0;
  if ( v6[1] > 0 )
    v10 = v6[1];
  v11 = 0;
  if ( v6[2] > 0 )
    v11 = v6[2];
  v12 = 0;
  if ( v6[3] > 0 )
    v12 = v6[3];
  v13 = _mm_cvtsi128_si32(v7);
  if ( v8 > v13 )
    v13 = v8;
  v18.m128i_i32[0] = v13;
  v14 = v18.m128i_u32[1];
  if ( v10 > v18.m128i_i32[1] )
    v14 = v10;
  v18.m128i_i32[1] = v14;
  v15 = v18.m128i_u32[2];
  if ( v11 < v18.m128i_i32[2] )
    v15 = v11;
  v18.m128i_i32[2] = v15;
  v16 = v18.m128i_u32[3];
  if ( v12 < v18.m128i_i32[3] )
    v16 = v12;
  v18.m128i_i32[3] = v16;
  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v18) )
    v18 = 0uLL;
  *a4 = v18;
  return !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(&v18);
}
