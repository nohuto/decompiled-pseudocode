void __fastcall CTransformedGeometryHelper::AddLines(
        CTransformedGeometryHelper *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3)
{
  const void **v3; // rbx
  _BYTE *v5; // r8
  __int64 v8; // rsi
  _BYTE *v9; // rdx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (const void **)((char *)this + 40);
  v5 = (_BYTE *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v5;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      CMILMatrix::Transform(*((CMILMatrix **)this + 2), (const struct MilPoint2F *)a2, (struct MilPoint2F *)&v10, 1u);
      v9 = v3[1];
      if ( v9 == v3[2] )
      {
        std::vector<D2D_POINT_2F>::_Emplace_reallocate<D2D_POINT_2F &>(v3, v9, &v10);
      }
      else
      {
        *(_QWORD *)v9 = v10;
        v3[1] = (char *)v3[1] + 8;
      }
      v5 = v3[1];
      ++a2;
      --v8;
    }
    while ( v8 );
  }
  (*(void (__fastcall **)(_QWORD, const void *, signed __int64))(**((_QWORD **)this + 4) + 48LL))(
    *((_QWORD *)this + 4),
    *v3,
    (v5 - (_BYTE *)*v3) >> 3);
}
