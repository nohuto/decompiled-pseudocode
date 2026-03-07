__int64 __fastcall CPrimitiveGroup::GetTextureMemoryLayoutData(
        CPrimitiveGroupDrawListGenerator **a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  int **ContentRegion; // rax
  __m128 v10; // xmm2
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __m128 v15; // [rsp+30h] [rbp-69h]
  __int128 v16; // [rsp+40h] [rbp-59h] BYREF
  __int128 v17; // [rsp+50h] [rbp-49h]
  __int64 v18; // [rsp+60h] [rbp-39h]
  _QWORD v19[2]; // [rsp+70h] [rbp-29h] BYREF
  int v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+84h] [rbp-15h]
  _BYTE v22[64]; // [rsp+90h] [rbp-9h] BYREF

  a3[1] = *a3;
  v5 = 0;
  v19[0] = v22;
  v19[1] = v22;
  v20 = 4;
  v21 = 4LL;
  v6 = CPrimitiveGroup::EnsureDrawListGenerator((CPrimitiveGroup *)a1);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1DEu, 0LL);
  }
  else
  {
    ContentRegion = (int **)CPrimitiveGroupDrawListGenerator::GetContentRegion(a1[16]);
    HIDWORD(v21) = 0;
    CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(ContentRegion, (__int64)v19);
    if ( HIDWORD(v21) )
    {
      do
      {
        v15.m128_f32[0] = (float)*(int *)(v19[0] + 16LL * v5);
        v15.m128_f32[1] = (float)*(int *)(v19[0] + 16LL * v5 + 4);
        v15.m128_f32[2] = (float)*(int *)(v19[0] + 16LL * v5 + 8);
        v15.m128_f32[3] = (float)*(int *)(v19[0] + 16LL * v5 + 12);
        *((float *)&v17 + 2) = v15.m128_f32[0];
        v10 = _mm_shuffle_ps(v15, v15, 85);
        HIDWORD(v17) = v10.m128_i32[0];
        LODWORD(v18) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
        HIDWORD(v18) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
        if ( v15.m128_f32[0] == 0.0 && v10.m128_f32[0] == 0.0 )
          *(_QWORD *)&v17 = 0LL;
        else
          *(_QWORD *)&v17 = _mm_unpacklo_ps(v15, v10).m128_u64[0];
        v11 = a3[1];
        v16 = *(_OWORD *)&_xmm;
        if ( v11 == a3[2] )
        {
          std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
            a3,
            (_BYTE *)v11,
            (__int64)&v16);
        }
        else
        {
          v12 = v17;
          *(_OWORD *)v11 = *(_OWORD *)&_xmm;
          v13 = v18;
          *(_OWORD *)(v11 + 16) = v12;
          *(_QWORD *)(v11 + 32) = v13;
          a3[1] += 40LL;
        }
        ++v5;
      }
      while ( v5 < HIDWORD(v21) );
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v19);
  return v8;
}
