char __fastcall COcclusionContext::CheckOcclusionRelevance(__int64 a1, float *a2)
{
  unsigned int v2; // r10d
  float v3; // xmm1_4
  float v4; // xmm0_4
  int v5; // eax
  unsigned int v6; // edx
  float v7; // xmm1_4
  unsigned __int64 v8; // r9

  v2 = -1;
  v3 = a2[3] - a2[1];
  v4 = a2[2] - *a2;
  v5 = *(_DWORD *)(a1 + 1472);
  v6 = 0;
  v7 = v3 * v4;
  if ( v5 )
    v2 = *(_DWORD *)(*(_QWORD *)(a1 + 1488) + 4LL * (unsigned int)(v5 - 1));
  v8 = *(_QWORD *)(a1 + 1024);
  if ( !v8 )
    return 0;
  while ( ((v2 >> v6) & 1) == 0 || v7 <= (float)(*(float *)(a1 + 4LL * v6 + 1160) * 0.25) )
  {
    if ( ++v6 >= v8 )
      return 0;
  }
  return 1;
}
