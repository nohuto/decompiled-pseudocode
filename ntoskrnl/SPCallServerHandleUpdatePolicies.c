/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x1407978F8
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // ecx
  unsigned int v7; // edx
  int v8; // edx
  __int64 *v10; // rdx
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // rax
  unsigned int *v14; // r8
  unsigned int *v15; // rcx
  unsigned int v16; // r8d
  unsigned int *v17; // rdx
  int v18; // eax
  int v19; // r14d
  void *v20; // rcx
  __int64 Pool2; // rax
  unsigned int v22; // ecx
  _DWORD *j; // r8
  unsigned int i; // edx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int *v27; // rax
  __int64 v28; // r10
  unsigned int *v29; // r8
  unsigned int v30; // r10d
  __int64 *v31; // r14
  __int64 v32; // r8
  unsigned int v33; // eax
  unsigned int v34; // ecx
  _DWORD *k; // rdx
  unsigned int v36; // eax
  __int64 v37; // rax
  _DWORD *v38; // r10
  unsigned int v39; // ecx
  _DWORD *m; // r8
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // r10
  unsigned int v45; // eax
  __int64 *v46; // r14
  __int64 v47; // r8
  unsigned int v48; // eax
  unsigned int v49; // ecx
  _DWORD *n; // rdx
  unsigned int v51; // eax
  __int64 v52; // rax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  __int64 *v55; // r14
  __int64 v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // ecx
  _DWORD *ii; // rdx
  unsigned int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // eax
  unsigned int v63; // ecx
  _DWORD *jj; // r8
  unsigned int v65; // eax

  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 16) + 32;
  if ( v7 < 0x20 )
    return (unsigned int)-1073741675;
  v25 = v7 + 4;
  if ( v7 + 4 < v7 )
    return (unsigned int)-1073741675;
  v26 = v25 + v6;
  if ( v26 < v25 )
    return (unsigned int)-1073741675;
  if ( a3 >= v26 )
  {
    v15 = *(unsigned int **)(a1 + 8);
    if ( v15 && *(_DWORD *)a1 > 3u )
    {
      v27 = *(unsigned int **)(a1 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v28 = *v27;
        v29 = v27 + 1;
        if ( v27 + 1 < v27 )
          return (unsigned int)-1073741675;
        v27 = (unsigned int *)((char *)v29 + v28);
        if ( (unsigned int *)((char *)v29 + v28) < v29 )
          return (unsigned int)-1073741675;
      }
      v30 = *v27;
      if ( v27 + 1 < v27 )
        return (unsigned int)-1073741675;
      v10 = 0LL;
      if ( v30 )
        v10 = (__int64 *)(v27 + 1);
      if ( v30 != 8 )
        return (unsigned int)-1073741789;
      v11 = *v10;
      if ( v11 && qword_140D53228 )
      {
        if ( v11 == qword_140D53228 )
        {
          if ( *(_DWORD *)a1 <= 4u )
            return (unsigned int)-1073741811;
          v12 = 0;
          while ( 1 )
          {
            v13 = *v15;
            v14 = v15 + 1;
            if ( v15 + 1 < v15 )
              return (unsigned int)-1073741675;
            v15 = (unsigned int *)((char *)v14 + v13);
            if ( (unsigned int *)((char *)v14 + v13) < v14 )
              return (unsigned int)-1073741675;
            if ( (unsigned int)++v12 >= 4 )
            {
              v16 = *v15;
              if ( v15 + 1 < v15 )
                return (unsigned int)-1073741675;
              v17 = 0LL;
              if ( v16 )
                v17 = v15 + 1;
              v18 = ((__int64 (__fastcall *)(_QWORD, unsigned int *))qword_140D534A0)(v16, v17);
              if ( v18 == 263 )
              {
                v19 = 1074058754;
              }
              else if ( v18 == 0x40000000 )
              {
                v19 = 1074058753;
              }
              else if ( v18 < 0 )
              {
                v19 = v18 | 0x10000000;
              }
              else
              {
                v19 = 0;
              }
              *(_DWORD *)(a4 + 4) = 0;
              *(_DWORD *)a4 = 0;
              v20 = *(void **)(a4 + 8);
              if ( v20 )
              {
                ExFreePoolWithTag(v20, 0);
                *(_QWORD *)(a4 + 8) = 0LL;
              }
              v43 = *(_DWORD *)(a4 + 4);
              if ( v43 + 8 < v43 )
                goto LABEL_52;
              *(_DWORD *)(a4 + 4) = v43 + 8;
              ++*(_DWORD *)a4;
              if ( !*(_DWORD *)(a4 + 4) )
                return (unsigned int)-1073741762;
              Pool2 = ExAllocatePool2(256LL, *(unsigned int *)(a4 + 4), 542329939LL);
              if ( !Pool2 )
                return (unsigned int)-1073741801;
              *(_QWORD *)(a4 + 8) = Pool2;
              *(_DWORD *)a4 = 0;
              v44 = *(_QWORD *)(a4 + 8);
              if ( v44 )
              {
                v22 = 0;
                for ( j = *(_DWORD **)(a4 + 8); v22 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v45) )
                {
                  v45 = *j + 4;
                  if ( v45 < 4 || (_DWORD *)((char *)j + v45) < j )
                    return (unsigned int)-1073741675;
                  ++v22;
                }
                if ( j + 1 < j )
                  return (unsigned int)-1073741675;
                v8 = 0;
                if ( (unsigned __int64)(j + 2) <= v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *j = 4;
                  j[1] = v19;
                  goto LABEL_75;
                }
                return (unsigned int)-1073741789;
              }
              goto LABEL_72;
            }
          }
        }
        if ( !a4 )
          return (unsigned int)-1073741811;
        v31 = (__int64 *)(a4 + 8);
        v32 = *(_QWORD *)(a4 + 8);
        if ( v32 )
        {
          v34 = 0;
          for ( k = *(_DWORD **)(a4 + 8); v34 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v36) )
          {
            v36 = *k + 4;
            if ( v36 < 4 || (_DWORD *)((char *)k + v36) < k )
              return (unsigned int)-1073741675;
            ++v34;
          }
          if ( k + 1 < k )
            return (unsigned int)-1073741675;
          if ( (unsigned __int64)(k + 2) > v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *k = 4;
          k[1] = -1073425151;
        }
        else
        {
          v33 = *(_DWORD *)(a4 + 4);
          if ( v33 + 8 < v33 )
            goto LABEL_52;
          *(_DWORD *)(a4 + 4) = v33 + 8;
        }
        ++*(_DWORD *)a4;
        if ( !*(_DWORD *)(a4 + 4) )
          return (unsigned int)-1073741762;
        v37 = ExAllocatePool2(256LL, *(unsigned int *)(a4 + 4), 542329939LL);
        if ( !v37 )
          return (unsigned int)-1073741801;
        *v31 = v37;
        *(_DWORD *)a4 = 0;
        v38 = (_DWORD *)*v31;
        if ( *v31 )
        {
          v39 = 0;
          for ( m = (_DWORD *)*v31; v39 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v41) )
          {
            v41 = *m + 4;
            if ( v41 < 4 || (_DWORD *)((char *)m + v41) < m )
              return (unsigned int)-1073741675;
            ++v39;
          }
LABEL_69:
          if ( m + 1 < m )
            return (unsigned int)-1073741675;
          v8 = 0;
          if ( m + 2 <= (_DWORD *)((char *)v38 + *(unsigned int *)(a4 + 4)) )
          {
            *m = 4;
            m[1] = -1073425151;
LABEL_75:
            ++*(_DWORD *)a4;
            return (unsigned int)v8;
          }
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        v46 = (__int64 *)(a4 + 8);
        v47 = *(_QWORD *)(a4 + 8);
        if ( v47 )
        {
          v49 = 0;
          for ( n = *(_DWORD **)(a4 + 8); v49 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v51) )
          {
            v51 = *n + 4;
            if ( v51 < 4 || (_DWORD *)((char *)n + v51) < n )
              return (unsigned int)-1073741675;
            ++v49;
          }
          if ( n + 1 < n )
            return (unsigned int)-1073741675;
          if ( (unsigned __int64)(n + 2) > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            return (unsigned int)-1073741789;
          *n = 4;
          n[1] = -1073425151;
        }
        else
        {
          v48 = *(_DWORD *)(a4 + 4);
          if ( v48 + 8 < v48 )
            goto LABEL_52;
          *(_DWORD *)(a4 + 4) = v48 + 8;
        }
        ++*(_DWORD *)a4;
        if ( !*(_DWORD *)(a4 + 4) )
          return (unsigned int)-1073741762;
        v52 = ExAllocatePool2(256LL, *(unsigned int *)(a4 + 4), 542329939LL);
        if ( !v52 )
          return (unsigned int)-1073741801;
        *v46 = v52;
        *(_DWORD *)a4 = 0;
        v38 = (_DWORD *)*v46;
        if ( *v46 )
        {
          v53 = 0;
          m = (_DWORD *)*v46;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v54 = *m + 4;
              if ( v54 < 4 || (_DWORD *)((char *)m + v54) < m )
                return (unsigned int)-1073741675;
              ++v53;
              m = (_DWORD *)((char *)m + v54);
              if ( v53 >= *(_DWORD *)a4 )
                goto LABEL_69;
            }
          }
          goto LABEL_69;
        }
      }
LABEL_72:
      v42 = *(_DWORD *)(a4 + 4);
      if ( v42 + 8 < v42 )
        goto LABEL_52;
      *(_DWORD *)(a4 + 4) = v42 + 8;
      ++*(_DWORD *)a4;
      return 0;
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  v55 = (__int64 *)(a4 + 8);
  v56 = *(_QWORD *)(a4 + 8);
  if ( !v56 )
  {
    v57 = *(_DWORD *)(a4 + 4);
    if ( v57 + 8 >= v57 )
    {
      *(_DWORD *)(a4 + 4) = v57 + 8;
      goto LABEL_122;
    }
LABEL_52:
    *(_DWORD *)(a4 + 4) = -1;
    return (unsigned int)-1073741675;
  }
  v58 = 0;
  for ( ii = *(_DWORD **)(a4 + 8); v58 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v60) )
  {
    v60 = *ii + 4;
    if ( v60 < 4 || (_DWORD *)((char *)ii + v60) < ii )
      return (unsigned int)-1073741675;
    ++v58;
  }
  if ( ii + 1 < ii )
    return (unsigned int)-1073741675;
  if ( (unsigned __int64)(ii + 2) > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *ii = 4;
  ii[1] = 0;
LABEL_122:
  ++*(_DWORD *)a4;
  if ( !*(_DWORD *)(a4 + 4) )
    return (unsigned int)-1073741762;
  v61 = ExAllocatePool2(256LL, *(unsigned int *)(a4 + 4), 542329939LL);
  if ( !v61 )
    return (unsigned int)-1073741801;
  *v55 = v61;
  *(_DWORD *)a4 = 0;
  if ( !*v55 )
  {
    v62 = *(_DWORD *)(a4 + 4);
    if ( v62 + 8 >= v62 )
    {
      *(_DWORD *)(a4 + 4) = v62 + 8;
      ++*(_DWORD *)a4;
      v8 = 0;
      goto LABEL_131;
    }
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_130;
  }
  v63 = 0;
  for ( jj = (_DWORD *)*v55; v63 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v65) )
  {
    v65 = *jj + 4;
    if ( v65 < 4 || (_DWORD *)((char *)jj + v65) < jj )
      goto LABEL_130;
    ++v63;
  }
  if ( jj + 1 < jj )
  {
LABEL_130:
    v8 = -1073741675;
    goto LABEL_131;
  }
  v8 = 0;
  if ( (unsigned __int64)(jj + 2) <= *v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
    *jj = 4;
    jj[1] = 0;
    ++*(_DWORD *)a4;
  }
  else
  {
    v8 = -1073741789;
  }
LABEL_131:
  if ( v8 >= 0 )
    return 0;
  return (unsigned int)v8;
}
