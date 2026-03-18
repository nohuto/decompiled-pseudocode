/*
 * XREFs of ?SetIntegerProperty@CLegacyRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00BF970
 * Callers:
 *     ?SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0214D60 (-SetIntegerProperty@CLegacyStereoRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
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
  int v12; // r8d
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
              *((_DWORD *)this + 33) = a4;
LABEL_8:
              *a5 = 1;
              return v5;
            }
            return (unsigned int)-1073741811;
          }
          v12 = v10 - 1;
          if ( v12 )
          {
            v13 = v12 - 2;
            if ( !v13 )
            {
              *((_DWORD *)this + 4) |= 0x200u;
              *((_BYTE *)this + 144) = a4 != 0;
              goto LABEL_8;
            }
            if ( v13 == 1 )
            {
              *((_DWORD *)this + 4) |= 0x400u;
              goto LABEL_8;
            }
            return (unsigned int)-1073741811;
          }
          *((_DWORD *)this + 35) = a4;
        }
        else
        {
          *((_DWORD *)this + 23) = a4;
        }
      }
      else
      {
        if ( *((_DWORD *)this + 22) || (_DWORD)a4 != 87 && (_DWORD)a4 != 10 && (_DWORD)a4 != 24 && (_DWORD)a4 != 28 )
          return (unsigned int)-1073741811;
        *((_DWORD *)this + 22) = a4;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) )
        return (unsigned int)-1073741811;
      *((_DWORD *)this + 18) = a4;
    }
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_8;
  }
  if ( *((_QWORD *)this + 10) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_QWORD *)this + 10) = a4;
    *a5 = 1;
  }
  return v5;
}
