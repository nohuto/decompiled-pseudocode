__int64 __fastcall DirectComposition::CImageLegacyMilBrushMarshaler::SetIntegerProperty(
        DirectComposition::CImageLegacyMilBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v5 = 0;
  v6 = a3 - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 5;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
              return (unsigned int)-1073741811;
            if ( *((_DWORD *)this + 39) == a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x40000u;
            *((_DWORD *)this + 39) = a4;
          }
          else
          {
            if ( *((_DWORD *)this + 38) == a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x20000u;
            *((_DWORD *)this + 38) = a4;
          }
        }
        else
        {
          if ( *((_DWORD *)this + 37) == a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x10000u;
          *((_DWORD *)this + 37) = a4;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 36) == a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x8000u;
        *((_DWORD *)this + 36) = a4;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 23) == a4 )
        return v5;
      *((_DWORD *)this + 4) |= 0x400u;
      *((_DWORD *)this + 23) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( *((_DWORD *)this + 22) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((_DWORD *)this + 22) = a4;
    *a5 = 1;
  }
  return v5;
}
