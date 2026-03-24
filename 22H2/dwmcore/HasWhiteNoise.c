/*
 * XREFs of HasWhiteNoise @ 0x180046BB4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180047838 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x180046C1C (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x180046C5C (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

__int64 __fastcall HasWhiteNoise(__int64 *a1)
{
  __int64 v1; // rax
  _QWORD v3[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v4; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v5[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v6[16]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v7; // [rsp+70h] [rbp+10h] BYREF

  v1 = *a1;
  v5[0] = a1;
  v7 = 12;
  v3[0] = a1;
  v4 = (unsigned __int64)a1;
  v5[1] = v1;
  v3[1] = v1;
  v4 = *(_OWORD *)((__int64 (__fastcall *)(_BYTE *, __int128 *, _QWORD *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                    v6,
                    &v4,
                    v3,
                    &v7);
  return gsl::details::operator!=(&v4, v5);
}
