CRoundedRectangleShape::FlattenedShapeSharedData *__fastcall CRoundedRectangleShape::FlattenedShapeSharedData::`vector deleting destructor'(
        CRoundedRectangleShape::FlattenedShapeSharedData *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 12) - (_QWORD)v4;
    v9 = v4;
    v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    v8 = v6;
    if ( v6 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v9, &v8);
      v6 = v8;
      v4 = v9;
    }
    operator delete(v4, v6);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease((__int64 *)this + 9);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x68uLL);
  return this;
}
