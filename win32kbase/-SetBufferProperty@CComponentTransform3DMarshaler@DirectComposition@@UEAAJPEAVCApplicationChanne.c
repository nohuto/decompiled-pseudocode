__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        size_t Size,
        bool *a6)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  size_t v12; // r8
  __int64 v13; // rax
  char *v14; // rcx

  v6 = 0;
  if ( a3 )
  {
    v7 = a3 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 3;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              if ( v11 != 1 )
                return (unsigned int)-1073741811;
              v12 = Size;
              if ( Size != 64 )
                return (unsigned int)-1073741811;
              *((_DWORD *)this + 4) &= ~0x4000u;
              v13 = 148LL;
            }
            else
            {
              v12 = Size;
              if ( Size != 12 )
                return (unsigned int)-1073741811;
              *((_DWORD *)this + 4) &= ~0x2000u;
              v13 = 136LL;
            }
          }
          else
          {
            v12 = Size;
            if ( Size != 12 )
              return (unsigned int)-1073741811;
            *((_DWORD *)this + 4) &= ~0x1000u;
            v13 = 120LL;
          }
        }
        else
        {
          v12 = Size;
          if ( Size != 16 )
            return (unsigned int)-1073741811;
          *((_DWORD *)this + 4) &= ~0x400u;
          v13 = 104LL;
        }
      }
      else
      {
        v12 = Size;
        if ( Size != 12 )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 4) &= ~0x200u;
        v13 = 92LL;
      }
    }
    else
    {
      v12 = Size;
      if ( Size != 12 )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 4) &= ~0x80u;
      v13 = 72LL;
    }
  }
  else
  {
    v12 = Size;
    if ( Size != 8 )
      return (unsigned int)-1073741811;
    *((_DWORD *)this + 4) &= ~0x100u;
    v13 = 84LL;
  }
  v14 = (char *)this + v13;
  if ( !v14 )
    return (unsigned int)-1073741811;
  memmove(v14, a4, v12);
  *a6 = 1;
  return v6;
}
