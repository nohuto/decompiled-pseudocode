__int64 __fastcall CProjectedShadowApproxBlurEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  result = a2;
  v3 = *(_OWORD *)(a1 + 56);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 40);
  v4 = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(a2 + 16) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 88);
  *(_OWORD *)(a2 + 32) = v4;
  *(_QWORD *)(a2 + 48) = v3;
  return result;
}
