/*
 * XREFs of ?SetIntegerProperty@CSceneMeshMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C025CBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSceneMeshMarshaler::SetIntegerProperty(
        DirectComposition::CSceneMeshMarshaler *this,
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
  int v11; // r8d

  v5 = 0;
  if ( a3 )
  {
    v6 = a3 - 8;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 != 1 )
                  return (unsigned int)-1073741811;
                if ( *((_DWORD *)this + 36) == a4 )
                  return v5;
                *((_DWORD *)this + 4) |= 0x80000u;
                *((_DWORD *)this + 36) = a4;
              }
              else
              {
                if ( *((_DWORD *)this + 35) == a4 )
                  return v5;
                *((_DWORD *)this + 4) |= 0x40000u;
                *((_DWORD *)this + 35) = a4;
              }
            }
            else
            {
              if ( *((_DWORD *)this + 34) == a4 )
                return v5;
              *((_DWORD *)this + 4) |= 0x20000u;
              *((_DWORD *)this + 34) = a4;
            }
          }
          else
          {
            if ( *((_DWORD *)this + 33) == a4 )
              return v5;
            *((_DWORD *)this + 4) |= 0x10000u;
            *((_DWORD *)this + 33) = a4;
          }
        }
        else
        {
          if ( *((_DWORD *)this + 32) == a4 )
            return v5;
          *((_DWORD *)this + 4) |= 0x8000u;
          *((_DWORD *)this + 32) = a4;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 31) == a4 )
          return v5;
        *((_DWORD *)this + 4) |= 0x4000u;
        *((_DWORD *)this + 31) = a4;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 30) == a4 )
        return v5;
      *((_DWORD *)this + 4) |= 0x2000u;
      *((_DWORD *)this + 30) = a4;
    }
    *a5 = 1;
    return v5;
  }
  if ( *((_DWORD *)this + 14) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 14) = a4;
    *a5 = 1;
  }
  return v5;
}
