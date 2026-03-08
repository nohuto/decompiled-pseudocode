/*
 * XREFs of sub_140A484C0 @ 0x140A484C0
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A484C0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r11
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r10
  unsigned int *v10; // r9
  unsigned int v11; // r9d
  __int64 *v12; // r14
  __int64 v13; // r14
  unsigned int *v14; // rax
  unsigned int j; // r9d
  __int64 v16; // r10
  unsigned int *v17; // rdx
  unsigned int v18; // edi
  unsigned int *v19; // rbx
  signed int v20; // ebx
  unsigned int *v21; // rax
  unsigned int k; // r9d
  __int64 v23; // r10
  unsigned int *v24; // rdx
  unsigned int v25; // r12d
  unsigned int *v26; // rsi
  unsigned int m; // edx
  __int64 v28; // rax
  unsigned int *v29; // rcx
  unsigned int v30; // ecx
  unsigned int *v31; // rdx
  size_t v32; // rbp
  void *Pool2; // rax
  int v34; // ecx
  void *v35; // r8
  int v36; // r12d
  unsigned int v37; // r13d
  unsigned int v38; // ecx
  unsigned int v39; // edx
  unsigned int v40; // eax
  int v41; // r8d
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned int *v44; // rsi
  __int64 v45; // rax
  unsigned __int64 *v46; // rbx
  int v47; // r12d
  __int64 v48; // r8
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  _DWORD *n; // rdx
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned __int64 ii; // rdx
  unsigned int v56; // eax
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  _DWORD *v59; // rdx
  int v60; // r8d
  unsigned __int64 v61; // r9
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  _DWORD *v64; // rdx
  void *Src; // [rsp+40h] [rbp-48h]
  int v68; // [rsp+A0h] [rbp+18h] BYREF

  v68 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v68 = 0;
  Src = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  v11 = *v7;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v12 = 0LL;
  if ( v11 )
    v12 = (__int64 *)(v7 + 1);
  if ( v11 != 8 )
    return (unsigned int)-1073741789;
  v13 = *v12;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v14 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v16 = *v14;
    v17 = v14 + 1;
    if ( v14 + 1 < v14 )
      return (unsigned int)-1073741675;
    v14 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v14;
  if ( v14 + 1 < v14 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( v18 )
    v19 = v14 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v21 = v4;
  for ( k = 0; k < 5; ++k )
  {
    v23 = *v21;
    v24 = v21 + 1;
    if ( v21 + 1 < v21 )
      return (unsigned int)-1073741675;
    v21 = (unsigned int *)((char *)v24 + v23);
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  v25 = *v21;
  if ( v21 + 1 < v21 )
    return (unsigned int)-1073741675;
  v26 = 0LL;
  if ( v25 )
    v26 = v21 + 1;
  if ( *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v28 = *v4;
      v29 = v4 + 1;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v4 = (unsigned int *)((char *)v29 + v28);
      if ( (unsigned int *)((char *)v29 + v28) < v29 )
        return (unsigned int)-1073741675;
    }
    v30 = *v4;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v31 = 0LL;
    if ( v30 )
      v31 = v4 + 1;
    if ( v30 != 4 )
      return (unsigned int)-1073741789;
    v32 = *v31;
    if ( (_DWORD)v32 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v32, 542329939LL);
      Src = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      memset(Pool2, 0, v32);
      v5 = Src;
      v34 = 0;
    }
    else
    {
      v34 = 1;
    }
    if ( qword_140D53438 )
    {
      v35 = 0LL;
      if ( !v34 )
        v35 = v5;
      v36 = qword_140D53438(v19, v18, v26, v25, v35, v32, &v68);
    }
    else
    {
      v36 = -1073741637;
    }
    v37 = v32 + 4;
    if ( (unsigned int)v32 >= 0xFFFFFFFC
      || v37 >= 0xFFFFFFEC
      || (v38 = v32 + 32, (int)v32 + 32 < (unsigned int)(v32 + 24))
      || v38 >= 0xFFFFFFF8
      || (v39 = (v32 + 47) & 0xFFFFFFF8, v39 < (int)v32 + 40)
      || v39 + 8 < v39 )
    {
      v20 = -1073741675;
LABEL_117:
      if ( Src )
        ExFreePoolWithTag(Src, 0);
      return (unsigned int)v20;
    }
    v40 = v39 + 12;
    v41 = *(_DWORD *)(a2 + 16);
    if ( v39 + 12 < 4 || (v42 = v39 + 16, v40 + 4 < v40) || (v43 = v42 + v41, v42 + v41 < v42) || v43 + 4 < v43 )
      v20 = -1073741675;
    else
      v20 = v43 + 4 + *(_DWORD *)(a2 + 32) < v43 + 4 ? 0xC0000095 : 0;
    if ( v20 < 0 )
      goto LABEL_117;
    if ( !a4 )
      goto LABEL_90;
    v20 = 0;
    v44 = (unsigned int *)(a4 + 4);
    *(_DWORD *)(a4 + 4) = v38;
    if ( (_DWORD)v32 == -32 )
    {
      v20 = -1073741762;
    }
    else
    {
      v45 = ExAllocatePool2(256LL, v38, 542329939LL);
      if ( v45 )
      {
        *(_QWORD *)(a4 + 8) = v45;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v20 = -1073741801;
      }
    }
    if ( v20 < 0 )
      goto LABEL_117;
    v46 = (unsigned __int64 *)(a4 + 8);
    v47 = v36 | 0x10000000;
    v48 = *(_QWORD *)(a4 + 8);
    if ( v48 )
    {
      v50 = 0;
      for ( n = *(_DWORD **)(a4 + 8); v50 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v52) )
      {
        v52 = *n + 4;
        if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v52) < n )
          goto LABEL_96;
        ++v50;
      }
      if ( n + 1 < n )
        goto LABEL_96;
      if ( (unsigned __int64)(n + 2) > v48 + (unsigned __int64)*v44 )
        goto LABEL_103;
      *n = 4;
      n[1] = v47;
    }
    else
    {
      v49 = *v44 + 8;
      if ( v49 < *v44 )
        goto LABEL_95;
      *v44 = v49;
    }
    ++*(_DWORD *)a4;
    if ( *v46 )
    {
      v54 = 0;
      for ( ii = *v46; v54 < *(_DWORD *)a4; ii += v56 )
      {
        v56 = *(_DWORD *)ii + 4;
        if ( *(_DWORD *)ii >= 0xFFFFFFFC || ii + v56 < ii )
          goto LABEL_96;
        ++v54;
      }
      if ( ii + 4 < ii )
        goto LABEL_96;
      if ( ii + 12 > *v46 + *v44 )
        goto LABEL_103;
      *(_DWORD *)ii = 8;
      *(_QWORD *)(ii + 4) = v13;
    }
    else
    {
      v53 = *v44 + 12;
      if ( v53 < *v44 )
        goto LABEL_95;
      *v44 = v53;
    }
    ++*(_DWORD *)a4;
    if ( Src )
    {
      if ( !(_DWORD)v32 )
        goto LABEL_90;
    }
    else if ( (_DWORD)v32 )
    {
LABEL_90:
      v20 = -1073741811;
      goto LABEL_117;
    }
    if ( *v46 )
    {
      v58 = 0;
      v59 = (_DWORD *)*v46;
      if ( *(_DWORD *)a4 )
      {
        while ( *v59 < 0xFFFFFFFC && (_DWORD *)((char *)v59 + (unsigned int)(*v59 + 4)) >= v59 )
        {
          ++v58;
          v59 = (_DWORD *)((char *)v59 + (unsigned int)(*v59 + 4));
          if ( v58 >= *(_DWORD *)a4 )
            goto LABEL_101;
        }
        goto LABEL_96;
      }
LABEL_101:
      if ( v59 + 1 < v59 )
        goto LABEL_96;
      if ( (unsigned __int64)v59 + v32 + 4 > *v46 + *v44 )
        goto LABEL_103;
      *v59 = v32;
      if ( Src )
        memmove(v59 + 1, Src, v32);
LABEL_106:
      v60 = v68;
      ++*(_DWORD *)a4;
      v61 = *v46;
      if ( !*v46 )
      {
        v62 = *v44 + 8;
        if ( v62 >= *v44 )
        {
          *v44 = v62;
          ++*(_DWORD *)a4;
          v20 = 0;
          goto LABEL_117;
        }
        goto LABEL_95;
      }
      v63 = 0;
      v64 = (_DWORD *)*v46;
      if ( *(_DWORD *)a4 )
      {
        while ( *v64 < 0xFFFFFFFC && (_DWORD *)((char *)v64 + (unsigned int)(*v64 + 4)) >= v64 )
        {
          ++v63;
          v64 = (_DWORD *)((char *)v64 + (unsigned int)(*v64 + 4));
          if ( v63 >= *(_DWORD *)a4 )
            goto LABEL_113;
        }
        goto LABEL_96;
      }
LABEL_113:
      if ( v64 + 1 >= v64 )
      {
        v20 = 0;
        if ( (unsigned __int64)(v64 + 2) <= v61 + *v44 )
        {
          *v64 = 4;
          v64[1] = v60;
          ++*(_DWORD *)a4;
          goto LABEL_117;
        }
LABEL_103:
        v20 = -1073741789;
        goto LABEL_117;
      }
LABEL_96:
      v20 = -1073741675;
      goto LABEL_117;
    }
    v57 = *v44 + v37;
    if ( v57 >= *v44 )
    {
      *v44 = v57;
      goto LABEL_106;
    }
LABEL_95:
    *v44 = -1;
    goto LABEL_96;
  }
  return (unsigned int)-1073741811;
}
