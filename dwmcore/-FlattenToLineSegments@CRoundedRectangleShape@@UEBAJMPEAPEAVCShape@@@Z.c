__int64 __fastcall CRoundedRectangleShape::FlattenToLineSegments(
        CRoundedRectangleShape *this,
        float a2,
        struct CShape **a3)
{
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  CRoundedRectangleShape *v10; // rax
  __int64 v11; // rcx
  struct CShape *v12; // rax
  int v14; // eax
  __int64 v15; // rcx
  _OWORD v16[3]; // [rsp+30h] [rbp-48h] BYREF
  float v17; // [rsp+60h] [rbp-18h]
  int v18; // [rsp+64h] [rbp-14h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  if ( *(float *)(v3 + 64) <= 0.0 )
  {
    v7 = (v3 + 16) & -(__int64)(v3 != 0);
    v8 = *(_OWORD *)(v7 + 0x10);
    v16[0] = *(_OWORD *)v7;
    v9 = *(_OWORD *)(v7 + 0x20);
    v16[1] = v8;
    v18 = HIDWORD(*(_QWORD *)(v7 + 0x30));
    v16[2] = v9;
    v17 = a2;
    v10 = (CRoundedRectangleShape *)CRoundedRectangleShape::operator new(v7);
    if ( v10 )
    {
      v12 = CRoundedRectangleShape::CRoundedRectangleShape(v10, (const struct CRoundedRectangleGeometryData *)v16);
      *a3 = v12;
      if ( v12 )
        return v4;
    }
    else
    {
      *a3 = 0LL;
    }
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x2D0u, 0LL);
    return v4;
  }
  v14 = CShape::CopyShape(this, 0LL, a3);
  v4 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2C7u, 0LL);
  return v4;
}
