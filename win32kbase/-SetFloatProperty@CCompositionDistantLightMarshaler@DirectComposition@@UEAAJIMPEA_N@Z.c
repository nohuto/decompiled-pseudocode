/*
 * XREFs of ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0269860
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0006C90 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionDistantLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 6 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 33) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x800u;
    *((float *)this + 33) = a3;
    *a4 = 1;
  }
  return result;
}
