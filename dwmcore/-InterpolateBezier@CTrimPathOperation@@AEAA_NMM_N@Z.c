bool __fastcall CTrimPathOperation::InterpolateBezier(CTrimPathOperation *this, float a2, float a3, char a4)
{
  int v4; // xmm3_4
  char *v5; // rsi
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm3_4
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // xmm1_4
  char v18; // al
  char v19; // r12
  int v20; // xmm1_4
  __int64 v22; // [rsp+40h] [rbp-40h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+D0h] [rbp+50h] BYREF
  float v27; // [rsp+D8h] [rbp+58h] BYREF

  v4 = *((_DWORD *)this + 27);
  v5 = (char *)this + 112;
  LODWORD(v25) = *((_DWORD *)this + 26);
  LODWORD(v22) = *((_DWORD *)this + 24);
  LODWORD(v23) = *((_DWORD *)this + 22);
  v9 = *((_DWORD *)this + 23);
  LODWORD(v24) = *((_DWORD *)this + 9);
  v10 = *((_DWORD *)this + 10);
  HIDWORD(v25) = v4;
  v11 = *((_DWORD *)this + 25);
  HIDWORD(v24) = v10;
  HIDWORD(v22) = v11;
  HIDWORD(v23) = v9;
  CBezierFlattener<float,CMilPoint2F>::SetPoints((__int64)this + 112, &v24, &v23, &v22, &v25);
  v13 = 0;
  v14 = 0LL;
  if ( a4 )
  {
    v13 = 1;
    *((float *)&v24 + 1) = a2 * *((float *)this + 21);
  }
  if ( a3 == 1.0 )
  {
    if ( !a4 || COERCE_FLOAT(LODWORD(a2) & _xmm) < 0.0000011920929 )
      return 1;
  }
  else
  {
    v15 = v13++;
    *((float *)&v24 + 2 * v15 + 1) = a3 * *((float *)this + 21);
  }
  if ( (int)CBezierFlattener<float,CMilPoint2F>::GetFirstTangent(v12, (__int64)&v25) < 0 )
    return 0;
  v17 = *((_DWORD *)this + 9);
  v27 = 0.0;
  *((_DWORD *)this + 52) = *((_DWORD *)this + 10);
  *((_DWORD *)this + 51) = v17;
  for ( *((_DWORD *)this + 83) = 0; ; *((_DWORD *)this + 83) = *((_DWORD *)this + 98) )
  {
    v18 = CBezierFlattener<float,CMilPoint2F>::Flatten(
            (__int64)v5,
            (__int64)this + 212,
            v16,
            (__int64)this + 336,
            0xFu,
            &v25,
            1);
    v26 = 0;
    v19 = v18;
    do
    {
      if ( !CTrimPathOperation::FindControlPointAtDistance(
              this,
              v25,
              &v26,
              &v27,
              (struct CTrimPathOperation::BezierTrimPoint *)(&v24 + v14)) )
        break;
      v14 = (unsigned int)(v14 + 1);
    }
    while ( (_DWORD)v14 != v13 );
    if ( (_DWORD)v14 == v13 )
      break;
    if ( !v19 )
      return 0;
    v20 = *((_DWORD *)this + 82);
    *((_DWORD *)this + 51) = *((_DWORD *)this + 81);
    *((_DWORD *)this + 52) = v20;
  }
  if ( !a4 )
  {
    CBezier<float,CMilPoint2F>::TrimToEndAt(v5);
    return 1;
  }
  if ( v13 != 1 )
    return (unsigned __int8)CBezier<float,CMilPoint2F>::TrimBetween(v5) != 0;
  CBezier<float,CMilPoint2F>::TrimToStartAt(v5);
  return 1;
}
