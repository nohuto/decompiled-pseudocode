/*
 * XREFs of sub_14066B1EC @ 0x14066B1EC
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14066B1EC(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r12
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r9
  unsigned int v12; // r9d
  __int64 *v13; // r14
  __int64 v14; // r14
  signed int v15; // ebx
  unsigned int *v16; // rax
  unsigned int j; // r9d
  __int64 v18; // r10
  unsigned int *v19; // rdx
  unsigned int v20; // edi
  unsigned int *v21; // rbx
  unsigned int k; // edx
  __int64 v23; // rax
  unsigned int *v24; // rcx
  unsigned int v25; // ecx
  unsigned int *v26; // rdx
  size_t v27; // rbp
  void *Pool2; // rax
  int v29; // ecx
  void *v30; // r8
  int v31; // r12d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  int v35; // r8d
  unsigned int v36; // edx
  unsigned int v37; // eax
  unsigned int *v38; // rsi
  __int64 v39; // rax
  unsigned __int64 *v40; // rbx
  int v41; // r12d
  __int64 v42; // r8
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  _DWORD *m; // rdx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned __int64 n; // rdx
  unsigned int v50; // eax
  void *v51; // r14
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  _DWORD *v54; // rdx
  int v55; // r8d
  unsigned __int64 v56; // r9
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  _DWORD *v59; // rdx
  void *Src; // [rsp+38h] [rbp-30h]
  int v62; // [rsp+80h] [rbp+18h] BYREF

  v62 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v62 = 0;
  Src = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = v4;
  for ( i = 0; i < 3; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( v8 + 1 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  v12 = *v8;
  if ( v8 + 1 < v8 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( v12 )
    v13 = (__int64 *)(v8 + 1);
  if ( v12 != 8 )
    return (unsigned int)-1073741789;
  v14 = *v13;
  if ( *(_DWORD *)a1 > 4u )
  {
    v16 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v18 = *v16;
      v19 = v16 + 1;
      if ( v16 + 1 < v16 )
        return (unsigned int)-1073741675;
      v16 = (unsigned int *)((char *)v19 + v18);
      if ( (unsigned int *)((char *)v19 + v18) < v19 )
        return (unsigned int)-1073741675;
    }
    v20 = *v16;
    if ( v16 + 1 >= v16 )
    {
      v21 = 0LL;
      if ( v20 )
        v21 = v16 + 1;
      if ( *(_DWORD *)a1 <= 5u )
        return (unsigned int)-1073741811;
      for ( k = 0; k < 5; ++k )
      {
        v23 = *v4;
        v24 = v4 + 1;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v4 = (unsigned int *)((char *)v24 + v23);
        if ( (unsigned int *)((char *)v24 + v23) < v24 )
          return (unsigned int)-1073741675;
      }
      v25 = *v4;
      if ( v4 + 1 < v4 )
        return (unsigned int)-1073741675;
      v26 = 0LL;
      if ( v25 )
        v26 = v4 + 1;
      if ( v25 != 4 )
        return (unsigned int)-1073741789;
      v27 = *v26;
      if ( (_DWORD)v27 )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v27, 542329939LL);
        Src = Pool2;
        v5 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741801;
        memset(Pool2, 0, v27);
        v29 = 0;
      }
      else
      {
        v29 = 1;
      }
      if ( qword_140D53408 )
      {
        v30 = 0LL;
        if ( !v29 )
          v30 = v5;
        v31 = qword_140D53408(v21, v20, v30, (unsigned int)v27, &v62);
      }
      else
      {
        v31 = -1073741637;
      }
      if ( (unsigned int)v27 >= 0xFFFFFFFC
        || (unsigned int)(v27 + 24) < 0x14
        || (v32 = v27 + 32, (int)v27 + 32 < (unsigned int)(v27 + 24))
        || v32 >= 0xFFFFFFF8
        || (v33 = (v27 + 47) & 0xFFFFFFF8, v33 < (int)v27 + 40)
        || v33 + 8 < v33 )
      {
        v15 = -1073741675;
        goto LABEL_113;
      }
      v34 = v33 + 12;
      v35 = *(_DWORD *)(a2 + 16);
      if ( v33 + 12 < 4 || (v36 = v33 + 16, v34 + 4 < v34) || (v37 = v36 + v35, v36 + v35 < v36) || v37 + 4 < v37 )
        v15 = -1073741675;
      else
        v15 = v37 + 4 + *(_DWORD *)(a2 + 32) < v37 + 4 ? 0xC0000095 : 0;
      if ( v15 < 0 )
        goto LABEL_113;
      if ( !a4 )
      {
        v15 = -1073741811;
LABEL_113:
        v51 = Src;
LABEL_114:
        if ( v51 )
          ExFreePoolWithTag(v51, 0);
        return (unsigned int)v15;
      }
      v15 = 0;
      v38 = (unsigned int *)(a4 + 4);
      *(_DWORD *)(a4 + 4) = v32;
      if ( (_DWORD)v27 == -32 )
      {
        v15 = -1073741762;
      }
      else
      {
        v39 = ExAllocatePool2(256LL, v32, 542329939LL);
        if ( v39 )
        {
          *(_QWORD *)(a4 + 8) = v39;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v15 = -1073741801;
        }
      }
      if ( v15 < 0 )
        goto LABEL_113;
      v40 = (unsigned __int64 *)(a4 + 8);
      v41 = v31 | 0x10000000;
      v42 = *(_QWORD *)(a4 + 8);
      if ( v42 )
      {
        v44 = 0;
        for ( m = *(_DWORD **)(a4 + 8); v44 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v46) )
        {
          v46 = *m + 4;
          if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v46) < m )
            goto LABEL_65;
          ++v44;
        }
        if ( m + 1 < m )
          goto LABEL_65;
        if ( (unsigned __int64)(m + 2) > v42 + (unsigned __int64)*v38 )
          goto LABEL_72;
        *m = 4;
        m[1] = v41;
      }
      else
      {
        v43 = *v38 + 8;
        if ( v43 < *v38 )
        {
LABEL_64:
          *v38 = -1;
          goto LABEL_65;
        }
        *v38 = v43;
      }
      ++*(_DWORD *)a4;
      if ( !*v40 )
      {
        v47 = *v38 + 12;
        if ( v47 >= *v38 )
        {
          *v38 = v47;
          goto LABEL_84;
        }
        goto LABEL_64;
      }
      v48 = 0;
      for ( n = *v40; v48 < *(_DWORD *)a4; n += v50 )
      {
        v50 = *(_DWORD *)n + 4;
        if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v50 < n )
          goto LABEL_65;
        ++v48;
      }
      if ( n + 4 >= n )
      {
        if ( n + 12 <= *v40 + *v38 )
        {
          *(_DWORD *)n = 8;
          *(_QWORD *)(n + 4) = v14;
LABEL_84:
          ++*(_DWORD *)a4;
          v51 = Src;
          if ( Src )
          {
            if ( !(_DWORD)v27 )
              goto LABEL_86;
          }
          else if ( (_DWORD)v27 )
          {
LABEL_86:
            v15 = -1073741811;
            goto LABEL_114;
          }
          if ( *v40 )
          {
            v53 = 0;
            v54 = (_DWORD *)*v40;
            if ( *(_DWORD *)a4 )
            {
              while ( *v54 < 0xFFFFFFFC && (_DWORD *)((char *)v54 + (unsigned int)(*v54 + 4)) >= v54 )
              {
                ++v53;
                v54 = (_DWORD *)((char *)v54 + (unsigned int)(*v54 + 4));
                if ( v53 >= *(_DWORD *)a4 )
                  goto LABEL_97;
              }
              goto LABEL_92;
            }
LABEL_97:
            if ( v54 + 1 < v54 )
              goto LABEL_92;
            if ( (unsigned __int64)v54 + v27 + 4 > *v40 + *v38 )
              goto LABEL_99;
            *v54 = v27;
            if ( Src )
              memmove(v54 + 1, Src, v27);
          }
          else
          {
            v52 = *v38 + v27 + 4;
            if ( v52 < *v38 )
            {
LABEL_91:
              *v38 = -1;
              goto LABEL_92;
            }
            *v38 = v52;
          }
          v55 = v62;
          ++*(_DWORD *)a4;
          v56 = *v40;
          if ( !*v40 )
          {
            v57 = *v38 + 8;
            if ( v57 >= *v38 )
            {
              *v38 = v57;
              ++*(_DWORD *)a4;
              v15 = 0;
              goto LABEL_114;
            }
            goto LABEL_91;
          }
          v58 = 0;
          v59 = (_DWORD *)*v40;
          if ( *(_DWORD *)a4 )
          {
            while ( *v59 < 0xFFFFFFFC && (_DWORD *)((char *)v59 + (unsigned int)(*v59 + 4)) >= v59 )
            {
              ++v58;
              v59 = (_DWORD *)((char *)v59 + (unsigned int)(*v59 + 4));
              if ( v58 >= *(_DWORD *)a4 )
                goto LABEL_109;
            }
            goto LABEL_92;
          }
LABEL_109:
          if ( v59 + 1 >= v59 )
          {
            v15 = 0;
            if ( (unsigned __int64)(v59 + 2) <= v56 + *v38 )
            {
              *v59 = 4;
              v59[1] = v55;
              ++*(_DWORD *)a4;
              goto LABEL_114;
            }
LABEL_99:
            v15 = -1073741789;
            goto LABEL_114;
          }
LABEL_92:
          v15 = -1073741675;
          goto LABEL_114;
        }
LABEL_72:
        v15 = -1073741789;
        goto LABEL_113;
      }
LABEL_65:
      v15 = -1073741675;
      goto LABEL_113;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741811;
}
