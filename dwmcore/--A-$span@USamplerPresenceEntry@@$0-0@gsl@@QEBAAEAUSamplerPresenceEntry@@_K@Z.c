/*
 * XREFs of ??A?$span@USamplerPresenceEntry@@$0?0@gsl@@QEBAAEAUSamplerPresenceEntry@@_K@Z @ 0x180028BE8
 * Callers:
 *     DiscoverSamplers @ 0x180028464 (DiscoverSamplers.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     PrepareSamplers @ 0x180028AEC (PrepareSamplers.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<SamplerPresenceEntry,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x180028C04LL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
