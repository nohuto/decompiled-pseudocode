__int64 __fastcall SPCallServerHandleGetLicenseChallenge(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v7; // ecx
  _DWORD *v8; // rdx
  __int64 *v9; // rbp
  _DWORD *v10; // rax
  void *Pool2; // r12
  signed int v12; // ebx
  unsigned int *v13; // rax
  unsigned int i; // edx
  __int64 v15; // r10
  unsigned int *v16; // r9
  unsigned int v17; // r9d
  __int64 v19; // rbp
  unsigned int j; // edx
  __int64 v21; // rax
  unsigned int *v22; // rcx
  unsigned int v23; // edx
  int v24; // edx
  unsigned int v25; // ecx
  signed int v26; // r15d
  unsigned int *v27; // rsi
  __int64 v28; // rax
  unsigned __int64 *v29; // rbx
  int v30; // r15d
  __int64 v31; // r8
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  _DWORD *k; // rdx
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned __int64 m; // rdx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned __int64 v41; // r8
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  _DWORD *n; // rdx
  unsigned int v45; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v13 = *(unsigned int **)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v15 = *v13;
    v16 = v13 + 1;
    if ( v13 + 1 < v13 )
      return (unsigned int)-1073741675;
    v13 = (unsigned int *)((char *)v16 + v15);
    if ( (unsigned int *)((char *)v16 + v15) < v16 )
      return (unsigned int)-1073741675;
  }
  v17 = *v13;
  if ( v13 + 1 < v13 )
    return (unsigned int)-1073741675;
  v9 = 0LL;
  if ( v17 )
    v9 = (__int64 *)(v13 + 1);
  if ( v17 != 8 )
    return (unsigned int)-1073741789;
  v19 = *v9;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v21 = *v4;
    v22 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  v23 = *v4;
  if ( v4 + 1 >= v4 )
  {
    v10 = 0LL;
    if ( v23 )
      v10 = v4 + 1;
    if ( v23 == 4 )
    {
      if ( *v10 != 4104 )
        return (unsigned int)-1073741762;
      Pool2 = (void *)ExAllocatePool2(256LL, 4104LL, 542329939LL);
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      if ( !qword_140D53398 )
      {
        v12 = -1073741637;
        goto LABEL_19;
      }
      v12 = qword_140D53398(Pool2);
      if ( v12 < 0 )
        goto LABEL_19;
      v24 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFEFC0
        || (v25 = *(_DWORD *)(a2 + 16) + 4164, v26 = v12, v25 < *(_DWORD *)(a2 + 16) + 4160) )
      {
        v12 = -1073741675;
        goto LABEL_19;
      }
      v12 = v25 + v24 < v25 ? 0xC0000095 : 0;
      if ( v25 + v24 < v25 )
      {
LABEL_19:
        ExFreePoolWithTag(Pool2, 0);
        return (unsigned int)v12;
      }
      if ( !a4 )
      {
        v12 = -1073741811;
        goto LABEL_19;
      }
      v27 = (unsigned int *)(a4 + 4);
      *(_DWORD *)(a4 + 4) = 4136;
      v12 = 0;
      v28 = ExAllocatePool2(256LL, 4136LL, 542329939LL);
      if ( v28 )
      {
        *(_QWORD *)(a4 + 8) = v28;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v12 = -1073741801;
      }
      if ( v12 < 0 )
        goto LABEL_19;
      v29 = (unsigned __int64 *)(a4 + 8);
      v30 = v26 | 0x10000000;
      v31 = *(_QWORD *)(a4 + 8);
      if ( v31 )
      {
        v33 = 0;
        for ( k = *(_DWORD **)(a4 + 8); v33 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v35) )
        {
          v35 = *k + 4;
          if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v35) < k )
            goto LABEL_81;
          ++v33;
        }
        if ( k + 1 < k )
          goto LABEL_81;
        if ( (unsigned __int64)(k + 2) > v31 + (unsigned __int64)*v27 )
          goto LABEL_82;
        *k = 4;
        k[1] = v30;
      }
      else
      {
        v32 = *v27 + 8;
        if ( v32 < *v27 )
          goto LABEL_79;
        *v27 = v32;
      }
      ++*(_DWORD *)a4;
      if ( *v29 )
      {
        v37 = 0;
        for ( m = *v29; v37 < *(_DWORD *)a4; m += v39 )
        {
          v39 = *(_DWORD *)m + 4;
          if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v39 < m )
            goto LABEL_81;
          ++v37;
        }
        if ( m + 4 < m )
          goto LABEL_81;
        if ( m + 12 > *v29 + *v27 )
          goto LABEL_82;
        *(_DWORD *)m = 8;
        *(_QWORD *)(m + 4) = v19;
      }
      else
      {
        v36 = *v27 + 12;
        if ( v36 < *v27 )
          goto LABEL_79;
        *v27 = v36;
      }
      ++*(_DWORD *)a4;
      if ( *v29 )
      {
        v7 = 0;
        v8 = (_DWORD *)*v29;
        if ( *(_DWORD *)a4 )
        {
          while ( *v8 < 0xFFFFFFFC && (_DWORD *)((char *)v8 + (unsigned int)(*v8 + 4)) >= v8 )
          {
            ++v7;
            v8 = (_DWORD *)((char *)v8 + (unsigned int)(*v8 + 4));
            if ( v7 >= *(_DWORD *)a4 )
              goto LABEL_5;
          }
          goto LABEL_81;
        }
LABEL_5:
        if ( v8 + 1 < v8 )
          goto LABEL_81;
        if ( (unsigned __int64)(v8 + 1027) <= *v29 + *v27 )
        {
          *v8 = 4104;
          memmove(v8 + 1, Pool2, 0x1008uLL);
          goto LABEL_76;
        }
LABEL_82:
        v12 = -1073741789;
        goto LABEL_19;
      }
      v40 = *v27 + 4108;
      if ( v40 >= *v27 )
      {
        *v27 = v40;
LABEL_76:
        ++*(_DWORD *)a4;
        v41 = *v29;
        if ( !*v29 )
        {
          v42 = *v27 + 8;
          if ( v42 >= *v27 )
          {
            *v27 = v42;
            ++*(_DWORD *)a4;
            v12 = 0;
            goto LABEL_19;
          }
          goto LABEL_79;
        }
        v43 = 0;
        for ( n = (_DWORD *)*v29; v43 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v45) )
        {
          v45 = *n + 4;
          if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v45) < n )
            goto LABEL_81;
          ++v43;
        }
        if ( n + 1 >= n )
        {
          v12 = 0;
          if ( (unsigned __int64)(n + 2) <= v41 + *v27 )
          {
            *n = 4;
            n[1] = 4104;
            ++*(_DWORD *)a4;
            goto LABEL_19;
          }
          goto LABEL_82;
        }
LABEL_81:
        v12 = -1073741675;
        goto LABEL_19;
      }
LABEL_79:
      *v27 = -1;
      goto LABEL_81;
    }
    return (unsigned int)-1073741789;
  }
  return (unsigned int)-1073741675;
}
