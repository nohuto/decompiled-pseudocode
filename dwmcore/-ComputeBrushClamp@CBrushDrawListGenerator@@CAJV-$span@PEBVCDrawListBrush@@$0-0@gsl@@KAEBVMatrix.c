__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(gsl::details *a1, int a2, float *a3, __int64 *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v10; // rbx
  const struct D2D_MATRIX_3X2_F *v11; // rdx
  FLOAT m11; // xmm0_4
  unsigned int v13; // xmm1_4
  int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  __int64 v17; // rdx
  struct CShape *v18; // rcx
  int v19; // ebx
  __int64 (__fastcall ***v20)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v21)(_QWORD, __int64); // rdx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, __int64); // rdx
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v28; // [rsp+38h] [rbp-C8h] BYREF
  struct CShape *v29; // [rsp+40h] [rbp-C0h] BYREF
  int v30; // [rsp+48h] [rbp-B8h]
  int v31; // [rsp+4Ch] [rbp-B4h]
  int v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+54h] [rbp-ACh]
  int v34; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall ***v35[2])(_QWORD, __int64); // [rsp+60h] [rbp-A0h] BYREF
  __m256i v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int128 v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+B0h] [rbp-50h]
  __m256i v40; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-20h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+108h] [rbp+8h] BYREF
  _BYTE v45[80]; // [rsp+120h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v27 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v10 = *(_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a1, v5);
      if ( v10 && *(_BYTE *)(v10 + 52) )
      {
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v45);
        v44 = *(_OWORD *)(v10 + 32);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v45, (const struct MilRectF *)&v44);
        v39 = 0;
        v11 = (const struct D2D_MATRIX_3X2_F *)(v10 + 8);
        if ( ((1 << v5) & a2) != 0 )
        {
          m11 = v11->m11;
          v13 = *(_DWORD *)(v10 + 12);
          LODWORD(v29) = 0;
          v31 = 0;
          v28 = (__int64 *)__PAIR64__(v13, LODWORD(m11));
          v14 = *(_DWORD *)(v10 + 20);
          HIDWORD(v29) = *(_DWORD *)(v10 + 16);
          v15 = *(_DWORD *)(v10 + 24);
          v30 = v14;
          v16 = *(_DWORD *)(v10 + 28);
          v32 = v15;
          v33 = v16;
          v34 = 1065353216;
          Matrix3x3::operator*((float *)&v28, (float *)v40.m256i_i32, a3);
          v36.m256i_i32[0] = v40.m256i_i32[0];
          *(__int64 *)((char *)v36.m256i_i64 + 4) = v40.m256i_u32[1];
          *(__int64 *)((char *)&v36.m256i_i64[1] + 4) = v40.m256i_i64[1];
          *(__int64 *)((char *)&v36.m256i_i64[2] + 4) = v40.m256i_u32[4];
          LODWORD(v38) = v40.m256i_i32[6];
          v36.m256i_i32[7] = v40.m256i_i32[5];
          v37 = _xmm;
          *(_QWORD *)((char *)&v38 + 4) = v40.m256i_u32[7];
          HIDWORD(v38) = v41;
        }
        else
        {
          CMILMatrix::CMILMatrix((CMILMatrix *)&v40, v11);
          v39 = v43;
          v36 = v40;
          v37 = v41;
          v38 = v42;
        }
        v29 = 0LL;
        LOBYTE(v30) = 1;
        if ( v27 )
        {
          v35[0] = 0LL;
          v28 = (__int64 *)v35;
          v19 = CShape::Combine((__int64)v27, v17, (__int64)v45, (__int64)&v36, D2D1_COMBINE_MODE_INTERSECT, &v29);
          if ( (_BYTE)v30 )
          {
            v22 = (__int64)v28;
            v23 = (__int64 (__fastcall ***)(_QWORD, __int64))*v28;
            *v28 = (__int64)v29;
            if ( v23 )
              std::default_delete<CShape>::operator()(v22, v23);
          }
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v19, 0x6Au, 0LL);
            if ( v35[0] )
              std::default_delete<CShape>::operator()(v26, v35[0]);
            goto LABEL_13;
          }
          std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>((__int64 *)&v27, (__int64 *)v35);
          if ( v35[0] )
            std::default_delete<CShape>::operator()(v24, v35[0]);
        }
        else
        {
          v28 = (__int64 *)&v27;
          v19 = CShape::CopyShape((CShape *)v45, (const struct CMILMatrix *)&v36, &v29);
          if ( (_BYTE)v30 )
          {
            v18 = v29;
            v20 = (__int64 (__fastcall ***)(_QWORD, __int64))*v28;
            *v28 = (__int64)v29;
            if ( v20 )
              std::default_delete<CShape>::operator()((__int64)v18, v20);
          }
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v18, 0LL, 0, v19, 0x5Fu, 0LL);
LABEL_13:
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v45);
            v21 = v27;
            goto LABEL_24;
          }
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v45);
      }
      ++v5;
    }
    while ( v5 < *(_QWORD *)a1 );
    v4 = (__int64)v27;
  }
  v21 = 0LL;
  *a4 = v4;
  v27 = 0LL;
  v19 = 0;
LABEL_24:
  if ( v21 )
    std::default_delete<CShape>::operator()((__int64)a1, v21);
  return (unsigned int)v19;
}
