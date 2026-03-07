__int64 __fastcall MiReduceZeroingThreads(int *a1, int a2)
{
  int *v3; // rbx
  __int64 v4; // r15
  int v5; // esi
  __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rax
  int *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned int v23; // ecx
  _QWORD *v24; // rcx
  _QWORD *i; // r14
  _QWORD *v26; // r15
  int v27; // eax
  int v28; // r9d
  bool v29; // zf
  unsigned int v30; // [rsp+60h] [rbp+8h]
  __int64 v31; // [rsp+70h] [rbp+18h]

  v3 = a1;
  if ( !a1[3] )
  {
    ++a1[57];
    return 8LL;
  }
  v4 = *((_QWORD *)a1 + 21);
  v5 = 0;
  v6 = *(unsigned int *)(v4 + 92);
  if ( *a1 )
  {
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      v8 = 0LL;
      do
      {
        if ( *(_DWORD *)(v8 + *((_QWORD *)v3 + 16) + 32) && (unsigned int)MiMoveZeroThreadsToOtherCores(v3, v7) )
          v5 = 1;
        ++v7;
        v8 += 48LL;
      }
      while ( v7 < (unsigned int)v6 );
    }
  }
  if ( a2 )
    return 8 - (unsigned int)(v5 != 0);
  v10 = *v3;
  v11 = 1;
  v31 = v10;
  if ( v3[3] <= (unsigned int)v3[2] )
  {
    v12 = 0LL;
    v13 = (int *)(v4 + 96);
    do
    {
      if ( v12 != v10 && v13[3] )
      {
        if ( v12 >= v10 )
        {
          ++dword_140C12FA8;
          v3 = v13;
        }
        else
        {
          ++dword_140C12FA4;
        }
        v11 = 0;
      }
      ++v12;
      v13 += 74;
    }
    while ( v12 < 3 );
  }
  if ( v3[3] <= v11 )
  {
    ++v3[57];
    return 8LL;
  }
  v30 = 1;
  v14 = 1LL;
  if ( !(_DWORD)v6 )
    return 5LL;
  v15 = 0LL;
  v16 = v6;
  do
  {
    v15 += 48LL;
    *(_DWORD *)(v15 + *((_QWORD *)v3 + 16) - 12) = 0;
    --v16;
  }
  while ( v16 );
  v17 = 1;
LABEL_21:
  v18 = 0;
  v19 = v6;
  do
  {
    v20 = *((_QWORD *)v3 + 16);
    v21 = 0LL;
    v22 = v19;
    do
    {
      if ( *(_DWORD *)(v20 + 36) < v17 )
      {
        v23 = *(_DWORD *)(v20 + 32);
        if ( v23 )
        {
          if ( v21 )
          {
            if ( *(_DWORD *)(v21 + 32) < v23 )
              v21 = v20;
          }
          else
          {
            v21 = v20;
          }
        }
      }
      v20 += 48LL;
      --v22;
    }
    while ( v22 );
    if ( !v21 )
    {
      if ( v17 == 2 )
        return 5LL;
      ++v17;
      goto LABEL_21;
    }
    v24 = (_QWORD *)(v21 + 16);
    for ( i = *(_QWORD **)(v21 + 16); ; i = (_QWORD *)*i )
    {
      if ( i == v24 )
        goto LABEL_42;
      v26 = i - 23;
      if ( v17 != 1 || !v10 )
        break;
      v27 = MiZeroThreadContending(i - 23, v22, v10, v14);
      v24 = (_QWORD *)(v21 + 16);
      if ( v27 )
      {
        ++v3[58];
        goto LABEL_39;
      }
      v10 = v31;
LABEL_35:
      ;
    }
    if ( (v26[17] & 2) != 0 )
      goto LABEL_35;
    ++v3[59];
LABEL_39:
    if ( i == v24 )
    {
LABEL_42:
      v14 = v30;
      *(_DWORD *)(v21 + 36) = v17;
      goto LABEL_43;
    }
    *((_DWORD *)v26 + 34) |= 2u;
    MiDecrementZeroEngineThread(v3, v22, v10, v30);
    v29 = v28 == 1;
    v14 = (unsigned int)(v28 - 1);
    v30 = v14;
    if ( v29 )
      return 5LL;
LABEL_43:
    if ( v18 + 1 == (_DWORD)v6 && v17 < 2 )
    {
      v10 = v31;
      ++v17;
      goto LABEL_21;
    }
    v10 = v31;
    ++v18;
    v30 = v14;
    v19 = v6;
  }
  while ( v18 < (unsigned int)v6 );
  return 5LL;
}
