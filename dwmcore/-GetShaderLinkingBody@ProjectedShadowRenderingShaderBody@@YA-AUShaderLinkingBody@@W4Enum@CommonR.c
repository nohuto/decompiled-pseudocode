/*
 * XREFs of ?GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@CommonRenderingShaderBody@@W4D3DShaderProfileVersion@@@Z @ 0x180205D18
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?GetInputs@CommonRenderingShaderBody@@YA?AV?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@W4Enum@1@@Z @ 0x1800FFD58 (-GetInputs@CommonRenderingShaderBody@@YA-AV-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@W4Enum@.c)
 */

__int64 __fastcall ProjectedShadowRenderingShaderBody::GetShaderLinkingBody(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  void *v4; // rax
  const char *v5; // rax
  __int128 v6; // xmm0
  int v7; // r10d
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  v3 = a1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( a3 )
  {
    if ( a3 != 1 )
      return v3;
    v4 = &unk_180384210;
  }
  else
  {
    v4 = &unk_180384930;
  }
  *(_QWORD *)(a1 + 16) = 1824LL;
  *(_QWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 32) = a3;
  if ( a2 == 1 )
  {
    v5 = "ProjectedShadowVertexColorAndCasterOpacity";
  }
  else if ( a2 == 3 )
  {
    v5 = "ProjectedShadowVertexColorAndCasterOpacityAndReceiverOpacity";
  }
  else
  {
    v5 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = v5;
  v6 = *(_OWORD *)CommonRenderingShaderBody::GetInputs(v9, a2);
  *(_DWORD *)(v3 + 48) = v7;
  *(_WORD *)(v3 + 52) = 10;
  *(_OWORD *)v3 = v6;
  return v3;
}
