/*
 * XREFs of HasWhiteNoise @ 0x180027F88
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x180028514 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ??$find@V?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x18002800C (--$find@V-$span_iterator@$$CBW4ShaderLinkingArgument@@@details@gsl@@W4ShaderLinkingArgument@@@st.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

bool __fastcall HasWhiteNoise(__int64 a1)
{
  gsl::details *v2; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v7; // [rsp+20h] [rbp-68h] BYREF
  __int64 v8; // [rsp+28h] [rbp-60h]
  __int64 v9; // [rsp+30h] [rbp-58h]
  _QWORD v10[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  __int16 v12; // [rsp+90h] [rbp+8h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v12 = 12;
  v2 = *(gsl::details **)a1;
  v10[0] = v7;
  v10[2] = v7;
  v8 = v7 + 2LL * (_QWORD)v2;
  v9 = v8;
  v10[1] = v8;
  v3 = (_QWORD *)((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64 *, __int16 *))std::find<gsl::details::span_iterator<enum ShaderLinkingArgument const>,enum ShaderLinkingArgument>)(
                   &v11,
                   v10,
                   &v7,
                   &v12);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 + 2LL * *(_QWORD *)a1;
  if ( *v3 != v4 || v3[1] != v5 )
  {
    gsl::details::terminate(*(gsl::details **)a1);
    JUMPOUT(0x180028004LL);
  }
  return v3[2] != v5;
}
