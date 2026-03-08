/*
 * XREFs of ?SetFloatProperty@CCompositionSkyBoxBrushMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C026C2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSkyBoxBrushMarshaler::SetFloatProperty(
        DirectComposition::CCompositionSkyBoxBrushMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 4 )
    return 3221225485LL;
  if ( *((float *)this + 26) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *((float *)this + 26) = a3;
    *a4 = 1;
  }
  return result;
}
