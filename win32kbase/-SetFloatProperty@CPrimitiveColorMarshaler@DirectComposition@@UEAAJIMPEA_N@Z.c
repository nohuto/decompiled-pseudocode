__int64 __fastcall DirectComposition::CPrimitiveColorMarshaler::SetFloatProperty(
        DirectComposition::CPrimitiveColorMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  bool v8; // al

  v4 = 0;
  v5 = a2 - 1;
  if ( !v5 )
  {
    if ( *((float *)this + 14) != a3 )
    {
      *((float *)this + 14) = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((float *)this + 15) != a3 )
    {
      *((float *)this + 15) = a3;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    if ( *((float *)this + 16) != a3 )
    {
      *((float *)this + 16) = a3;
      goto LABEL_15;
    }
LABEL_13:
    v8 = 0;
LABEL_16:
    *a4 = v8;
    return v4;
  }
  if ( v7 == 1 )
  {
    if ( *((float *)this + 17) != a3 )
    {
      *((float *)this + 17) = a3;
LABEL_15:
      v8 = 1;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741811;
}
