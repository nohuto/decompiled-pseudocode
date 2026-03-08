/*
 * XREFs of ?SetIntegerProperty@CHolographicInteropTextureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0264EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CHolographicInteropTextureMarshaler::SetIntegerProperty(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edi
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d

  v5 = 0;
  if ( !a3 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((_DWORD *)this + 14) = a4;
    *a5 = 1;
    return v5;
  }
  v6 = a3 - 1;
  if ( !v6 )
  {
    *((_DWORD *)this + 15) = a4;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 16) = a4;
    goto LABEL_13;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *((_DWORD *)this + 17) = a4;
    goto LABEL_13;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *((_DWORD *)this + 18) = a4;
LABEL_13:
    *((_DWORD *)this + 4) |= 0x40u;
    goto LABEL_14;
  }
  if ( v9 == 1 )
  {
    *((_DWORD *)this + 19) = a4;
    *((_DWORD *)this + 20) = (unsigned int)PsGetCurrentProcessId();
LABEL_14:
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
