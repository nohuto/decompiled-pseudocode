/*
 * XREFs of ?SetIntegerProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00CD2D0
 * Callers:
 *     ?SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C024B210 (-SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CLegacyRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::CLegacyRenderTargetMarshaler *this,
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
  int v13; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 4;
          if ( !v10 )
          {
            if ( (unsigned int)(a4 - 1) <= 3 )
            {
              *((_DWORD *)this + 4) |= 0x80u;
              *((_DWORD *)this + 31) = a4;
LABEL_11:
              *a5 = 1;
              return v5;
            }
            return (unsigned int)-1073741811;
          }
          v11 = v10 - 1;
          if ( v11 )
          {
            v13 = v11 - 2;
            if ( !v13 )
            {
              *((_DWORD *)this + 4) |= 0x200u;
              *((_BYTE *)this + 136) = a4 != 0;
              goto LABEL_11;
            }
            if ( v13 == 1 )
            {
              *((_DWORD *)this + 4) |= 0x400u;
              goto LABEL_11;
            }
            return (unsigned int)-1073741811;
          }
          *((_DWORD *)this + 33) = a4;
        }
        else
        {
          *((_DWORD *)this + 21) = a4;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 20) || (_DWORD)a4 != 87 && (_DWORD)a4 != 10 && (_DWORD)a4 != 24 && (_DWORD)a4 != 28 )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 20) = a4;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 16) )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 16) = a4;
    }
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_11;
  }
  if ( *((_QWORD *)this + 9) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_QWORD *)this + 9) = a4;
    *a5 = 1;
  }
  return v5;
}
