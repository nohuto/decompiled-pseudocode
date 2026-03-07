__int64 __fastcall PopIdleWakeCalculateConvergedBuckets(__int64 a1, __int64 a2)
{
  _OWORD *v2; // r8
  int v4; // r10d
  _OWORD *v5; // rax
  __int64 v6; // r9
  __int128 v7; // xmm1
  __int64 result; // rax
  __int64 v9; // r9
  __int128 v10; // xmm1
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  _DWORD *v19; // r8
  __int64 v20; // r10
  _QWORD *v21; // r8
  __int64 v22; // r10
  _DWORD *v23; // r8
  __int64 v24; // r10
  _QWORD *v25; // r8
  __int64 v26; // r10
  _DWORD *v27; // r8
  __int64 v28; // r10
  _QWORD *v29; // r8
  __int64 v30; // r8
  _DWORD *v31; // rcx
  __int64 v32; // r10
  _QWORD *v33; // r9

  v2 = (_OWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = (_OWORD *)(a1 + 384);
  if ( !v4 )
  {
    v6 = 2LL;
    do
    {
      *(_OWORD *)a2 = *v5;
      *(_OWORD *)(a2 + 16) = v5[1];
      *(_OWORD *)(a2 + 32) = v5[2];
      *(_OWORD *)(a2 + 48) = v5[3];
      *(_OWORD *)(a2 + 64) = v5[4];
      *(_OWORD *)(a2 + 80) = v5[5];
      *(_OWORD *)(a2 + 96) = v5[6];
      a2 += 128LL;
      v7 = v5[7];
      v5 += 8;
      *(_OWORD *)(a2 - 16) = v7;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)a2 = *v5;
    *(_OWORD *)(a2 + 16) = v5[1];
    *(_OWORD *)(a2 + 32) = v5[2];
    *(_OWORD *)(a2 + 48) = v5[3];
    *(_OWORD *)(a2 + 64) = v5[4];
    *(_OWORD *)(a2 + 80) = v5[5];
    *(_OWORD *)(a2 + 96) = v5[6];
    result = *((_QWORD *)v5 + 14);
LABEL_5:
    *(_QWORD *)(a2 + 112) = result;
    return result;
  }
  if ( !*(_DWORD *)v5 )
  {
    v9 = 2LL;
    do
    {
      *(_OWORD *)a2 = *v2;
      *(_OWORD *)(a2 + 16) = v2[1];
      *(_OWORD *)(a2 + 32) = v2[2];
      *(_OWORD *)(a2 + 48) = v2[3];
      *(_OWORD *)(a2 + 64) = v2[4];
      *(_OWORD *)(a2 + 80) = v2[5];
      *(_OWORD *)(a2 + 96) = v2[6];
      a2 += 128LL;
      v10 = v2[7];
      v2 += 8;
      *(_OWORD *)(a2 - 16) = v10;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)a2 = *v2;
    *(_OWORD *)(a2 + 16) = v2[1];
    *(_OWORD *)(a2 + 32) = v2[2];
    *(_OWORD *)(a2 + 48) = v2[3];
    *(_OWORD *)(a2 + 64) = v2[4];
    *(_OWORD *)(a2 + 80) = v2[5];
    *(_OWORD *)(a2 + 96) = v2[6];
    result = *((_QWORD *)v2 + 14);
    goto LABEL_5;
  }
  v11 = 9LL;
  *(_DWORD *)a2 = *(_DWORD *)v5 + v4;
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 >= *(_QWORD *)(a1 + 392) )
    v12 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a2 + 8) = v12;
  v13 = *(_QWORD *)(a1 + 24);
  if ( v13 <= *(_QWORD *)(a1 + 400) )
    v13 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a2 + 16) = v13;
  v14 = (_DWORD *)(a1 + 40);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 120) + *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a2 + 184) = *(_QWORD *)(a1 + 192) + *(_QWORD *)(a1 + 568);
  *(_QWORD *)(a2 + 256) = *(_QWORD *)(a1 + 264) + *(_QWORD *)(a1 + 640);
  *(_QWORD *)(a2 + 328) = *(_QWORD *)(a1 + 336) + *(_QWORD *)(a1 + 712);
  v15 = a2 - a1;
  do
  {
    *(_DWORD *)((char *)v14 + v15 - 8) = *v14 + v14[94];
    ++v14;
    --v11;
  }
  while ( v11 );
  v16 = (_DWORD *)(a1 + 76);
  v17 = 11LL;
  do
  {
    *(_DWORD *)((char *)v16 + v15 - 8) = *v16 + v16[94];
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = 5LL;
  v19 = (_DWORD *)(a1 + 128);
  v20 = 5LL;
  do
  {
    *(_DWORD *)((char *)v19 + v15 - 8) = *v19 + v19[94];
    ++v19;
    --v20;
  }
  while ( v20 );
  v21 = (_QWORD *)(a1 + 152);
  v22 = 5LL;
  do
  {
    *(_QWORD *)((char *)v21 + v15 - 8) = *v21 + v21[47];
    ++v21;
    --v22;
  }
  while ( v22 );
  v23 = (_DWORD *)(a1 + 200);
  v24 = 5LL;
  do
  {
    *(_DWORD *)((char *)v23 + v15 - 8) = *v23 + v23[94];
    ++v23;
    --v24;
  }
  while ( v24 );
  v25 = (_QWORD *)(a1 + 224);
  v26 = 5LL;
  do
  {
    *(_QWORD *)((char *)v25 + v15 - 8) = *v25 + v25[47];
    ++v25;
    --v26;
  }
  while ( v26 );
  v27 = (_DWORD *)(a1 + 272);
  v28 = 5LL;
  do
  {
    *(_DWORD *)((char *)v27 + v15 - 8) = *v27 + v27[94];
    ++v27;
    --v28;
  }
  while ( v28 );
  v29 = (_QWORD *)(a1 + 296);
  do
  {
    *(_QWORD *)((char *)v29 + v15 - 8) = *v29 + v29[47];
    ++v29;
    --v18;
  }
  while ( v18 );
  v30 = 3LL;
  v31 = (_DWORD *)(a1 + 344);
  v32 = 3LL;
  do
  {
    *(_DWORD *)((char *)v31 + v15 - 8) = *v31 + v31[94];
    ++v31;
    --v32;
  }
  while ( v32 );
  v33 = (_QWORD *)(a1 + 360);
  do
  {
    result = *v33 + v33[47];
    *(_QWORD *)((char *)v33++ + v15 - 8) = result;
    --v30;
  }
  while ( v30 );
  return result;
}
