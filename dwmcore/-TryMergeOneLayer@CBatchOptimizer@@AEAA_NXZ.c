char __fastcall CBatchOptimizer::TryMergeOneLayer(CBatchOptimizer *this)
{
  char *v1; // r9
  int v2; // r8d
  int v4; // ecx
  __int64 v5; // r9
  __int64 v6; // r15
  __int64 v7; // rsi
  signed int v8; // ebp
  __int64 v9; // r13
  int *v10; // r14
  char *v11; // rdi
  int v12; // r10d
  __int64 v13; // rdx
  int *v14; // r9
  __int64 v15; // r11
  char *v16; // rax
  __int64 v17; // rcx
  float *v18; // rax
  int *v19; // rdx
  int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  char *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // r9d
  signed int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+80h] [rbp+8h]
  int v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+90h] [rbp+18h]
  __int64 v36; // [rsp+98h] [rbp+20h]

  v1 = (char *)this + 48;
  v2 = 0;
  v33 = 0;
  if ( *((_DWORD *)this + 130 * *((int *)this + 12) + 26) )
  {
    do
    {
      v30 = *((int *)v1 + 1);
      v1 += 4;
      ++v2;
    }
    while ( *((_DWORD *)this + 130 * v30 + 26) );
    v33 = v2;
  }
  v4 = *((_DWORD *)this + 8);
  v5 = v4 - 1;
  v6 = v2;
  v34 = *((_DWORD *)this + 8);
  v32 = v5;
  if ( v2 == v5 )
  {
LABEL_35:
    *((_BYTE *)this + 4240) = 0;
    return 0;
  }
  while ( 1 )
  {
    v7 = 520LL * *((int *)this + v6 + 12);
    if ( *(_DWORD *)((char *)this + v7 + 100) )
    {
      if ( !*(_QWORD *)((char *)this + v7 + 112) )
      {
        v8 = v2 + 1;
        if ( v2 + 1 != v4 )
          break;
      }
    }
LABEL_20:
    ++v2;
    ++v6;
    v33 = v2;
    v19 = (int *)((char *)this + 4 * v6 + 48);
    if ( *((_DWORD *)this + 130 * *v19 + 26) )
    {
      do
      {
        v31 = v19[1];
        ++v19;
        ++v2;
        ++v6;
      }
      while ( *((_DWORD *)this + 130 * v31 + 26) );
      v33 = v2;
    }
    if ( v6 == v5 )
      goto LABEL_35;
    v4 = v34;
  }
  while ( 1 )
  {
    v9 = v8;
    v10 = (int *)((char *)this + 4 * v8 + 48);
    v11 = (char *)this + 520 * *v10;
    if ( *((_DWORD *)v11 + 26) )
    {
      v29 = CBatchOptimizer::SkipContinuations(this, v8);
      v2 = v33;
      v8 = v29;
      goto LABEL_18;
    }
    if ( *((_DWORD *)v11 + 25) != 1
      || *((_QWORD *)v11 + 14)
      || *(_QWORD *)((char *)this + v7 + 80) != *((_QWORD *)v11 + 10) )
    {
      goto LABEL_18;
    }
    v12 = v8 - 1;
    if ( v8 - 1 != v2 )
    {
      v13 = v12;
      v14 = (int *)((char *)this + 4 * v12 + 48);
      while ( 1 )
      {
        v15 = 0LL;
        v16 = (char *)this + 520 * *v14;
        v17 = *((int *)v16 + 25);
        if ( (_DWORD)v17 )
          break;
LABEL_37:
        --v13;
        --v14;
        if ( v13 == v2 )
          goto LABEL_23;
      }
      v18 = (float *)(v16 + 284);
      while ( *((float *)v11 + 72) < *(v18 - 1)
           || v18[1] < *((float *)v11 + 70)
           || *((float *)v11 + 73) < *v18
           || v18[2] < *((float *)v11 + 71) )
      {
        ++v15;
        v18 += 4;
        if ( v15 == v17 )
          goto LABEL_37;
      }
      goto LABEL_18;
    }
LABEL_23:
    v20 = *((_DWORD *)v11 + 24);
    v35 = v20;
    v21 = (unsigned int)(v20 - 1);
    v22 = *(_QWORD *)&v11[8 * v21 + 120];
    *((_DWORD *)v11 + 24) = v21;
    v36 = v22;
    *((_DWORD *)v11 + 25) = 0;
    v23 = 520LL * *((int *)this + v6 + 12);
    if ( v2 && *(_DWORD *)((char *)this + v23 + 100) == 20 || *(_DWORD *)((char *)this + v23 + 96) == 20 )
    {
      CBatchOptimizer::ContinueLayer(this, v2);
      v2 = v33;
      v12 = v8 - 1;
      v20 = v35;
    }
    v24 = (char *)this + 520 * *((int *)this + v6 + 12);
    v25 = *((unsigned int *)v24 + 24);
    *((_DWORD *)v24 + 24) = v25 + 1;
    *(_QWORD *)&v24[8 * v25 + 120] = v36;
    if ( v2 )
      *(_OWORD *)&v24[16 * *((unsigned int *)v24 + 25) + 280] = *(_OWORD *)(v11 + 280);
    ++*((_DWORD *)v24 + 25);
    if ( v20 == 1 )
      break;
    if ( CBatchOptimizer::TryRemoveEmptyStateSettingLayer(this, v8) )
      return 1;
    v2 = v33;
LABEL_18:
    if ( ++v8 == v34 )
    {
      v5 = v32;
      goto LABEL_20;
    }
  }
  v26 = *((_DWORD *)this + 8) - 1;
  if ( v8 != v26 )
  {
    v27 = *v10;
    do
    {
      ++v9;
      *v10 = v10[1];
      ++v10;
    }
    while ( v9 != v26 );
    *((_DWORD *)this + v26 + 12) = v27;
  }
  --*((_DWORD *)this + 8);
  CBatchOptimizer::ConsolidateAdjacentHomogeneousLayers(this, v12);
  return 1;
}
