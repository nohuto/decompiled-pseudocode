__int16 __fastcall PopEtProcessSnapshotUpdateFromSnapshotContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v5; // rsi
  _OWORD *v6; // rax
  _OWORD *v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int16 result; // ax

  v3 = a2[2];
  v5 = *(_QWORD *)(a2[1] + 2280LL);
  PopEtStringSet(a1 + 24, *(_QWORD *)(v5 + 456));
  v6 = (_OWORD *)a2[3];
  v7 = (_OWORD *)(a1 + 48);
  v8 = 3LL;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    v9 = v6[7];
    v6 += 8;
    *(v7 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  *(_DWORD *)(a1 + 480) = *(_DWORD *)(v5 + 468);
  result = *(_WORD *)(v3 + 36) & *(_WORD *)(v5 + 464);
  *(_WORD *)(a1 + 44) = result;
  return result;
}
