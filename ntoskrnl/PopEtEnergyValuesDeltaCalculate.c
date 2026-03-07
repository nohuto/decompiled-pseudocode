__int64 __fastcall PopEtEnergyValuesDeltaCalculate(__int64 a1, _QWORD *a2, __int64 a3, int *a4)
{
  _QWORD *v5; // rdi
  int v6; // ebp
  char *v7; // r14
  __int64 v8; // r12
  __int64 v11; // rcx
  int *v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rdx
  int *v15; // rdx
  __int64 v16; // r12
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx

  v5 = a2;
  *(_QWORD *)(a3 + 64) = a2[8] - *(_QWORD *)(a1 + 64);
  v6 = 1;
  v7 = (char *)a2 - a1;
  *(_QWORD *)(a3 + 72) = a2[9] - *(_QWORD *)(a1 + 72);
  v8 = 3LL;
  *(_QWORD *)(a3 + 80) = a2[10] - *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a3 + 88) = a2[11] - *(_QWORD *)(a1 + 88);
  v11 = a2[12];
  v12 = (int *)(a1 + 104);
  *(_QWORD *)(a3 + 96) = v11 - *(_QWORD *)(a1 + 96);
  v13 = a3 - a1;
  do
  {
    RtlStateDurationDelta((__int64)v12 + v13, v12, (unsigned int *)((char *)v12 + (_QWORD)v7));
    v12 = (int *)(v14 + 8);
    --v8;
  }
  while ( v8 );
  v15 = (int *)(a1 + 384);
  v16 = 5LL;
  do
  {
    result = RtlStateDurationDelta((__int64)v15 + v13, v15, (unsigned int *)&v7[(_QWORD)v15]);
    v15 = (int *)(v18 + 8);
    --v16;
  }
  while ( v16 );
  v19 = 4LL;
  *(_DWORD *)(a3 + 128) = *((_DWORD *)v5 + 32) - *(_DWORD *)(a1 + 128);
  v20 = 0LL;
  *(_DWORD *)(a3 + 132) = *((_DWORD *)v5 + 33) - *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a3 + 136) = *((_DWORD *)v5 + 34) - *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a3 + 424) = *((_DWORD *)v5 + 106) - *(_DWORD *)(a1 + 424);
  v21 = *((_DWORD *)v5 + 107) - *(_DWORD *)(a1 + 428);
  v22 = a1 - (_QWORD)v5;
  *(_DWORD *)(a3 + 428) = v21;
  v23 = a3 - (_QWORD)v5;
  *(_OWORD *)(a3 + 272) = *((_OWORD *)v5 + 17);
  *(_OWORD *)(a3 + 288) = *((_OWORD *)v5 + 18);
  *(_OWORD *)(a3 + 304) = *((_OWORD *)v5 + 19);
  *(_OWORD *)(a3 + 320) = *((_OWORD *)v5 + 20);
  *(_OWORD *)(a3 + 336) = *((_OWORD *)v5 + 21);
  *(_OWORD *)(a3 + 352) = *((_OWORD *)v5 + 22);
  *(_OWORD *)(a3 + 368) = *((_OWORD *)v5 + 23);
  do
  {
    v24 = 2LL;
    do
    {
      v25 = *v5 - *(_QWORD *)((char *)v5 + v22);
      v26 = v25 + v20;
      *(_QWORD *)((char *)v5 + v23) = v25;
      v27 = v5[18] - *(_QWORD *)((char *)v5 + v22 + 144);
      *(_QWORD *)((char *)v5 + v23 + 144) = v27;
      v20 = v27 + v26;
      *(_QWORD *)((char *)v5 + v23 + 208) = v5[26] - *(_QWORD *)((char *)v5 + v22 + 208);
      ++v5;
      --v24;
    }
    while ( v24 );
    --v19;
  }
  while ( v19 );
  if ( v20
    || *(_QWORD *)(a3 + 64)
    || *(_QWORD *)(a3 + 72)
    || *(_QWORD *)(a3 + 80)
    || (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 124) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 388) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 396) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 404) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 412) & 0x7FFFFFFF) != 0
    || (*(_DWORD *)(a3 + 420) & 0x7FFFFFFF) != 0
    || *(_DWORD *)(a3 + 128)
    || *(_DWORD *)(a3 + 132)
    || *(_DWORD *)(a3 + 136) )
  {
    v6 = 0;
  }
  *a4 = v6;
  return result;
}
