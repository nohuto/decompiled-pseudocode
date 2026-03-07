__int64 __fastcall DirectComposition::CDDisplayRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CDDisplayRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 4;
            if ( !v11 )
            {
              if ( (unsigned int)(a4 - 1) > 3 )
                return (unsigned int)-1073741811;
              *((_DWORD *)this + 4) |= 0x80u;
              *((_DWORD *)this + 35) = a4;
              goto LABEL_28;
            }
            v12 = v11 - 2;
            if ( v12 )
            {
              v13 = v12 - 2;
              if ( v13 )
              {
                if ( v13 != 1 )
                  return (unsigned int)-1073741811;
                *((_DWORD *)this + 4) |= 0x400u;
              }
              else
              {
                *((_DWORD *)this + 4) |= 0x200u;
                *((_BYTE *)this + 152) = a4 != 0;
              }
LABEL_28:
              *a5 = 1;
              return v5;
            }
            *((_DWORD *)this + 37) = a4;
          }
          else
          {
            *((_DWORD *)this + 23) = a4;
          }
        }
        else
        {
          if ( *((_DWORD *)this + 22) || (_DWORD)a4 != 10 && (_DWORD)a4 != 24 && (_DWORD)a4 != 28 && (_DWORD)a4 != 87 )
            return (unsigned int)-1073741811;
          *((_DWORD *)this + 22) = a4;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 17) )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 17) = a4;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 16) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 16) = a4;
    }
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_28;
  }
  if ( *((_QWORD *)this + 9) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_QWORD *)this + 9) = a4;
    *a5 = 1;
  }
  return v5;
}
