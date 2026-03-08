/*
 * XREFs of ?SetIntegerProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00C15F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetIntegerProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  switch ( a3 )
  {
    case 0:
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 19) = a4;
      goto LABEL_4;
    case 4:
      *((_DWORD *)this + 4) |= 0x80u;
      *((_DWORD *)this + 20) = a4;
LABEL_4:
      *a5 = 1;
      return 0LL;
    case 2:
      *((_DWORD *)this + 4) |= 0x20u;
      *((_DWORD *)this + 18) = a4;
      goto LABEL_4;
  }
  return 3221225485LL;
}
