/*
 * XREFs of sub_140A0CB34 @ 0x140A0CB34
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     StringCbLengthW @ 0x140354748 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0CB34(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // ecx
  __int64 v9; // r9
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  signed int v14; // ebx
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // r9
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  unsigned int *v20; // rcx
  unsigned int *v21; // rax
  unsigned int k; // ecx
  __int64 v23; // rax
  unsigned int *v24; // rdx
  unsigned __int64 v25; // rcx
  const wchar_t *v26; // rsi
  __int64 v27; // r11
  unsigned int v28; // eax
  size_t v29; // rbp
  void *Pool2; // rax
  unsigned int *v31; // rcx
  unsigned int v32; // r9d
  unsigned int *v33; // rax
  unsigned int m; // r8d
  __int64 v35; // r10
  unsigned int *v36; // rdx
  unsigned int v37; // r13d
  unsigned int *v38; // r12
  unsigned int *v39; // rax
  unsigned int n; // edx
  __int64 v41; // r10
  unsigned int *v42; // r8
  unsigned int v43; // r15d
  unsigned int *v44; // r14
  unsigned int ii; // edx
  __int64 v46; // rax
  unsigned int *v47; // r8
  unsigned int v48; // r8d
  unsigned int *v49; // rax
  size_t v50; // rsi
  int v51; // ebp
  void *v52; // rax
  void *v53; // rdx
  void *v54; // r15
  int v55; // ebp
  unsigned int v56; // r14d
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // edx
  int v60; // r8d
  unsigned int v61; // eax
  unsigned int v62; // edx
  unsigned int v63; // eax
  __int64 v64; // rax
  int v65; // ebp
  __int64 v66; // r9
  unsigned int v67; // ecx
  __int64 v68; // r11
  _DWORD *jj; // rdx
  unsigned int v70; // eax
  __int64 v71; // r8
  unsigned int v72; // eax
  unsigned int v73; // ecx
  unsigned __int64 kk; // rdx
  unsigned int v75; // eax
  void *v76; // r11
  __int64 v77; // r8
  unsigned int v78; // eax
  unsigned int v79; // ecx
  _DWORD *mm; // rdx
  unsigned int v81; // eax
  __int64 v82; // r8
  int v83; // r11d
  unsigned int v84; // eax
  unsigned int v85; // ecx
  _DWORD *v86; // rdx
  unsigned int v87; // eax
  unsigned int v89; // [rsp+28h] [rbp-80h]
  unsigned int v90; // [rsp+50h] [rbp-58h]
  size_t pcbLength; // [rsp+58h] [rbp-50h] BYREF
  void *Src; // [rsp+60h] [rbp-48h]
  __int64 v93; // [rsp+68h] [rbp-40h]
  int v95; // [rsp+C0h] [rbp+18h] BYREF

  v95 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v95 = 0;
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
  v12 = v7 + 1;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( v11 )
    v13 = v12;
  if ( v11 != 8 )
    return (unsigned int)-1073741789;
  v93 = *(_QWORD *)v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( v15 + 1 < v15 )
      return (unsigned int)-1073741675;
    v15 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v19 = *v15;
  v20 = v15 + 1;
  if ( v15 + 1 < v15 )
    return (unsigned int)-1073741675;
  v21 = 0LL;
  if ( v19 )
    v21 = v20;
  if ( v19 != 4 )
    return (unsigned int)-1073741789;
  v90 = *v21;
  pcbLength = 0LL;
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
  if ( !(_DWORD)v25 )
    return (unsigned int)-1073741762;
  v26 = (const wchar_t *)(v4 + 1);
  if ( (v25 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v26[(v25 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v26, *v4, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v27 )
    return (unsigned int)-1073741762;
  v28 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v29 = v28;
  Pool2 = (void *)ExAllocatePool2(256LL, v28, 542329939LL);
  pcbLength = (size_t)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v26, v29);
  v31 = *(unsigned int **)(a1 + 8);
  if ( v31 )
  {
    v32 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 6u )
    {
      v33 = *(unsigned int **)(a1 + 8);
      for ( m = 0; m < 6; ++m )
      {
        v35 = *v33;
        v36 = v33 + 1;
        if ( v33 + 1 < v33 )
          goto LABEL_140;
        v33 = (unsigned int *)((char *)v36 + v35);
        if ( (unsigned int *)((char *)v36 + v35) < v36 )
        {
          v54 = (void *)pcbLength;
          goto LABEL_139;
        }
      }
      v37 = *v33;
      if ( v33 + 1 < v33 )
        goto LABEL_140;
      v38 = 0LL;
      if ( v37 )
        v38 = v33 + 1;
      if ( v32 > 7 )
      {
        v39 = *(unsigned int **)(a1 + 8);
        for ( n = 0; n < 7; ++n )
        {
          v41 = *v39;
          v42 = v39 + 1;
          if ( v39 + 1 < v39 )
            goto LABEL_140;
          v39 = (unsigned int *)((char *)v42 + v41);
          if ( (unsigned int *)((char *)v42 + v41) < v42 )
            goto LABEL_140;
        }
        v43 = *v39;
        if ( v39 + 1 >= v39 )
        {
          v44 = 0LL;
          if ( v43 )
            v44 = v39 + 1;
          if ( v32 > 8 )
          {
            for ( ii = 0; ii < 8; ++ii )
            {
              v46 = *v31;
              v47 = v31 + 1;
              if ( v31 + 1 < v31 )
                goto LABEL_140;
              v31 = (unsigned int *)((char *)v47 + v46);
              if ( (unsigned int *)((char *)v47 + v46) < v47 )
                goto LABEL_140;
            }
            v48 = *v31;
            if ( v31 + 1 < v31 )
              goto LABEL_140;
            v49 = 0LL;
            if ( v48 )
              v49 = v31 + 1;
            if ( v48 != 4 )
            {
              v14 = -1073741789;
              goto LABEL_141;
            }
            v50 = *v49;
            if ( (_DWORD)v50 )
            {
              v51 = 0;
              v52 = (void *)ExAllocatePool2(256LL, (unsigned int)v50, 542329939LL);
              Src = v52;
              if ( !v52 )
              {
                v14 = -1073741801;
                goto LABEL_141;
              }
              memset(v52, 0, v50);
            }
            else
            {
              v51 = 1;
            }
            if ( qword_140D3B3B0 )
            {
              v53 = 0LL;
              if ( !v51 )
                v53 = Src;
              v89 = v43;
              v54 = (void *)pcbLength;
              v55 = qword_140D3B3B0(v90, pcbLength, v38, v37, v44, v89, v53, v50, &v95);
            }
            else
            {
              v54 = (void *)pcbLength;
              v55 = -1073741637;
            }
            v56 = v50 + 4;
            if ( (unsigned int)v50 >= 0xFFFFFFFC )
              goto LABEL_139;
            if ( v56 >= 0xFFFFFFEC )
              goto LABEL_139;
            v57 = v50 + 32;
            if ( (int)v50 + 32 < (unsigned int)(v50 + 24) )
              goto LABEL_139;
            if ( v57 >= 0xFFFFFFF8 )
              goto LABEL_139;
            v58 = (v50 + 47) & 0xFFFFFFF8;
            if ( v58 < (int)v50 + 40 )
              goto LABEL_139;
            v59 = v58 + 8;
            if ( v58 + 8 < v58 )
              goto LABEL_139;
            v60 = *(_DWORD *)(a2 + 16);
            v61 = v58 + 12;
            if ( v59 + 4 < 4 || (v62 = v59 + 8, v61 + 4 < v61) || (v63 = v62 + v60, v62 + v60 < v62) || v63 + 4 < v63 )
              v14 = -1073741675;
            else
              v14 = v63 + 4 + *(_DWORD *)(a2 + 32) < v63 + 4 ? 0xC0000095 : 0;
            if ( v14 < 0 )
              goto LABEL_142;
            if ( !a4 )
            {
LABEL_90:
              v14 = -1073741811;
              goto LABEL_142;
            }
            *(_DWORD *)(a4 + 4) = v57;
            if ( (_DWORD)v50 == -32 )
            {
              v14 = -1073741762;
              goto LABEL_142;
            }
            v64 = ExAllocatePool2(256LL, v57, 542329939LL);
            if ( !v64 )
            {
              v14 = -1073741801;
              goto LABEL_142;
            }
            *(_QWORD *)(a4 + 8) = v64;
            *(_DWORD *)a4 = 0;
            v65 = v55 | 0x10000000;
            v66 = v64;
            v67 = 0;
            v68 = v93;
            for ( jj = (_DWORD *)v64; v67 < *(_DWORD *)a4; jj = (_DWORD *)((char *)jj + v70) )
            {
              v70 = *jj + 4;
              if ( v70 < 4 || (_DWORD *)((char *)jj + v70) < jj )
                goto LABEL_139;
              ++v67;
            }
            if ( jj + 1 < jj )
              goto LABEL_139;
            if ( (unsigned __int64)(jj + 2) > v66 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
LABEL_101:
              v14 = -1073741789;
              goto LABEL_142;
            }
            *jj = 4;
            jj[1] = v65;
            ++*(_DWORD *)a4;
            v71 = *(_QWORD *)(a4 + 8);
            if ( v71 )
            {
              v73 = 0;
              for ( kk = *(_QWORD *)(a4 + 8); v73 < *(_DWORD *)a4; kk += v75 )
              {
                v75 = *(_DWORD *)kk + 4;
                if ( v75 < 4 || kk + v75 < kk )
                  goto LABEL_139;
                ++v73;
              }
              if ( kk + 4 < kk )
                goto LABEL_139;
              if ( kk + 12 > v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_101;
              *(_DWORD *)kk = 8;
              *(_QWORD *)(kk + 4) = v68;
            }
            else
            {
              v72 = *(_DWORD *)(a4 + 4);
              if ( v72 + 12 < v72 )
                goto LABEL_119;
              *(_DWORD *)(a4 + 4) = v72 + 12;
            }
            ++*(_DWORD *)a4;
            v76 = Src;
            if ( Src )
            {
              if ( !(_DWORD)v50 )
                goto LABEL_90;
            }
            else if ( (_DWORD)v50 )
            {
              goto LABEL_90;
            }
            v77 = *(_QWORD *)(a4 + 8);
            if ( v77 )
            {
              v79 = 0;
              for ( mm = *(_DWORD **)(a4 + 8); v79 < *(_DWORD *)a4; mm = (_DWORD *)((char *)mm + v81) )
              {
                v81 = *mm + 4;
                if ( v81 < 4 || (_DWORD *)((char *)mm + v81) < mm )
                  goto LABEL_139;
                ++v79;
              }
              if ( mm + 1 < mm )
                goto LABEL_139;
              if ( (unsigned __int64)mm + v50 + 4 > v77 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_101;
              *mm = v50;
              if ( v76 )
                memmove(mm + 1, v76, v50);
            }
            else
            {
              v78 = *(_DWORD *)(a4 + 4);
              if ( v78 + v56 < v78 )
                goto LABEL_119;
              *(_DWORD *)(a4 + 4) = v78 + v56;
            }
            ++*(_DWORD *)a4;
            v82 = *(_QWORD *)(a4 + 8);
            v83 = v95;
            if ( !v82 )
            {
              v84 = *(_DWORD *)(a4 + 4);
              if ( v84 + 8 >= v84 )
              {
                ++*(_DWORD *)a4;
                v14 = 0;
                *(_DWORD *)(a4 + 4) = v84 + 8;
                goto LABEL_142;
              }
LABEL_119:
              *(_DWORD *)(a4 + 4) = -1;
              goto LABEL_139;
            }
            v85 = 0;
            v86 = *(_DWORD **)(a4 + 8);
            if ( !*(_DWORD *)a4 )
            {
LABEL_135:
              if ( v86 + 1 < v86 )
                goto LABEL_139;
              v14 = 0;
              if ( (unsigned __int64)(v86 + 2) <= v82 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v86 = 4;
                v86[1] = v83;
                ++*(_DWORD *)a4;
                goto LABEL_142;
              }
              goto LABEL_101;
            }
            while ( 1 )
            {
              v87 = *v86 + 4;
              if ( v87 < 4 || (_DWORD *)((char *)v86 + v87) < v86 )
                break;
              ++v85;
              v86 = (_DWORD *)((char *)v86 + v87);
              if ( v85 >= *(_DWORD *)a4 )
                goto LABEL_135;
            }
LABEL_139:
            v14 = -1073741675;
            goto LABEL_142;
          }
          goto LABEL_39;
        }
LABEL_140:
        v14 = -1073741675;
        goto LABEL_141;
      }
    }
  }
LABEL_39:
  v14 = -1073741811;
LABEL_141:
  v54 = (void *)pcbLength;
LABEL_142:
  ExFreePoolWithTag(v54, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v14;
}
