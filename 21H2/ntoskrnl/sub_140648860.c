/*
 * XREFs of sub_140648860 @ 0x140648860
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140648860(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  const void *v5; // r12
  unsigned int v9; // ecx
  unsigned int *v10; // rax
  int v11; // edi
  __int64 v12; // r10
  unsigned int *v13; // rdx
  unsigned int v14; // edx
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  signed int v17; // ebx
  unsigned int v18; // r10d
  unsigned int *v19; // rax
  unsigned int i; // ecx
  __int64 v21; // r9
  unsigned int *v22; // rdx
  unsigned int v23; // r15d
  unsigned int *v24; // r14
  unsigned int j; // ecx
  __int64 v26; // rax
  unsigned int *v27; // rdx
  unsigned int v28; // edx
  unsigned int *v29; // rax
  size_t v30; // rbp
  void *Pool2; // rax
  const void *v32; // r8
  int v33; // r14d
  unsigned int v34; // r15d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned int v38; // eax
  int v39; // r8d
  unsigned int v40; // edx
  unsigned int v41; // eax
  __int64 v42; // rax
  int v43; // r14d
  __int64 v44; // r9
  unsigned int v45; // ecx
  _DWORD *k; // rdx
  unsigned int v47; // eax
  __int64 v48; // r8
  unsigned int v49; // eax
  unsigned int v50; // ecx
  unsigned __int64 m; // rdx
  unsigned int v52; // eax
  __int64 v53; // r8
  unsigned int v54; // eax
  unsigned int v55; // ecx
  _DWORD *n; // rdx
  unsigned int v57; // eax
  __int64 v58; // r8
  int v59; // r11d
  unsigned int v60; // eax
  unsigned int v61; // ecx
  _DWORD *ii; // rdx
  unsigned int v63; // eax
  __int64 v65; // [rsp+30h] [rbp-38h]
  int v66; // [rsp+80h] [rbp+18h] BYREF

  v66 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v66 = 0;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = 0;
  v10 = v4;
  v11 = 1;
  do
  {
    v12 = *v10;
    v13 = v10 + 1;
    if ( v10 + 1 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v13 + v12);
    if ( (unsigned int *)((char *)v13 + v12) < v13 )
      return (unsigned int)-1073741675;
    ++v9;
  }
  while ( v9 < 3 );
  v14 = *v10;
  v15 = v10 + 1;
  if ( v10 + 1 < v10 )
    return (unsigned int)-1073741675;
  v16 = 0LL;
  if ( v14 )
    v16 = v15;
  if ( v14 == 8 )
  {
    v65 = *(_QWORD *)v16;
    v18 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v19 = v4;
    for ( i = 0; i < 4; ++i )
    {
      v21 = *v19;
      v22 = v19 + 1;
      if ( v19 + 1 < v19 )
        return (unsigned int)-1073741675;
      v19 = (unsigned int *)((char *)v22 + v21);
      if ( (unsigned int *)((char *)v22 + v21) < v22 )
        return (unsigned int)-1073741675;
    }
    v23 = *v19;
    if ( v19 + 1 >= v19 )
    {
      v24 = 0LL;
      if ( v23 )
        v24 = v19 + 1;
      if ( v18 <= 5 )
        return (unsigned int)-1073741811;
      for ( j = 0; j < 5; ++j )
      {
        v26 = *v4;
        v27 = v4 + 1;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v4 = (unsigned int *)((char *)v27 + v26);
        if ( (unsigned int *)((char *)v27 + v26) < v27 )
          return (unsigned int)-1073741675;
      }
      v28 = *v4;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v29 = 0LL;
      if ( v28 )
        v29 = v4 + 1;
      if ( v28 != 4 )
        return (unsigned int)-1073741789;
      v30 = *v29;
      if ( (_DWORD)v30 )
      {
        v11 = 0;
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v30, 542329939LL);
        v5 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        memset(Pool2, 0, v30);
      }
      if ( qword_140D3B3C8 )
      {
        v32 = 0LL;
        if ( !v11 )
          v32 = v5;
        v33 = qword_140D3B3C8(v24, v23, v32, (unsigned int)v30, &v66);
      }
      else
      {
        v33 = -1073741637;
      }
      v34 = v30 + 4;
      if ( (unsigned int)v30 >= 0xFFFFFFFC
        || v34 >= 0xFFFFFFEC
        || (v35 = v30 + 32, (int)v30 + 32 < (unsigned int)(v30 + 24))
        || v35 >= 0xFFFFFFF8
        || (v36 = (v30 + 47) & 0xFFFFFFF8, v36 < (int)v30 + 40)
        || (v37 = v36 + 8, v36 + 8 < v36) )
      {
        v17 = -1073741675;
        goto LABEL_103;
      }
      v38 = v36 + 12;
      v39 = *(_DWORD *)(a2 + 16);
      if ( v37 >= 0xFFFFFFFC || (v40 = v37 + 8, v38 + 4 < v38) || (v41 = v40 + v39, v40 + v39 < v40) || v41 + 4 < v41 )
        v17 = -1073741675;
      else
        v17 = v41 + 4 + *(_DWORD *)(a2 + 32) < v41 + 4 ? 0xC0000095 : 0;
      if ( v17 < 0 )
        goto LABEL_103;
      if ( !a4 )
        goto LABEL_53;
      *(_DWORD *)(a4 + 4) = v35;
      if ( (_DWORD)v30 == -32 )
      {
        v17 = -1073741762;
        goto LABEL_103;
      }
      v42 = ExAllocatePool2(256LL, v35, 542329939LL);
      if ( !v42 )
      {
        v17 = -1073741801;
        goto LABEL_103;
      }
      *(_QWORD *)(a4 + 8) = v42;
      *(_DWORD *)a4 = 0;
      v43 = v33 | 0x10000000;
      v44 = v42;
      v45 = 0;
      for ( k = (_DWORD *)v42; v45 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v47) )
      {
        v47 = *k + 4;
        if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v47) < k )
          goto LABEL_83;
        ++v45;
      }
      if ( k + 1 < k )
      {
LABEL_83:
        v17 = -1073741675;
        goto LABEL_103;
      }
      if ( (unsigned __int64)(k + 2) > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
LABEL_64:
        v17 = -1073741789;
        goto LABEL_103;
      }
      *k = 4;
      k[1] = v43;
      ++*(_DWORD *)a4;
      v48 = *(_QWORD *)(a4 + 8);
      if ( v48 )
      {
        v50 = 0;
        for ( m = *(_QWORD *)(a4 + 8); v50 < *(_DWORD *)a4; m += v52 )
        {
          v52 = *(_DWORD *)m + 4;
          if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v52 < m )
            goto LABEL_83;
          ++v50;
        }
        if ( m + 4 < m )
          goto LABEL_83;
        if ( m + 12 > v48 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_64;
        *(_DWORD *)m = 8;
        *(_QWORD *)(m + 4) = v65;
      }
      else
      {
        v49 = *(_DWORD *)(a4 + 4);
        if ( v49 + 12 < v49 )
          goto LABEL_82;
        *(_DWORD *)(a4 + 4) = v49 + 12;
      }
      ++*(_DWORD *)a4;
      if ( v5 )
      {
        if ( !(_DWORD)v30 )
        {
LABEL_53:
          v17 = -1073741811;
          goto LABEL_103;
        }
      }
      else if ( (_DWORD)v30 )
      {
        goto LABEL_53;
      }
      v53 = *(_QWORD *)(a4 + 8);
      if ( v53 )
      {
        v55 = 0;
        for ( n = *(_DWORD **)(a4 + 8); v55 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v57) )
        {
          v57 = *n + 4;
          if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v57) < n )
            goto LABEL_83;
          ++v55;
        }
        if ( n + 1 < n )
          goto LABEL_83;
        if ( (unsigned __int64)n + v30 + 4 > v53 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_64;
        *n = v30;
        if ( v5 )
          memmove(n + 1, v5, v30);
        goto LABEL_92;
      }
      v54 = *(_DWORD *)(a4 + 4);
      if ( v54 + v34 >= v54 )
      {
        *(_DWORD *)(a4 + 4) = v54 + v34;
LABEL_92:
        ++*(_DWORD *)a4;
        v58 = *(_QWORD *)(a4 + 8);
        v59 = v66;
        if ( !v58 )
        {
          v60 = *(_DWORD *)(a4 + 4);
          if ( v60 + 8 >= v60 )
          {
            ++*(_DWORD *)a4;
            v17 = 0;
            *(_DWORD *)(a4 + 4) = v60 + 8;
            goto LABEL_103;
          }
          goto LABEL_82;
        }
        v61 = 0;
        for ( ii = *(_DWORD **)(a4 + 8); v61 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v63) )
        {
          v63 = *ii + 4;
          if ( *ii >= 0xFFFFFFFC || (_DWORD *)((char *)ii + v63) < ii )
            goto LABEL_83;
          ++v61;
        }
        if ( ii + 1 >= ii )
        {
          v17 = 0;
          if ( (unsigned __int64)(ii + 2) > v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_64;
          *ii = 4;
          ii[1] = v59;
          ++*(_DWORD *)a4;
LABEL_103:
          if ( v5 )
            ExFreeHeapPool((ULONG_PTR)v5);
          return (unsigned int)v17;
        }
        goto LABEL_83;
      }
LABEL_82:
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_83;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741789;
}
