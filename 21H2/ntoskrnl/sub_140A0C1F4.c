/*
 * XREFs of sub_140A0C1F4 @ 0x140A0C1F4
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0C1F4(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  PVOID v5; // rbx
  unsigned int *v7; // rax
  int v8; // ebp
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // r9
  unsigned int v12; // r9d
  unsigned int *v13; // rdx
  unsigned int *v14; // rax
  signed int v15; // ebx
  unsigned int *v16; // rax
  unsigned int j; // edx
  __int64 v18; // r10
  unsigned int *v19; // r9
  unsigned int v20; // r9d
  unsigned int *v21; // rdx
  unsigned int *v22; // rax
  unsigned int v23; // r11d
  unsigned int v24; // r9d
  unsigned int *v25; // rax
  unsigned int k; // ecx
  __int64 v27; // r10
  unsigned int *v28; // rdx
  unsigned int v29; // r13d
  unsigned int *v30; // r15
  unsigned int *v31; // rax
  unsigned int m; // ecx
  __int64 v33; // r10
  unsigned int *v34; // rdx
  unsigned int v35; // r12d
  unsigned int *v36; // r14
  unsigned int n; // ecx
  __int64 v38; // rax
  unsigned int *v39; // rdx
  unsigned int v40; // edx
  unsigned int *v41; // rax
  size_t v42; // rsi
  void *Pool2; // rax
  PVOID v44; // r10
  int v45; // ebp
  unsigned int v46; // r14d
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // edx
  int v50; // r8d
  unsigned int v51; // eax
  unsigned int v52; // edx
  unsigned int v53; // eax
  __int64 v54; // rax
  int v55; // ebp
  __int64 v56; // r9
  unsigned int v57; // ecx
  _DWORD *ii; // rdx
  unsigned int v59; // eax
  __int64 v60; // r8
  unsigned int v61; // eax
  unsigned int v62; // ecx
  unsigned __int64 jj; // rdx
  unsigned int v64; // eax
  __int64 v65; // r8
  unsigned int v66; // eax
  unsigned int v67; // ecx
  _DWORD *kk; // rdx
  unsigned int v69; // eax
  __int64 v70; // r8
  int v71; // r11d
  unsigned int v72; // eax
  unsigned int v73; // ecx
  _DWORD *v74; // rdx
  unsigned int v75; // eax
  unsigned int v77; // [rsp+50h] [rbp-58h]
  PVOID P; // [rsp+58h] [rbp-50h]
  __int64 v79; // [rsp+60h] [rbp-48h]
  int v81; // [rsp+C0h] [rbp+18h] BYREF

  v81 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v81 = 0;
  P = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v4;
  v8 = 1;
  for ( i = 0; i < 3; ++i )
  {
    v10 = *v7;
    v11 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  v12 = *v7;
  v13 = v7 + 1;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( v12 )
    v14 = v13;
  if ( v12 != 8 )
    return (unsigned int)-1073741789;
  v79 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
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
  v21 = v16 + 1;
  if ( v16 + 1 < v16 )
    return (unsigned int)-1073741675;
  v22 = 0LL;
  if ( v20 )
    v22 = v21;
  if ( v20 == 4 )
  {
    v23 = *v22;
    v77 = *v22;
    v24 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 5u )
      return (unsigned int)-1073741811;
    v25 = v4;
    for ( k = 0; k < 5; ++k )
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
      if ( v24 <= 6 )
        return (unsigned int)-1073741811;
      v31 = v4;
      for ( m = 0; m < 6; ++m )
      {
        v33 = *v31;
        v34 = v31 + 1;
        if ( v31 + 1 < v31 )
          return (unsigned int)-1073741675;
        v31 = (unsigned int *)((char *)v34 + v33);
        if ( (unsigned int *)((char *)v34 + v33) < v34 )
          return (unsigned int)-1073741675;
      }
      v35 = *v31;
      if ( v31 + 1 >= v31 )
      {
        v36 = 0LL;
        if ( v35 )
          v36 = v31 + 1;
        if ( v24 <= 7 )
          return (unsigned int)-1073741811;
        for ( n = 0; n < 7; ++n )
        {
          v38 = *v4;
          v39 = v4 + 1;
          if ( v4 + 1 < v4 )
            return (unsigned int)-1073741675;
          v4 = (unsigned int *)((char *)v39 + v38);
          if ( (unsigned int *)((char *)v39 + v38) < v39 )
            return (unsigned int)-1073741675;
        }
        v40 = *v4;
        if ( v4 + 1 < v4 )
          return (unsigned int)-1073741675;
        v41 = 0LL;
        if ( v40 )
          v41 = v4 + 1;
        if ( v40 != 4 )
          return (unsigned int)-1073741789;
        v42 = *v41;
        if ( (_DWORD)v42 )
        {
          v8 = 0;
          Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v42, 542329939LL);
          P = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          memset(Pool2, 0, v42);
          v23 = v77;
          v5 = P;
        }
        if ( qword_140D3B400 )
        {
          v44 = 0LL;
          if ( !v8 )
            v44 = v5;
          v45 = qword_140D3B400(v23, v30, v29, v36, v35, v44, v42, &v81);
        }
        else
        {
          v45 = -1073741637;
        }
        v46 = v42 + 4;
        if ( (unsigned int)v42 >= 0xFFFFFFFC )
          goto LABEL_77;
        if ( v46 >= 0xFFFFFFEC )
          goto LABEL_77;
        v47 = v42 + 32;
        if ( (int)v42 + 32 < (unsigned int)(v42 + 24) )
          goto LABEL_77;
        if ( v47 >= 0xFFFFFFF8 )
          goto LABEL_77;
        v48 = (v42 + 47) & 0xFFFFFFF8;
        if ( v48 < (int)v42 + 40 )
          goto LABEL_77;
        v49 = v48 + 8;
        if ( v48 + 8 < v48 )
          goto LABEL_77;
        v50 = *(_DWORD *)(a2 + 16);
        v51 = v48 + 12;
        if ( v49 + 4 < 4 || (v52 = v49 + 8, v51 + 4 < v51) || (v53 = v52 + v50, v52 + v50 < v52) || v53 + 4 < v53 )
          v15 = -1073741675;
        else
          v15 = v53 + 4 + *(_DWORD *)(a2 + 32) < v53 + 4 ? 0xC0000095 : 0;
        if ( v15 < 0 )
          goto LABEL_78;
        if ( !a4 )
          goto LABEL_70;
        *(_DWORD *)(a4 + 4) = v47;
        if ( (_DWORD)v42 == -32 )
        {
          v15 = -1073741762;
          goto LABEL_78;
        }
        v54 = ExAllocatePool2(256LL, v47, 542329939LL);
        if ( !v54 )
        {
          v15 = -1073741801;
          goto LABEL_78;
        }
        *(_QWORD *)(a4 + 8) = v54;
        *(_DWORD *)a4 = 0;
        v55 = v45 | 0x10000000;
        v56 = v54;
        v57 = 0;
        for ( ii = (_DWORD *)v54; v57 < *(_DWORD *)a4; ii = (_DWORD *)((char *)ii + v59) )
        {
          v59 = *ii + 4;
          if ( v59 < 4 || (_DWORD *)((char *)ii + v59) < ii )
            goto LABEL_77;
          ++v57;
        }
        if ( ii + 1 < ii )
          goto LABEL_77;
        if ( (unsigned __int64)(ii + 2) > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
LABEL_86:
          v15 = -1073741789;
          goto LABEL_78;
        }
        *ii = 4;
        ii[1] = v55;
        ++*(_DWORD *)a4;
        v60 = *(_QWORD *)(a4 + 8);
        if ( v60 )
        {
          v62 = 0;
          for ( jj = *(_QWORD *)(a4 + 8); v62 < *(_DWORD *)a4; jj += v64 )
          {
            v64 = *(_DWORD *)jj + 4;
            if ( v64 < 4 || jj + v64 < jj )
              goto LABEL_77;
            ++v62;
          }
          if ( jj + 4 < jj )
            goto LABEL_77;
          if ( jj + 12 > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_86;
          *(_DWORD *)jj = 8;
          *(_QWORD *)(jj + 4) = v79;
        }
        else
        {
          v61 = *(_DWORD *)(a4 + 4);
          if ( v61 + 12 < v61 )
            goto LABEL_76;
          *(_DWORD *)(a4 + 4) = v61 + 12;
        }
        ++*(_DWORD *)a4;
        if ( P )
        {
          if ( !(_DWORD)v42 )
          {
LABEL_70:
            v15 = -1073741811;
            goto LABEL_78;
          }
        }
        else if ( (_DWORD)v42 )
        {
          goto LABEL_70;
        }
        v65 = *(_QWORD *)(a4 + 8);
        if ( v65 )
        {
          v67 = 0;
          for ( kk = *(_DWORD **)(a4 + 8); v67 < *(_DWORD *)a4; kk = (_DWORD *)((char *)kk + v69) )
          {
            v69 = *kk + 4;
            if ( v69 < 4 || (_DWORD *)((char *)kk + v69) < kk )
              goto LABEL_77;
            ++v67;
          }
          if ( kk + 1 < kk )
            goto LABEL_77;
          if ( (unsigned __int64)kk + v42 + 4 > v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_86;
          *kk = v42;
          if ( P )
            memmove(kk + 1, P, v42);
LABEL_112:
          ++*(_DWORD *)a4;
          v70 = *(_QWORD *)(a4 + 8);
          v71 = v81;
          if ( !v70 )
          {
            v72 = *(_DWORD *)(a4 + 4);
            if ( v72 + 8 >= v72 )
            {
              ++*(_DWORD *)a4;
              v15 = 0;
              *(_DWORD *)(a4 + 4) = v72 + 8;
              goto LABEL_78;
            }
            goto LABEL_76;
          }
          v73 = 0;
          v74 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v75 = *v74 + 4;
              if ( v75 < 4 || (_DWORD *)((char *)v74 + v75) < v74 )
                break;
              ++v73;
              v74 = (_DWORD *)((char *)v74 + v75);
              if ( v73 >= *(_DWORD *)a4 )
                goto LABEL_119;
            }
          }
          else
          {
LABEL_119:
            if ( v74 + 1 >= v74 )
            {
              v15 = 0;
              if ( (unsigned __int64)(v74 + 2) > v70 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_86;
              *v74 = 4;
              v74[1] = v71;
              ++*(_DWORD *)a4;
LABEL_78:
              if ( P )
                ExFreePoolWithTag(P, 0);
              return (unsigned int)v15;
            }
          }
LABEL_77:
          v15 = -1073741675;
          goto LABEL_78;
        }
        v66 = *(_DWORD *)(a4 + 4);
        if ( v66 + v46 >= v66 )
        {
          *(_DWORD *)(a4 + 4) = v66 + v46;
          goto LABEL_112;
        }
LABEL_76:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_77;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741789;
}
