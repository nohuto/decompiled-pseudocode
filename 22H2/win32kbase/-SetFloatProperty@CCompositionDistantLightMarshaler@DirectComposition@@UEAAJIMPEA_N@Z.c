/*
 * XREFs of ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C01F1E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 6 )
    return 3221225485LL;
  if ( *((float *)this + 33) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 33) = a3;
    *a4 = 1;
  }
  return result;
}
