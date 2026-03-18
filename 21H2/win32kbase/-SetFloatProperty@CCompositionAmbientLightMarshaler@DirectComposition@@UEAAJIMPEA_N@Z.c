/*
 * XREFs of ?SetFloatProperty@CCompositionAmbientLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0232110
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0099CA0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CCompositionAmbientLightMarshaler::SetFloatProperty(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax

  result = 0LL;
  *a4 = 0;
  if ( a2 != 4 )
    return DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  if ( *((float *)this + 30) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((float *)this + 30) = a3;
    *a4 = 1;
  }
  return result;
}
