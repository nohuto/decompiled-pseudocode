/*
 * XREFs of ?SetIntegerProperty@CSurfaceBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00B9D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CSurfaceBrushMarshaler::SetIntegerProperty(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d

  v5 = 0;
  *a5 = 0;
  v6 = a3 - 4;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
    if ( *((_DWORD *)this + 29) != a4 )
    {
      *((_DWORD *)this + 4) |= 0x400u;
      *((_DWORD *)this + 29) = a4;
      goto LABEL_4;
    }
  }
  else if ( *((_DWORD *)this + 28) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((_DWORD *)this + 28) = a4;
LABEL_4:
    *a5 = 1;
  }
  return v5;
}
