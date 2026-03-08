/*
 * XREFs of ?GetSubgraphShaderLinkingBody@CPassthroughEffect@@UEBA?AUShaderLinkingBody@@I@Z @ 0x1800FF5F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPassthroughEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // [rsp+0h] [rbp-18h]

  *(_QWORD *)&v3 = 1LL;
  *(_BYTE *)(a2 + 32) = 1;
  *((_QWORD *)&v3 + 1) = &CPassthroughEffect::k_shaderLinkingArguments;
  *(_QWORD *)(a2 + 40) = "NoOp";
  *(_OWORD *)a2 = v3;
  *(_WORD *)(a2 + 52) = 10;
  result = a2;
  *(_DWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 16) = 0uLL;
  return result;
}
