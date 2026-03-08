/*
 * XREFs of ?SetIntegerProperty@CNineGridBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00BA8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CNineGridBrushMarshaler::SetIntegerProperty(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( (a4 != 0) != *((_BYTE *)this + 112) )
  {
    *((_DWORD *)this + 4) |= 0x4000u;
    *((_BYTE *)this + 112) = a4 != 0;
    *a5 = 1;
  }
  return result;
}
