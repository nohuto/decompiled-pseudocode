/*
 * XREFs of DecodeInputTexcoord @ 0x180027DA0
 * Callers:
 *     PopulateSamplerArguments @ 0x180028C2C (PopulateSamplerArguments.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x18002A318 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z @ 0x180101200 (-SwizzleNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBD@Z.c)
 */

__int64 __fastcall DecodeInputTexcoord(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  unsigned __int16 v4; // ax
  bool v5; // zf
  int appended; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  int *v15; // [rsp+38h] [rbp-10h]
  int v16; // [rsp+58h] [rbp+10h] BYREF
  __int16 v17; // [rsp+60h] [rbp+18h] BYREF

  v4 = a3 | 0x100;
  v5 = *(_BYTE *)(a2 + 156) == 0;
  v17 = a3 | 0x100;
  if ( v5 )
  {
    if ( *(_BYTE *)(a2 + 154) )
    {
      v14 = 1LL;
      v15 = (int *)&v17;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   a1,
                   v4,
                   (unsigned int)word_180338FC0,
                   a4,
                   (__int64)"FlattenTexcoords",
                   (__int64)&v14);
      v8 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, appended, 0x223u, 0LL);
    }
    else
    {
      v10 = CShaderLinkingGraphBuilder::SwizzleNode(a1, v4);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x228u, 0LL);
    }
  }
  else
  {
    v14 = 2LL;
    v15 = &v16;
    v16 = 16843008;
    v12 = CShaderLinkingGraphBuilder::AppendNode(
            a1,
            v4,
            (unsigned int)word_180338FC0,
            a4,
            (__int64)"GetCubeTexcoord",
            (__int64)&v14);
    v8 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x21Cu, 0LL);
  }
  return v8;
}
