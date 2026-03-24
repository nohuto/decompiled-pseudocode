/*
 * XREFs of ?SetIntegerProperty@CSynchronousSuperWetInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01DD8E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSynchronousSuperWetInkMarshaler::SetIntegerProperty(
        DirectComposition::CSynchronousSuperWetInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v5 = 0;
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 2;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 != 1 )
              return (unsigned int)-1073741811;
            if ( *((_DWORD *)this + 26) == a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x2000u;
            *((_DWORD *)this + 26) = a4;
          }
          else
          {
            if ( *((_DWORD *)this + 25) == a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x1000u;
            *((_DWORD *)this + 25) = a4;
          }
        }
        else
        {
          if ( *((_DWORD *)this + 24) == a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x800u;
          *((_DWORD *)this + 24) = a4;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 20) == a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x200u;
        *((_DWORD *)this + 20) = a4;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 19) == a4 )
        return v5;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_DWORD *)this + 19) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( *((_DWORD *)this + 18) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_DWORD *)this + 18) = a4;
    *a5 = 1;
  }
  return v5;
}
