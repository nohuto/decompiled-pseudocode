__int64 __fastcall CCustomKernelEffect::GetSubgraphShaderLinkingBody(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0

  result = a2;
  v3 = *(_OWORD *)(a1 + 184);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 168);
  v4 = *(_OWORD *)(a1 + 200);
  *(_OWORD *)(a2 + 16) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 216);
  *(_OWORD *)(a2 + 32) = v4;
  *(_QWORD *)(a2 + 48) = v3;
  return result;
}
