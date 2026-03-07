__int64 __fastcall DirectComposition::CMatrixTransformMarshaler::SetFloatProperty(
        DirectComposition::CMatrixTransformMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  char v7; // al
  unsigned __int64 v8; // rcx
  bool v9; // dl
  __int64 v10; // r9

  v4 = 0;
  if ( a2 < 6 )
  {
    v7 = a2;
    v8 = (unsigned __int64)a2 >> 1;
    v9 = 1;
    v10 = (v7 & 1) + 2 * v8;
    if ( *((float *)this + v10 + 18) == a3 )
      v9 = 0;
    else
      *((float *)this + v10 + 18) = a3;
    *a4 = v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
