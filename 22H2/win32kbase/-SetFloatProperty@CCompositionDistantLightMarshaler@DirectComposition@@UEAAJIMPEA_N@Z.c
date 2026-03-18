/*
 * XREFs of ?SetFloatProperty@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C022AD20
 * Callers:
 *     ?SetFloatProperty@?$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectComposition@@$01@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C00D5DE0 (-SetFloatProperty@-$CSharedResourceMarshaler@VCCompositionDistantLightMarshaler@DirectCompositio.c)
 * Callees:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0007DD0 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
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
