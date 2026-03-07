void __fastcall CGeometry::GetShapeTransformRealization(
        CGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  if ( a2 )
    v3 = (__int64)*a2;
  (*(void (__fastcall **)(_QWORD, __int64 *, struct D2D_MATRIX_3X2_F *))(**((_QWORD **)this + 10) + 208LL))(
    *((_QWORD *)this + 10),
    &v3,
    a3);
}
