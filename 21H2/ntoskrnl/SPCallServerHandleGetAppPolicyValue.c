/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x1406163A8
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdx
  void *v7; // r12
  unsigned int *v8; // rax
  unsigned int i; // ecx
  __int64 v10; // r9
  unsigned int *v11; // r8
  signed int v12; // ebx
  unsigned int *v13; // rax
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  unsigned int *v17; // rax
  unsigned int n; // r8d
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int v21; // r15d
  unsigned int *v22; // r14
  unsigned int ii; // r8d
  unsigned int v24; // r14d
  PVOID PoolWithTag; // rax
  void *v26; // rbx
  unsigned int *v27; // rcx
  unsigned int v28; // r10d
  unsigned int *v29; // rax
  unsigned int k; // edx
  __int64 v31; // r9
  unsigned int *v32; // r8
  unsigned int v33; // r13d
  unsigned int *v34; // r12
  unsigned int *v35; // rax
  unsigned int m; // r8d
  unsigned int jj; // ecx
  unsigned int *v38; // rdx
  __int64 v39; // r8
  int v40; // r11d
  _DWORD *v41; // rdx
  unsigned int v42; // ecx
  unsigned int v43; // eax
  __int64 v44; // r8
  int v45; // r11d
  _DWORD *v46; // rdx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  __int64 v49; // r8
  int v50; // r11d
  _DWORD *v51; // rdx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  int v55; // r12d
  __int64 v56; // r8
  unsigned int v57; // eax
  unsigned int v58; // r8d
  unsigned int *v59; // rax
  SIZE_T v60; // rdx
  unsigned int v61; // ebx
  int v62; // esi
  PVOID v63; // rax
  void *v64; // rcx
  int v65; // r14d
  unsigned int v66; // r15d
  unsigned int v67; // r8d
  unsigned int v68; // ecx
  unsigned int v69; // eax
  int v70; // edx
  unsigned int v71; // eax
  unsigned int v72; // ecx
  __int64 v73; // r8
  int v74; // r14d
  int v75; // esi
  _DWORD *v76; // rdx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  __int64 v79; // r8
  unsigned __int64 v80; // rdx
  unsigned int v81; // ecx
  unsigned int v82; // eax
  PVOID v83; // rax
  unsigned int v84; // eax
  const wchar_t *v85; // rsi
  unsigned int j; // r9d
  unsigned int v87; // r8d
  unsigned int *v88; // rcx
  size_t v89; // r8
  __int64 v90; // rax
  unsigned int *v91; // rcx
  unsigned __int64 v92; // rcx
  __int64 v93; // r11
  __int64 v94; // r9
  unsigned int *v95; // rdx
  __int64 v96; // rax
  unsigned int *v97; // rdx
  unsigned int v98; // edx
  int v99; // eax
  unsigned int v100; // ecx
  unsigned int v101; // edx
  int v102; // eax
  unsigned int v103; // ecx
  __int64 v104; // rax
  unsigned int v105; // edx
  int v106; // eax
  unsigned int v107; // ecx
  unsigned int v108; // edx
  int v109; // eax
  unsigned int v110; // ecx
  unsigned int v111; // edx
  int v112; // eax
  unsigned int v113; // ecx
  unsigned int v114; // ecx
  unsigned int v115; // eax
  void *Src; // [rsp+68h] [rbp-19h]
  SIZE_T NumberOfBytes; // [rsp+70h] [rbp-11h]
  int v118; // [rsp+78h] [rbp-9h] BYREF
  int v119; // [rsp+7Ch] [rbp-5h] BYREF
  int v120; // [rsp+80h] [rbp-1h] BYREF
  PVOID P; // [rsp+88h] [rbp+7h]
  size_t pcbLength; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v123; // [rsp+98h] [rbp+17h]
  unsigned int Size; // [rsp+F8h] [rbp+77h]

  v4 = *(unsigned int **)(a1 + 8);
  NumberOfBytes = 0LL;
  v123 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Src = 0LL;
  Size = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v8 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_6;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_6;
    }
    v87 = *v8;
    v88 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_6:
      v12 = -1073741675;
    }
    else
    {
      v13 = 0LL;
      if ( v87 )
        v13 = v88;
      v12 = 0;
      if ( v87 != 8 )
        return (unsigned int)-1073741789;
      v123 = *(_QWORD *)v13;
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 >= 0 )
  {
    pcbLength = 0LL;
    v85 = 0LL;
    LODWORD(v89) = 0;
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v90 = *v4;
        v91 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_160;
        v4 = (unsigned int *)((char *)v91 + v90);
        if ( (unsigned int *)((char *)v91 + v90) < v91 )
          goto LABEL_160;
      }
      v92 = *v4;
      if ( v4 + 1 < v4 )
      {
LABEL_160:
        v12 = -1073741675;
      }
      else
      {
        if ( (_DWORD)v92 )
          v85 = (const wchar_t *)(v4 + 1);
        v12 = 0;
        if ( !(_DWORD)v92 || (v92 & 1) != 0 )
          return (unsigned int)-1073741762;
        if ( v85[(v92 >> 1) - 1] )
          return (unsigned int)-1073741762;
        if ( StringCbLengthW(v85, *v4, &pcbLength) < 0 || pcbLength + 2 != v93 )
          return (unsigned int)-1073741762;
        v89 = pcbLength >> 1;
      }
    }
    else
    {
      v12 = -1073741811;
    }
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( 2 * (_DWORD)v89 != -2 )
    {
      v24 = 2 * v89 + 2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
      v26 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, v85, v24);
      P = v26;
      v27 = *(unsigned int **)(a1 + 8);
      if ( !v27 || (v28 = *(_DWORD *)a1, *(_DWORD *)a1 <= 5u) )
      {
        v12 = -1073741811;
        goto LABEL_68;
      }
      v29 = *(unsigned int **)(a1 + 8);
      for ( k = 0; k < 5; ++k )
      {
        v31 = *v29;
        v32 = v29 + 1;
        if ( v29 + 1 >= v29 )
        {
          v29 = (unsigned int *)((char *)v32 + v31);
          if ( (unsigned int *)((char *)v32 + v31) >= v32 )
            continue;
        }
        v12 = -1073741675;
        goto LABEL_68;
      }
      v33 = *v29;
      if ( v29 + 1 < v29 )
      {
        v12 = -1073741675;
        goto LABEL_68;
      }
      v34 = 0LL;
      if ( v33 )
        v34 = v29 + 1;
      if ( v28 <= 6 )
      {
        v12 = -1073741811;
      }
      else
      {
        v35 = *(unsigned int **)(a1 + 8);
        for ( m = 0; m < 6; ++m )
        {
          v94 = *v35;
          v95 = v35 + 1;
          if ( v35 + 1 < v35 )
            goto LABEL_179;
          v35 = (unsigned int *)((char *)v95 + v94);
          if ( (unsigned int *)((char *)v95 + v94) < v95 )
            goto LABEL_179;
        }
        v14 = *v35;
        v15 = v35 + 1;
        if ( v35 + 1 >= v35 )
        {
          v16 = 0LL;
          if ( v14 )
            v16 = v15;
          v12 = 0;
          if ( v14 == 4 )
          {
            HIDWORD(NumberOfBytes) = *v16;
            goto LABEL_20;
          }
LABEL_178:
          v12 = -1073741789;
          goto LABEL_67;
        }
LABEL_179:
        v12 = -1073741675;
      }
LABEL_20:
      if ( v12 < 0 )
        goto LABEL_67;
      if ( v28 <= 7 )
        goto LABEL_180;
      v17 = *(unsigned int **)(a1 + 8);
      for ( n = 0; n < 7; ++n )
      {
        v19 = *v17;
        v20 = v17 + 1;
        if ( v17 + 1 < v17 )
          goto LABEL_240;
        v17 = (unsigned int *)((char *)v20 + v19);
        if ( (unsigned int *)((char *)v20 + v19) < v20 )
          goto LABEL_240;
      }
      v21 = *v17;
      if ( v17 + 1 < v17 )
      {
LABEL_240:
        v12 = -1073741675;
        goto LABEL_67;
      }
      v22 = 0LL;
      if ( v21 )
        v22 = v17 + 1;
      if ( v28 > 8 )
      {
        for ( ii = 0; ii < 8; ++ii )
        {
          v96 = *v27;
          v97 = v27 + 1;
          if ( v27 + 1 < v27 )
            goto LABEL_186;
          v27 = (unsigned int *)((char *)v97 + v96);
          if ( (unsigned int *)((char *)v97 + v96) < v97 )
            goto LABEL_186;
        }
        v58 = *v27;
        if ( v27 + 1 < v27 )
        {
LABEL_186:
          v12 = -1073741675;
          goto LABEL_187;
        }
        v59 = 0LL;
        if ( v58 )
          v59 = v27 + 1;
        v12 = 0;
        if ( v58 == 4 )
        {
          v60 = *v59;
          Size = *v59;
          goto LABEL_95;
        }
        goto LABEL_178;
      }
      v12 = -1073741811;
LABEL_187:
      v60 = 0LL;
LABEL_95:
      if ( v12 < 0 )
      {
LABEL_67:
        v7 = Src;
        goto LABEL_68;
      }
      if ( (_DWORD)v60 )
      {
        v61 = v60;
        v62 = 0;
        v63 = ExAllocatePoolWithTag(PagedPool, v60, 0x20534C53u);
        Src = v63;
        if ( v63 )
        {
          memset(v63, 0, v61);
          LODWORD(v60) = Size;
          goto LABEL_99;
        }
        v12 = -1073741801;
        v7 = 0LL;
LABEL_68:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x20534C53u);
        return (unsigned int)v12;
      }
      v62 = 1;
LABEL_99:
      if ( qword_140D2D3E8 )
      {
        v64 = 0LL;
        if ( !v62 )
          v64 = Src;
        v65 = qword_140D2D3E8(P, v34, v33, HIDWORD(NumberOfBytes), v22, v21, v64, v60, &v118, &v119, &v120);
      }
      else
      {
        v65 = -1073741637;
      }
      v66 = Size + 4;
      if ( Size >= 0xFFFFFFFC )
      {
        v67 = 0;
        v55 = -1073741675;
        v12 = -1073741675;
      }
      else
      {
        if ( v66 >= 0xFFFFFFEC
          || Size + 32 < Size + 24
          || Size + 40 < Size + 32
          || (v67 = Size + 48, LODWORD(NumberOfBytes) = Size + 48, Size + 48 < Size + 40) )
        {
          v12 = -1073741675;
          goto LABEL_67;
        }
        v12 = 0;
        v55 = -1073741675;
      }
      if ( v12 < 0 )
        goto LABEL_67;
      v68 = 0;
      if ( v67 >= 0xFFFFFFF8 )
        goto LABEL_142;
      v69 = (v67 + 15) & 0xFFFFFFF8;
      if ( v69 >= v67 + 8 )
      {
        v68 = v69 + 8;
        if ( v69 + 8 < v69 )
        {
          v12 = -1073741675;
          goto LABEL_117;
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741675;
      }
      if ( v12 < 0 )
        goto LABEL_67;
      v70 = *(_DWORD *)(a2 + 16);
      v71 = v68 + 4;
      v72 = v68 + 8;
      if ( v72 < v71 || (v84 = v72 + v70, v72 + v70 < v72) || v84 + 4 < v84 )
        v12 = -1073741675;
      else
        v12 = v84 + 4 + *(_DWORD *)(a2 + 32) < v84 + 4 ? 0xC0000095 : 0;
      v67 = NumberOfBytes;
LABEL_117:
      if ( v12 < 0 )
        goto LABEL_67;
      if ( a4 )
      {
        *(_DWORD *)(a4 + 4) = v67;
        v12 = 0;
        if ( v67 )
        {
          v83 = ExAllocatePoolWithTag(PagedPool, v67, 0x20534C53u);
          if ( v83 )
          {
            *(_QWORD *)(a4 + 8) = v83;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v12 = -1073741801;
          }
        }
        else
        {
          v12 = -1073741762;
        }
        if ( v12 < 0 )
          goto LABEL_67;
        v73 = *(_QWORD *)(a4 + 8);
        v74 = v65 | 0x10000000;
        v75 = -1;
        if ( v73 )
        {
          v76 = *(_DWORD **)(a4 + 8);
          v77 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v78 = *v76 + 4;
              if ( *v76 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v76 + v78) < v76 )
                goto LABEL_142;
              ++v77;
              v76 = (_DWORD *)((char *)v76 + v78);
              if ( v77 >= *(_DWORD *)a4 )
                goto LABEL_199;
            }
            v12 = -1073741675;
          }
          else
          {
LABEL_199:
            if ( v76 + 1 < v76 )
              goto LABEL_142;
            v12 = 0;
            if ( (unsigned __int64)(v76 + 2) > v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_178;
            *v76 = 4;
            v76[1] = v74;
            ++*(_DWORD *)a4;
          }
        }
        else
        {
          v98 = *(_DWORD *)(a4 + 4);
          v99 = -1;
          v100 = v98 + 8;
          if ( v98 + 8 >= v98 )
            v99 = v98 + 8;
          v12 = v100 < v98 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v99;
          if ( v100 >= v98 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_127;
          }
        }
        if ( v12 < 0 )
          goto LABEL_67;
LABEL_127:
        v79 = *(_QWORD *)(a4 + 8);
        if ( v79 )
        {
          v80 = *(_QWORD *)(a4 + 8);
          v81 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v82 = *(_DWORD *)v80 + 4;
              if ( *(_DWORD *)v80 >= 0xFFFFFFFC )
                break;
              if ( v80 + v82 < v80 )
                goto LABEL_66;
              ++v81;
              v80 += v82;
              if ( v81 >= *(_DWORD *)a4 )
                goto LABEL_206;
            }
            v12 = -1073741675;
          }
          else
          {
LABEL_206:
            if ( v80 + 4 < v80 )
              goto LABEL_66;
            v12 = 0;
            if ( v80 + 12 > v79 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_178;
            v104 = v123;
            *(_DWORD *)v80 = 8;
            *(_QWORD *)(v80 + 4) = v104;
            ++*(_DWORD *)a4;
          }
        }
        else
        {
          v101 = *(_DWORD *)(a4 + 4);
          v102 = -1;
          v103 = v101 + 12;
          if ( v101 + 12 >= v101 )
            v102 = v101 + 12;
          v12 = v103 < v101 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v102;
          if ( v103 >= v101 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_75;
          }
        }
        if ( v12 < 0 )
          goto LABEL_67;
LABEL_75:
        v55 = 0;
        if ( Src )
        {
          if ( Size )
            goto LABEL_77;
        }
        else if ( !Size )
        {
LABEL_77:
          v56 = *(_QWORD *)(a4 + 8);
          if ( v56 )
          {
            v38 = *(unsigned int **)(a4 + 8);
            for ( jj = 0; jj < *(_DWORD *)a4; v38 = (unsigned int *)((char *)v38 + v57) )
            {
              v57 = *v38 + 4;
              if ( *v38 >= 0xFFFFFFFC )
                goto LABEL_80;
              if ( (unsigned int *)((char *)v38 + v57) < v38 )
                goto LABEL_216;
              ++jj;
            }
            if ( v38 + 1 < v38 )
            {
LABEL_216:
              v12 = -1073741675;
            }
            else
            {
              v12 = 0;
              if ( (unsigned __int64)v38 + Size + 4 <= v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v38 = Size;
                if ( Src )
                  memmove(v38 + 1, Src, Size);
                ++*(_DWORD *)a4;
                goto LABEL_52;
              }
              v12 = -1073741789;
            }
            v7 = Src;
            goto LABEL_68;
          }
          if ( v66 < 4 )
          {
LABEL_80:
            v12 = -1073741675;
            goto LABEL_52;
          }
          v105 = *(_DWORD *)(a4 + 4);
          v106 = -1;
          v107 = v105 + v66;
          if ( v105 + v66 >= v105 )
            v106 = v105 + v66;
          v12 = v107 < v105 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v106;
          if ( v107 >= v105 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_53;
          }
LABEL_52:
          if ( v12 < 0 )
            goto LABEL_67;
LABEL_53:
          v39 = *(_QWORD *)(a4 + 8);
          v40 = v118;
          if ( v39 )
          {
            v41 = *(_DWORD **)(a4 + 8);
            v42 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v43 = *v41 + 4;
                if ( *v41 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v41 + v43) < v41 )
                  goto LABEL_66;
                ++v42;
                v41 = (_DWORD *)((char *)v41 + v43);
                if ( v42 >= *(_DWORD *)a4 )
                  goto LABEL_223;
              }
              v12 = -1073741675;
            }
            else
            {
LABEL_223:
              if ( v41 + 1 < v41 )
                goto LABEL_66;
              v12 = 0;
              if ( (unsigned __int64)(v41 + 2) > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_178;
              *v41 = 4;
              v41[1] = v40;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v108 = *(_DWORD *)(a4 + 4);
            v109 = -1;
            v110 = v108 + 8;
            if ( v108 + 8 >= v108 )
              v109 = v108 + 8;
            v12 = v110 < v108 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v109;
            if ( v110 >= v108 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_58;
            }
          }
          if ( v12 < 0 )
            goto LABEL_67;
LABEL_58:
          v44 = *(_QWORD *)(a4 + 8);
          v45 = v119;
          if ( v44 )
          {
            v46 = *(_DWORD **)(a4 + 8);
            v47 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v48 = *v46 + 4;
                if ( *v46 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v46 + v48) < v46 )
                  goto LABEL_66;
                ++v47;
                v46 = (_DWORD *)((char *)v46 + v48);
                if ( v47 >= *(_DWORD *)a4 )
                  goto LABEL_230;
              }
              v12 = -1073741675;
            }
            else
            {
LABEL_230:
              if ( v46 + 1 < v46 )
                goto LABEL_66;
              v12 = 0;
              if ( (unsigned __int64)(v46 + 2) > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_178;
              *v46 = 4;
              v46[1] = v45;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v111 = *(_DWORD *)(a4 + 4);
            v112 = -1;
            v113 = v111 + 8;
            if ( v111 + 8 >= v111 )
              v112 = v111 + 8;
            v12 = v113 < v111 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v112;
            if ( v113 >= v111 )
            {
              ++*(_DWORD *)a4;
LABEL_63:
              v49 = *(_QWORD *)(a4 + 8);
              v50 = v120;
              if ( v49 )
              {
                v51 = *(_DWORD **)(a4 + 8);
                v52 = 0;
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v53 = *v51 + 4;
                    if ( *v51 >= 0xFFFFFFFC || (_DWORD *)((char *)v51 + v53) < v51 )
                      break;
                    ++v52;
                    v51 = (_DWORD *)((char *)v51 + v53);
                    if ( v52 >= *(_DWORD *)a4 )
                      goto LABEL_237;
                  }
                }
                else
                {
LABEL_237:
                  if ( v51 + 1 >= v51 )
                  {
                    v12 = 0;
                    if ( (unsigned __int64)(v51 + 2) > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_178;
                    *v51 = 4;
                    v51[1] = v50;
                    ++*(_DWORD *)a4;
                    goto LABEL_67;
                  }
                }
LABEL_66:
                v12 = -1073741675;
                goto LABEL_67;
              }
              v114 = *(_DWORD *)(a4 + 4);
              v115 = v114 + 8;
              if ( v114 + 8 >= v114 )
                v75 = v114 + 8;
              v12 = v115 < v114 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v75;
              if ( v115 < v114 )
                goto LABEL_67;
              ++*(_DWORD *)a4;
LABEL_142:
              v12 = v55;
              goto LABEL_67;
            }
          }
          if ( v12 < 0 )
            goto LABEL_67;
          goto LABEL_63;
        }
        v12 = -1073741811;
        goto LABEL_52;
      }
LABEL_180:
      v12 = -1073741811;
      goto LABEL_67;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v12;
}
