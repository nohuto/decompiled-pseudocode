CRoundedRectangleShape::SharedData *__fastcall CRoundedRectangleShape::SharedData::SharedData(
        CRoundedRectangleShape::SharedData *this,
        const struct CRoundedRectangleGeometryData *a2)
{
  const struct CRoundedRectangleGeometryData *v2; // r9
  CRoundedRectangleShape::SharedData *v3; // r10
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  unsigned int v9; // r11d
  unsigned int v10; // edi
  __int64 v11; // rax
  const struct D2D_VECTOR_2F *v12; // r8
  float v13; // xmm1_4
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // xmm1_4
  CRoundedRectangleShape::SharedData *result; // rax
  float y; // xmm0_4
  int v20; // xmm1_4
  char *v21; // rax
  unsigned __int64 v22; // [rsp+20h] [rbp-18h] BYREF
  float v23[4]; // [rsp+28h] [rbp-10h] BYREF

  *((_DWORD *)this + 2) = 0;
  v2 = a2;
  *((_DWORD *)this + 16) = 0;
  v3 = this;
  *(_QWORD *)this = &CRoundedRectangleShape::SharedData::`vftable';
  *((_QWORD *)this + 9) = 0LL;
  v4 = *((float *)a2 + 2);
  if ( *((_BYTE *)a2 + 52) )
  {
    v5 = *((float *)a2 + 1) + *((float *)a2 + 3);
    v4 = v4 + *(float *)a2;
  }
  else
  {
    v5 = *((float *)a2 + 3);
  }
  v6 = *((float *)a2 + 1);
  if ( (float)(v4 - 0.0000011920929) <= *(float *)a2 || (float)(v5 - 0.0000011920929) <= v6 )
  {
    v21 = (char *)this + 16;
LABEL_31:
    v21[52] = 1;
    *(_DWORD *)v21 = 0;
    *(_QWORD *)(v21 + 4) = 0LL;
    *(_QWORD *)(v21 + 12) = 0LL;
    *((_DWORD *)v21 + 5) = 0;
    *((_DWORD *)v21 + 12) = 0;
  }
  else
  {
    v7 = v4 - *(float *)a2;
    v8 = v5 - v6;
    v9 = 0;
    v10 = *((_BYTE *)a2 + 52) != 0 ? 1 : 4;
    do
    {
      if ( *((_BYTE *)v2 + 52) )
        v11 = 16LL;
      else
        v11 = 8LL * v9 + 16;
      v12 = (const struct D2D_VECTOR_2F *)((char *)v2 + v11);
      v13 = *(float *)((char *)v2 + v11);
      if ( v13 > v7 )
      {
        y = v12->y;
        if ( y > v8 )
        {
          v22 = 0LL;
          v23[0] = v13 - v7;
          v23[1] = y - v8;
          if ( CRoundedRectangleGeometryData::IsPointOutsideCorner(
                 (const struct CMilPoint2F *)v23,
                 (const struct CMilPoint2F *)&v22,
                 v12) )
          {
            v21 = (char *)v3 + 16;
            goto LABEL_31;
          }
        }
      }
      ++v9;
    }
    while ( v9 < v10 );
    if ( *((_BYTE *)v2 + 52) )
    {
      *((_BYTE *)v3 + 68) = 1;
      *((_QWORD *)v3 + 2) = *(_QWORD *)v2;
      *((_QWORD *)v3 + 3) = *((_QWORD *)v2 + 1);
      if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v2, 0LL) )
        v22 = _mm_unpacklo_ps((__m128)*((unsigned int *)v2 + 4), (__m128)*((unsigned int *)v2 + 5)).m128_u64[0];
      else
        v22 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v20 = HIDWORD(v22);
      *((_DWORD *)v3 + 8) = v22;
      *((_DWORD *)v3 + 9) = v20;
    }
    else
    {
      *((_BYTE *)v3 + 68) = 0;
      v14 = (_DWORD *)((char *)v3 + 36);
      *((_DWORD *)v3 + 4) = *(_DWORD *)v2;
      v15 = 0;
      *((_DWORD *)v3 + 5) = *((_DWORD *)v2 + 1);
      *((_DWORD *)v3 + 6) = *((_DWORD *)v2 + 2);
      *((_DWORD *)v3 + 7) = *((_DWORD *)v2 + 3);
      do
      {
        if ( *((_BYTE *)v2 + 52) )
          v16 = 16LL;
        else
          v16 = 8LL * v15 + 16;
        if ( *(float *)((char *)v2 + v16) <= 0.0 || *(float *)((char *)v2 + v16 + 4) <= 0.0 )
          v22 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        else
          v22 = _mm_unpacklo_ps(
                  (__m128)*(unsigned int *)((char *)v14 + v2 - v3 - 20),
                  (__m128)*(unsigned int *)((char *)v14 + v2 - v3 - 16)).m128_u64[0];
        ++v15;
        v17 = HIDWORD(v22);
        *(v14 - 1) = v22;
        *v14 = v17;
        v14 += 2;
      }
      while ( v15 < 4 );
    }
  }
  result = v3;
  *((_DWORD *)v3 + 16) = *((_DWORD *)v2 + 12);
  return result;
}
