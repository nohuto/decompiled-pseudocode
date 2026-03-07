__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetFloatProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r10d
  int v5; // r8d
  int v6; // edx
  int v7; // edx
  bool v8; // al

  v4 = 0;
  v5 = 0;
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 != 4 )
      {
        v4 = -1073741811;
        goto LABEL_14;
      }
      v5 = 1024;
      if ( *((float *)this + 22) != a3 )
      {
        *((float *)this + 22) = a3;
LABEL_12:
        v8 = 1;
        goto LABEL_13;
      }
    }
    else
    {
      v5 = 128;
      if ( *((float *)this + 17) != a3 )
      {
        *((float *)this + 17) = a3;
        goto LABEL_12;
      }
    }
  }
  else
  {
    v5 = 128;
    if ( *((float *)this + 16) != a3 )
    {
      *((float *)this + 16) = a3;
      goto LABEL_12;
    }
  }
  v8 = 0;
LABEL_13:
  *a4 = v8;
LABEL_14:
  if ( *a4 )
    *((_DWORD *)this + 4) |= v5;
  return v4;
}
