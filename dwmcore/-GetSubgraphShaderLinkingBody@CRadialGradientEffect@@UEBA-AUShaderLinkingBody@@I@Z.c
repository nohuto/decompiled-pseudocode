/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CRadialGradientEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x1802B6220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRadialGradientEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  int v3; // ecx
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-18h]

  *(_QWORD *)&v5 = 1LL;
  *((_QWORD *)&v5 + 1) = &CRadialGradientEffect::k_shaderLinkingArguments;
  *(_OWORD *)a2 = v5;
  *(_QWORD *)(a2 + 16) = 3999LL;
  *(_QWORD *)(a2 + 24) = &unk_180355970;
  v2 = "RadialGradientCentered_UV";
  *(_BYTE *)(a2 + 32) = 1;
  if ( !*(_BYTE *)(a1 + 44) )
    v2 = "RadialGradientNonCentered_UV";
  *(_QWORD *)(a2 + 40) = v2;
  v3 = -(*(_BYTE *)(a1 + 44) != 0);
  *(_WORD *)(a2 + 52) = 256;
  result = a2;
  *(_DWORD *)(a2 + 48) = (v3 & 0xFFFFFFE8) + 32;
  return result;
}
