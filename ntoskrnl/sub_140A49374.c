/*
 * XREFs of sub_140A49374 @ 0x140A49374
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     StringCbLengthW @ 0x14035ACC4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A49374(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v7; // r13
  unsigned int *v8; // rax
  int v9; // ecx
  __int64 v10; // r9
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  __int64 *v13; // r14
  __int64 v14; // r14
  signed int v15; // ebx
  unsigned int *v16; // rax
  int v17; // edx
  __int64 v18; // r9
  unsigned int *v19; // rcx
  unsigned int v20; // edx
  unsigned int *v21; // rcx
  unsigned int *v22; // rax
  unsigned int v23; // esi
  bool v24; // cc
  int v25; // edx
  __int64 v26; // rax
  unsigned int *v27; // rcx
  unsigned int v28; // ecx
  const wchar_t *v29; // rbp
  __int64 v30; // r11
  unsigned int v31; // eax
  size_t v32; // r12
  void *Pool2; // rax
  void *v34; // rdi
  unsigned int *v35; // rcx
  unsigned int *v36; // rax
  unsigned int v37; // r9d
  void *v38; // rdx
  __int64 v39; // r10
  unsigned int *v40; // r8
  unsigned int v41; // r13d
  unsigned int *v42; // r12
  unsigned int *v43; // rax
  unsigned int i; // r9d
  __int64 v45; // r10
  unsigned int *v46; // r8
  int v47; // r9d
  unsigned int *v48; // r8
  unsigned int v49; // r10d
  void *v50; // rax
  __int64 v51; // r11
  unsigned int *v52; // rdx
  unsigned int v53; // edx
  unsigned int *v54; // rax
  unsigned int *v55; // rcx
  size_t v56; // rbp
  void *v57; // rax
  int v58; // ecx
  void *v59; // rdx
  int v60; // r12d
  unsigned int v61; // r13d
  unsigned int v62; // ecx
  unsigned int v63; // edx
  unsigned int v64; // eax
  int v65; // r8d
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned int *v68; // rsi
  __int64 v69; // rax
  unsigned __int64 *v70; // rbx
  int v71; // r12d
  __int64 v72; // r8
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  _DWORD *j; // rdx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // ecx
  unsigned __int64 k; // rdx
  unsigned int v80; // eax
  void *v81; // r11
  unsigned int v82; // ecx
  unsigned int v83; // ecx
  _DWORD *v84; // rdx
  int v85; // r8d
  unsigned __int64 v86; // r9
  unsigned int v87; // ecx
  unsigned int v88; // ecx
  _DWORD *v89; // rdx
  size_t pcbLength; // [rsp+50h] [rbp-58h] BYREF
  void *Src; // [rsp+58h] [rbp-50h]
  unsigned int *v93; // [rsp+60h] [rbp-48h]
  int v95; // [rsp+C0h] [rbp+18h] BYREF

  v95 = a3;
  v4 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v95 = 0;
  v7 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v8 = v4;
    v9 = 0;
    while ( 1 )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        break;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        break;
      if ( (unsigned int)++v9 >= 3 )
      {
        v12 = *v8;
        if ( v8 + 1 >= v8 )
        {
          v13 = 0LL;
          if ( v12 )
            v13 = (__int64 *)(v8 + 1);
          if ( v12 != 8 )
            return (unsigned int)-1073741789;
          v14 = *v13;
          if ( *(_DWORD *)a1 <= 4u )
            return (unsigned int)-1073741811;
          v16 = v4;
          v17 = 0;
          while ( 1 )
          {
            v18 = *v16;
            v19 = v16 + 1;
            if ( v16 + 1 < v16 )
              break;
            v16 = (unsigned int *)((char *)v19 + v18);
            if ( (unsigned int *)((char *)v19 + v18) < v19 )
              break;
            if ( (unsigned int)++v17 >= 4 )
            {
              v20 = *v16;
              v21 = v16 + 1;
              if ( v16 + 1 < v16 )
                return (unsigned int)-1073741675;
              v22 = 0LL;
              if ( v20 )
                v22 = v21;
              if ( v20 != 4 )
                return (unsigned int)-1073741789;
              v23 = *v22;
              v24 = *(_DWORD *)a1 <= 5u;
              pcbLength = 0LL;
              if ( v24 )
                return (unsigned int)-1073741811;
              v25 = 0;
              while ( 1 )
              {
                v26 = *v4;
                v27 = v4 + 1;
                if ( v4 + 1 < v4 )
                  return (unsigned int)-1073741675;
                v4 = (unsigned int *)((char *)v27 + v26);
                if ( (unsigned int *)((char *)v27 + v26) < v27 )
                  return (unsigned int)-1073741675;
                if ( (unsigned int)++v25 >= 5 )
                {
                  v28 = *v4;
                  if ( v4 + 1 < v4 )
                    return (unsigned int)-1073741675;
                  if ( !v28 )
                    return (unsigned int)-1073741762;
                  v29 = (const wchar_t *)(v4 + 1);
                  if ( (v28 & 1) != 0 )
                    return (unsigned int)-1073741762;
                  if ( v29[((unsigned __int64)v28 >> 1) - 1] )
                    return (unsigned int)-1073741762;
                  if ( StringCbLengthW(v29, v28, &pcbLength) < 0 )
                    return (unsigned int)-1073741762;
                  if ( pcbLength + 2 != v30 )
                    return (unsigned int)-1073741762;
                  v31 = 2 * (pcbLength >> 1) + 2;
                  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
                  {
                    return (unsigned int)-1073741762;
                  }
                  else
                  {
                    v32 = v31;
                    Pool2 = (void *)ExAllocatePool2(256LL, v31, 542329939LL);
                    v34 = Pool2;
                    if ( Pool2 )
                    {
                      memmove(Pool2, v29, v32);
                      v35 = *(unsigned int **)(a1 + 8);
                      if ( !v35 || *(_DWORD *)a1 <= 6u )
                      {
                        v15 = -1073741811;
                        goto LABEL_50;
                      }
                      v36 = *(unsigned int **)(a1 + 8);
                      v37 = 0;
                      v38 = v34;
                      do
                      {
                        v39 = *v36;
                        v40 = v36 + 1;
                        v34 = v38;
                        if ( v36 + 1 < v36
                          || (v36 = (unsigned int *)((char *)v40 + v39), (unsigned int *)((char *)v40 + v39) < v40) )
                        {
                          v15 = -1073741675;
                          goto LABEL_50;
                        }
                        ++v37;
                      }
                      while ( v37 < 6 );
                      v41 = *v36;
                      if ( v36 + 1 < v36 )
                        goto LABEL_86;
                      v42 = 0LL;
                      if ( v41 )
                        v42 = v36 + 1;
                      if ( *(_DWORD *)a1 <= 7u )
                      {
LABEL_48:
                        v15 = -1073741811;
                        goto LABEL_49;
                      }
                      v43 = *(unsigned int **)(a1 + 8);
                      for ( i = 0; i < 7; ++i )
                      {
                        v45 = *v43;
                        v46 = v43 + 1;
                        v34 = v38;
                        if ( v43 + 1 < v43 )
                          goto LABEL_86;
                        v43 = (unsigned int *)((char *)v46 + v45);
                        if ( (unsigned int *)((char *)v46 + v45) < v46 )
                          goto LABEL_86;
                      }
                      v47 = *v43;
                      if ( v43 + 1 < v43 )
                        goto LABEL_86;
                      v48 = 0LL;
                      if ( v47 )
                        v48 = v43 + 1;
                      if ( *(_DWORD *)a1 <= 8u )
                        goto LABEL_48;
                      v49 = 0;
                      v50 = v38;
                      do
                      {
                        v51 = *v35;
                        v52 = v35 + 1;
                        LODWORD(pcbLength) = v47;
                        v34 = v50;
                        v93 = v48;
                        if ( v35 + 1 < v35 )
                          goto LABEL_86;
                        v35 = (unsigned int *)((char *)v52 + v51);
                        if ( (unsigned int *)((char *)v52 + v51) < v52 )
                          goto LABEL_86;
                        ++v49;
                      }
                      while ( v49 < 8 );
                      v53 = *v35;
                      v54 = v35 + 1;
                      if ( v35 + 1 < v35 )
                        goto LABEL_86;
                      v55 = 0LL;
                      if ( v53 )
                        v55 = v54;
                      if ( v53 != 4 )
                      {
LABEL_70:
                        v15 = -1073741789;
                        goto LABEL_49;
                      }
                      v56 = *v55;
                      if ( (_DWORD)v56 )
                      {
                        v57 = (void *)ExAllocatePool2(256LL, (unsigned int)v56, 542329939LL);
                        Src = v57;
                        if ( !v57 )
                        {
                          v15 = -1073741801;
                          v7 = 0LL;
                          goto LABEL_50;
                        }
                        memset(v57, 0, v56);
                        v48 = v93;
                        v58 = 0;
                        v47 = pcbLength;
                      }
                      else
                      {
                        v58 = 1;
                      }
                      if ( qword_140D533F0 )
                      {
                        v59 = 0LL;
                        if ( !v58 )
                          v59 = Src;
                        v60 = qword_140D533F0(v23, v34, v42, v41, v48, v47, v59, v56, &v95);
                      }
                      else
                      {
                        v60 = -1073741637;
                      }
                      v61 = v56 + 4;
                      if ( (unsigned int)v56 >= 0xFFFFFFFC )
                        goto LABEL_86;
                      if ( v61 >= 0xFFFFFFEC )
                        goto LABEL_86;
                      v62 = v56 + 32;
                      if ( (int)v56 + 32 < (unsigned int)(v56 + 24) )
                        goto LABEL_86;
                      if ( v62 >= 0xFFFFFFF8 )
                        goto LABEL_86;
                      v63 = (v56 + 47) & 0xFFFFFFF8;
                      if ( v63 < (int)v56 + 40 || v63 + 8 < v63 )
                        goto LABEL_86;
                      v64 = v63 + 12;
                      v65 = *(_DWORD *)(a2 + 16);
                      if ( v63 + 12 < 4
                        || (v66 = v63 + 16, v64 + 4 < v64)
                        || (v67 = v65 + v66, v65 + v66 < v66)
                        || v67 + 4 < v67 )
                      {
                        v15 = -1073741675;
                      }
                      else
                      {
                        v15 = *(_DWORD *)(a2 + 32) + v67 + 4 < v67 + 4 ? 0xC0000095 : 0;
                      }
                      if ( v15 < 0 )
                        goto LABEL_49;
                      if ( !a4 )
                        goto LABEL_48;
                      v15 = 0;
                      v68 = (unsigned int *)(a4 + 4);
                      *(_DWORD *)(a4 + 4) = v62;
                      if ( (_DWORD)v56 == -32 )
                      {
                        v15 = -1073741762;
                      }
                      else
                      {
                        v69 = ExAllocatePool2(256LL, v62, 542329939LL);
                        if ( v69 )
                        {
                          *(_QWORD *)(a4 + 8) = v69;
                          *(_DWORD *)a4 = 0;
                        }
                        else
                        {
                          v15 = -1073741801;
                        }
                      }
                      if ( v15 < 0 )
                      {
LABEL_49:
                        v7 = Src;
                        goto LABEL_50;
                      }
                      v70 = (unsigned __int64 *)(a4 + 8);
                      v71 = v60 | 0x10000000;
                      v72 = *(_QWORD *)(a4 + 8);
                      if ( !v72 )
                      {
                        v73 = *v68 + 8;
                        if ( v73 >= *v68 )
                        {
                          *v68 = v73;
                          goto LABEL_113;
                        }
LABEL_105:
                        *v68 = -1;
LABEL_86:
                        v15 = -1073741675;
                        goto LABEL_49;
                      }
                      v74 = 0;
                      for ( j = *(_DWORD **)(a4 + 8); v74 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v76) )
                      {
                        v76 = *j + 4;
                        if ( *j >= 0xFFFFFFFC || (_DWORD *)((char *)j + v76) < j )
                          goto LABEL_86;
                        ++v74;
                      }
                      if ( j + 1 < j )
                        goto LABEL_86;
                      if ( (unsigned __int64)(j + 2) > v72 + (unsigned __int64)*v68 )
                        goto LABEL_70;
                      *j = 4;
                      j[1] = v71;
LABEL_113:
                      ++*(_DWORD *)a4;
                      if ( *v70 )
                      {
                        v78 = 0;
                        for ( k = *v70; v78 < *(_DWORD *)a4; k += v80 )
                        {
                          v80 = *(_DWORD *)k + 4;
                          if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v80 < k )
                            goto LABEL_86;
                          ++v78;
                        }
                        if ( k + 4 < k )
                          goto LABEL_86;
                        if ( k + 12 > *v70 + *v68 )
                          goto LABEL_70;
                        *(_DWORD *)k = 8;
                        *(_QWORD *)(k + 4) = v14;
                      }
                      else
                      {
                        v77 = *v68 + 12;
                        if ( v77 < *v68 )
                          goto LABEL_105;
                        *v68 = v77;
                      }
                      ++*(_DWORD *)a4;
                      v81 = Src;
                      if ( Src )
                      {
                        if ( (_DWORD)v56 )
                          goto LABEL_127;
LABEL_125:
                        v15 = -1073741811;
                      }
                      else
                      {
                        if ( (_DWORD)v56 )
                          goto LABEL_125;
LABEL_127:
                        if ( *v70 )
                        {
                          v83 = 0;
                          v84 = (_DWORD *)*v70;
                          if ( !*(_DWORD *)a4 )
                          {
LABEL_137:
                            if ( v84 + 1 < v84 )
                              goto LABEL_86;
                            if ( (unsigned __int64)v84 + v56 + 4 > *v70 + *v68 )
                              goto LABEL_70;
                            *v84 = v56;
                            if ( v81 )
                              memmove(v84 + 1, v81, v56);
LABEL_141:
                            v85 = v95;
                            ++*(_DWORD *)a4;
                            v86 = *v70;
                            if ( *v70 )
                            {
                              v88 = 0;
                              v89 = (_DWORD *)*v70;
                              if ( *(_DWORD *)a4 )
                              {
                                while ( *v89 < 0xFFFFFFFC && (_DWORD *)((char *)v89 + (unsigned int)(*v89 + 4)) >= v89 )
                                {
                                  ++v88;
                                  v89 = (_DWORD *)((char *)v89 + (unsigned int)(*v89 + 4));
                                  if ( v88 >= *(_DWORD *)a4 )
                                    goto LABEL_148;
                                }
                                goto LABEL_86;
                              }
LABEL_148:
                              if ( v89 + 1 < v89 )
                                goto LABEL_86;
                              v15 = 0;
                              if ( (unsigned __int64)(v89 + 2) > v86 + *v68 )
                                goto LABEL_70;
                              *v89 = 4;
                              v89[1] = v85;
                              ++*(_DWORD *)a4;
                            }
                            else
                            {
                              v87 = *v68 + 8;
                              if ( v87 < *v68 )
                                goto LABEL_105;
                              *v68 = v87;
                              ++*(_DWORD *)a4;
                              v15 = 0;
                            }
                            goto LABEL_49;
                          }
                          while ( *v84 < 0xFFFFFFFC && (_DWORD *)((char *)v84 + (unsigned int)(*v84 + 4)) >= v84 )
                          {
                            ++v83;
                            v84 = (_DWORD *)((char *)v84 + (unsigned int)(*v84 + 4));
                            if ( v83 >= *(_DWORD *)a4 )
                              goto LABEL_137;
                          }
                        }
                        else
                        {
                          v82 = *v68 + v61;
                          if ( v82 >= *v68 )
                          {
                            *v68 = v82;
                            goto LABEL_141;
                          }
                          *v68 = -1;
                        }
                        v15 = -1073741675;
                      }
                      v7 = v81;
LABEL_50:
                      if ( v34 )
                        ExFreePoolWithTag(v34, 0);
                      if ( v7 )
                        ExFreePoolWithTag(v7, 0);
                    }
                    else
                    {
                      return (unsigned int)-1073741801;
                    }
                  }
                  return (unsigned int)v15;
                }
              }
            }
          }
        }
        break;
      }
    }
    return (unsigned int)-1073741675;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
