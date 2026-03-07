_BYTE *__fastcall InitializeBuildStrings(__int64 a1)
{
  _OWORD *v1; // rdx
  __int128 v2; // xmm0
  _OWORD *v3; // rcx
  __int128 v4; // xmm0
  _BYTE *result; // rax
  __int128 v6; // xmm1

  v1 = (_OWORD *)(a1 + 2992);
  v2 = *(_OWORD *)(a1 + 2992);
  v3 = (_OWORD *)(a1 + 3216);
  NtBuildLab[0] = v2;
  NtBuildLab[1] = v1[1];
  NtBuildLab[2] = v1[2];
  NtBuildLab[3] = v1[3];
  NtBuildLab[4] = v1[4];
  NtBuildLab[5] = v1[5];
  NtBuildLab[6] = v1[6];
  v4 = v1[7];
  v1 += 8;
  NtBuildLab[7] = v4;
  NtBuildLab[8] = *v1;
  NtBuildLab[9] = v1[1];
  NtBuildLab[10] = v1[2];
  NtBuildLab[11] = v1[3];
  NtBuildLab[12] = v1[4];
  NtBuildLab[13] = v1[5];
  *(_OWORD *)NtBuildLabEx = *v3;
  *(_OWORD *)&NtBuildLabEx[16] = v3[1];
  *(_OWORD *)&NtBuildLabEx[32] = v3[2];
  *(_OWORD *)&NtBuildLabEx[48] = v3[3];
  *(_OWORD *)&NtBuildLabEx[64] = v3[4];
  *(_OWORD *)&NtBuildLabEx[80] = v3[5];
  *(_OWORD *)&NtBuildLabEx[96] = v3[6];
  result = &NtBuildLabEx[128];
  v6 = v3[7];
  v3 += 8;
  *(_OWORD *)&NtBuildLabEx[112] = v6;
  *(_OWORD *)&NtBuildLabEx[128] = *v3;
  *(_OWORD *)&NtBuildLabEx[144] = v3[1];
  *(_OWORD *)&NtBuildLabEx[160] = v3[2];
  *(_OWORD *)&NtBuildLabEx[176] = v3[3];
  *(_OWORD *)&NtBuildLabEx[192] = v3[4];
  *(_OWORD *)&NtBuildLabEx[208] = v3[5];
  return result;
}
