_QWORD *__fastcall PpmResetProfileSettings(__int64 a1)
{
  __int64 v1; // r9
  _QWORD *v2; // r8
  _OWORD *v3; // rdx
  _OWORD *v4; // rax
  __int64 v5; // r10
  __int128 v6; // xmm1
  _OWORD *v7; // rcx
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int64 v10; // rdx
  _QWORD *result; // rax
  __int64 v12; // rcx

  v1 = 3LL;
  v2 = (_QWORD *)(a1 + 40);
  v3 = (_OWORD *)(a1 + 40);
  v4 = &unk_140C390C8;
  v5 = 3LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  v7 = (_OWORD *)(a1 + 480);
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  *((_QWORD *)v3 + 6) = *((_QWORD *)v4 + 6);
  v8 = &unk_140C39280;
  do
  {
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    v7[3] = v8[3];
    v7[4] = v8[4];
    v7[5] = v8[5];
    v7[6] = v8[6];
    v7 += 8;
    v9 = v8[7];
    v8 += 8;
    *(v7 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = 2LL;
  *v7 = *v8;
  v7[1] = v8[1];
  v7[2] = v8[2];
  *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
  do
  {
    result = v2;
    v12 = 2LL;
    do
    {
      *result = 0LL;
      result += 55;
      --v12;
    }
    while ( v12 );
    ++v2;
    --v10;
  }
  while ( v10 );
  return result;
}
