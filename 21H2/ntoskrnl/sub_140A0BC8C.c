/*
 * XREFs of sub_140A0BC8C @ 0x140A0BC8C
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0BC8C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r11
  __int64 v7; // rbx
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
  unsigned int v23; // r13d
  unsigned int *v24; // r15
  unsigned int *v25; // rax
  unsigned int j; // ecx
  __int64 v27; // r9
  unsigned int *v28; // rdx
  unsigned int v29; // r12d
  unsigned int *v30; // r14
  unsigned int k; // ecx
  __int64 v32; // rax
  unsigned int *v33; // rdx
  unsigned int v34; // edx
  unsigned int *v35; // rax
  size_t v36; // rbp
  void *Pool2; // rax
  void *v38; // r10
  int v39; // r14d
  unsigned int v40; // r15d
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // eax
  int v45; // r8d
  unsigned int v46; // edx
  unsigned int v47; // eax
  __int64 v48; // rax
  int v49; // r14d
  __int64 v50; // r9
  unsigned int v51; // ecx
  _DWORD *m; // rdx
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned int v55; // eax
  unsigned int v56; // ecx
  unsigned __int64 v57; // rdx
  unsigned int v58; // eax
  void *v59; // r14
  __int64 v60; // r8
  unsigned int v61; // eax
  unsigned int v62; // ecx
  _DWORD *n; // rdx
  unsigned int v64; // eax
  __int64 v65; // r8
  int v66; // r11d
  unsigned int v67; // eax
  unsigned int v68; // ecx
  _DWORD *ii; // rdx
  unsigned int v70; // eax
  void *Src; // [rsp+40h] [rbp-48h]
  __int64 v73; // [rsp+48h] [rbp-40h]
  int v75; // [rsp+A0h] [rbp+18h] BYREF

  v75 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v75 = 0;
  Src = 0LL;
  v7 = a2;
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
    v73 = *(_QWORD *)v16;
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
      v25 = v4;
      for ( j = 0; j < 5; ++j )
      {
        v27 = *v25;
        v28 = v25 + 1;
        if ( v25 + 1 < v25 )
          return (unsigned int)-1073741675;
        v25 = (unsigned int *)((char *)v28 + v27);
        if ( (unsigned int *)((char *)v28 + v27) < v28 )
          return (unsigned int)-1073741675;
      }
      v29 = *v25;
      if ( v25 + 1 >= v25 )
      {
        v30 = 0LL;
        if ( v29 )
          v30 = v25 + 1;
        if ( v18 <= 6 )
          return (unsigned int)-1073741811;
        for ( k = 0; k < 6; ++k )
        {
          v32 = *v4;
          v33 = v4 + 1;
          if ( v4 + 1 < v4 )
            return (unsigned int)-1073741675;
          v4 = (unsigned int *)((char *)v33 + v32);
          if ( (unsigned int *)((char *)v33 + v32) < v33 )
            return (unsigned int)-1073741675;
        }
        v34 = *v4;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v35 = 0LL;
        if ( v34 )
          v35 = v4 + 1;
        if ( v34 != 4 )
          return (unsigned int)-1073741789;
        v36 = *v35;
        if ( (_DWORD)v36 )
        {
          v11 = 0;
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v36, 542329939LL);
          Src = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          memset(Pool2, 0, v36);
          v5 = Src;
          v7 = a2;
        }
        if ( qword_140D3B3F8 )
        {
          v38 = 0LL;
          if ( !v11 )
            v38 = v5;
          v39 = qword_140D3B3F8(v24, v23, v30, v29, v38, v36, &v75);
        }
        else
        {
          v39 = -1073741637;
        }
        v40 = v36 + 4;
        if ( (unsigned int)v36 >= 0xFFFFFFFC
          || v40 >= 0xFFFFFFEC
          || (v41 = v36 + 32, (int)v36 + 32 < (unsigned int)(v36 + 24))
          || v41 >= 0xFFFFFFF8
          || (v42 = (v36 + 47) & 0xFFFFFFF8, v42 < (int)v36 + 40)
          || (v43 = v42 + 8, v42 + 8 < v42) )
        {
          v17 = -1073741675;
          goto LABEL_115;
        }
        v44 = v42 + 12;
        v45 = *(_DWORD *)(v7 + 16);
        if ( v43 + 4 < 4 || (v46 = v43 + 8, v44 + 4 < v44) || (v47 = v46 + v45, v46 + v45 < v46) || v47 + 4 < v47 )
          v17 = -1073741675;
        else
          v17 = v47 + 4 + *(_DWORD *)(v7 + 32) < v47 + 4 ? 0xC0000095 : 0;
        if ( v17 < 0 )
          goto LABEL_115;
        if ( !a4 )
        {
          v17 = -1073741811;
LABEL_115:
          v59 = Src;
LABEL_116:
          if ( v59 )
            ExFreePoolWithTag(v59, 0);
          return (unsigned int)v17;
        }
        *(_DWORD *)(a4 + 4) = v41;
        if ( (_DWORD)v36 == -32 )
        {
          v17 = -1073741762;
          goto LABEL_115;
        }
        v48 = ExAllocatePool2(256LL, v41, 542329939LL);
        if ( !v48 )
        {
          v17 = -1073741801;
          goto LABEL_115;
        }
        *(_QWORD *)(a4 + 8) = v48;
        *(_DWORD *)a4 = 0;
        v49 = v39 | 0x10000000;
        v50 = v48;
        v51 = 0;
        for ( m = (_DWORD *)v48; v51 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v53) )
        {
          v53 = *m + 4;
          if ( v53 < 4 || (_DWORD *)((char *)m + v53) < m )
            goto LABEL_68;
          ++v51;
        }
        if ( m + 1 >= m )
        {
          if ( (unsigned __int64)(m + 2) > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
LABEL_75:
            v17 = -1073741789;
            goto LABEL_115;
          }
          *m = 4;
          m[1] = v49;
          ++*(_DWORD *)a4;
          v54 = *(_QWORD *)(a4 + 8);
          if ( v54 )
          {
            v56 = 0;
            v57 = *(_QWORD *)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v58 = *(_DWORD *)v57 + 4;
                if ( v58 < 4 || v57 + v58 < v57 )
                  break;
                ++v56;
                v57 += v58;
                if ( v56 >= *(_DWORD *)a4 )
                  goto LABEL_83;
              }
            }
            else
            {
LABEL_83:
              if ( v57 + 4 >= v57 )
              {
                if ( v57 + 12 > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_75;
                *(_DWORD *)v57 = 8;
                *(_QWORD *)(v57 + 4) = v73;
LABEL_86:
                ++*(_DWORD *)a4;
                v59 = Src;
                if ( Src )
                {
                  if ( !(_DWORD)v36 )
                    goto LABEL_88;
                }
                else if ( (_DWORD)v36 )
                {
LABEL_88:
                  v17 = -1073741811;
                  goto LABEL_116;
                }
                v60 = *(_QWORD *)(a4 + 8);
                if ( v60 )
                {
                  v62 = 0;
                  for ( n = *(_DWORD **)(a4 + 8); v62 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v64) )
                  {
                    v64 = *n + 4;
                    if ( v64 < 4 || (_DWORD *)((char *)n + v64) < n )
                      goto LABEL_94;
                    ++v62;
                  }
                  if ( n + 1 < n )
                    goto LABEL_94;
                  if ( (unsigned __int64)n + v36 + 4 > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_101;
                  *n = v36;
                  if ( Src )
                    memmove(n + 1, Src, v36);
                }
                else
                {
                  v61 = *(_DWORD *)(a4 + 4);
                  if ( v61 + v40 < v61 )
                  {
LABEL_93:
                    *(_DWORD *)(a4 + 4) = -1;
                    goto LABEL_94;
                  }
                  *(_DWORD *)(a4 + 4) = v61 + v40;
                }
                ++*(_DWORD *)a4;
                v65 = *(_QWORD *)(a4 + 8);
                v66 = v75;
                if ( !v65 )
                {
                  v67 = *(_DWORD *)(a4 + 4);
                  if ( v67 + 8 >= v67 )
                  {
                    ++*(_DWORD *)a4;
                    v17 = 0;
                    *(_DWORD *)(a4 + 4) = v67 + 8;
                    goto LABEL_116;
                  }
                  goto LABEL_93;
                }
                v68 = 0;
                for ( ii = *(_DWORD **)(a4 + 8); v68 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v70) )
                {
                  v70 = *ii + 4;
                  if ( v70 < 4 || (_DWORD *)((char *)ii + v70) < ii )
                    goto LABEL_94;
                  ++v68;
                }
                if ( ii + 1 >= ii )
                {
                  v17 = 0;
                  if ( (unsigned __int64)(ii + 2) <= v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *ii = 4;
                    ii[1] = v66;
                    ++*(_DWORD *)a4;
                    goto LABEL_116;
                  }
LABEL_101:
                  v17 = -1073741789;
                  goto LABEL_116;
                }
LABEL_94:
                v17 = -1073741675;
                goto LABEL_116;
              }
            }
          }
          else
          {
            v55 = *(_DWORD *)(a4 + 4);
            if ( v55 + 12 >= v55 )
            {
              *(_DWORD *)(a4 + 4) = v55 + 12;
              goto LABEL_86;
            }
            *(_DWORD *)(a4 + 4) = -1;
          }
        }
LABEL_68:
        v17 = -1073741675;
        goto LABEL_115;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741789;
}
