/*
 * XREFs of sub_1405BFF40 @ 0x1405BFF40
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405BFF40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r11
  unsigned int v5; // r15d
  unsigned int v6; // r13d
  unsigned int *v8; // r8
  signed int v11; // ebx
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r10
  unsigned int *v15; // rdx
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  unsigned int *v18; // rax
  unsigned int v19; // r10d
  unsigned int *v20; // rax
  unsigned int j; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rdx
  unsigned int v24; // r14d
  unsigned int *v25; // rbp
  unsigned int k; // ecx
  __int64 v27; // rax
  unsigned int *v28; // rdx
  unsigned int v29; // edx
  unsigned int *v30; // rax
  int v31; // esi
  PVOID PoolWithTag; // rax
  void *v33; // r8
  int v34; // ebp
  unsigned int v35; // r14d
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // eax
  int v39; // edx
  unsigned int v40; // ecx
  unsigned int v41; // eax
  PVOID v42; // rax
  __int64 v43; // r9
  int v44; // ebp
  int v45; // esi
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  _DWORD *v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // r8
  unsigned int v53; // edx
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // r8
  int v60; // r11d
  unsigned int v61; // ecx
  unsigned int v62; // eax
  __int64 v63; // r8
  unsigned int v64; // edx
  int v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // ecx
  unsigned int *v68; // rdx
  unsigned int v69; // eax
  unsigned int v70; // ecx
  _DWORD *m; // rdx
  unsigned int v72; // eax
  void *Src; // [rsp+30h] [rbp-38h]
  __int64 v75; // [rsp+38h] [rbp-30h]
  int v76; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0;
  v75 = 0LL;
  v6 = 0;
  v76 = 0;
  v8 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v14 = *v12;
      v15 = v12 + 1;
      if ( v12 + 1 < v12 )
        goto LABEL_14;
      v12 = (unsigned int *)((char *)v15 + v14);
      if ( (unsigned int *)((char *)v15 + v14) < v15 )
        goto LABEL_14;
    }
    v16 = *v12;
    v17 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
LABEL_14:
      v11 = -1073741675;
      goto LABEL_15;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = v17;
    v11 = 0;
    if ( v16 == 8 )
    {
      v75 = *(_QWORD *)v18;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v11 = -1073741811;
LABEL_15:
  if ( v11 >= 0 )
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    v19 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v20 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v22 = *v20;
      v23 = v20 + 1;
      if ( v20 + 1 < v20 )
        return (unsigned int)-1073741675;
      v20 = (unsigned int *)((char *)v23 + v22);
      if ( (unsigned int *)((char *)v23 + v22) < v23 )
        return (unsigned int)-1073741675;
    }
    v24 = *v20;
    if ( v20 + 1 < v20 )
      return (unsigned int)-1073741675;
    v25 = 0LL;
    if ( v24 )
      v25 = v20 + 1;
    if ( v19 > 5 )
    {
      for ( k = 0; k < 5; ++k )
      {
        v27 = *v8;
        v28 = v8 + 1;
        if ( v8 + 1 < v8 )
          goto LABEL_37;
        v8 = (unsigned int *)((char *)v28 + v27);
        if ( (unsigned int *)((char *)v28 + v27) < v28 )
          goto LABEL_37;
      }
      v29 = *v8;
      if ( v8 + 1 < v8 )
      {
LABEL_37:
        v11 = -1073741675;
        goto LABEL_38;
      }
      v30 = 0LL;
      if ( v29 )
        v30 = v8 + 1;
      v11 = 0;
      if ( v29 == 4 )
      {
        v6 = *v30;
        goto LABEL_38;
      }
      return (unsigned int)-1073741789;
    }
    v11 = -1073741811;
LABEL_38:
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        v31 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
        Src = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset(PoolWithTag, 0, v6);
        v4 = Src;
      }
      else
      {
        v31 = 1;
      }
      if ( qword_140D2D3F8 )
      {
        v33 = 0LL;
        if ( !v31 )
          v33 = v4;
        v34 = qword_140D2D3F8(v25, v24, v33, v6, &v76);
      }
      else
      {
        v34 = -1073741637;
      }
      v35 = v6 + 4;
      if ( v6 >= 0xFFFFFFFC )
      {
        v11 = -1073741675;
      }
      else
      {
        if ( v35 >= 0xFFFFFFEC || (v5 = v6 + 32, v6 + 32 < v6 + 24) )
        {
          v11 = -1073741675;
          goto LABEL_141;
        }
        v11 = 0;
      }
      if ( v11 < 0 )
      {
LABEL_141:
        if ( Src )
          ExFreeHeapPool((ULONG_PTR)Src);
        return (unsigned int)v11;
      }
      v36 = 0;
      if ( v5 >= 0xFFFFFFF8 )
      {
        v11 = -1073741675;
        goto LABEL_141;
      }
      v37 = (v5 + 15) & 0xFFFFFFF8;
      if ( v37 >= v5 + 8 )
      {
        v36 = v37 + 8;
        if ( v37 + 8 < v37 )
        {
          v11 = -1073741675;
          goto LABEL_67;
        }
        v11 = 0;
      }
      else
      {
        v11 = -1073741675;
      }
      if ( v11 >= 0 )
      {
        v38 = v36 + 4;
        v39 = *(_DWORD *)(a2 + 16);
        v40 = v36 + 8;
        if ( v40 < v38 || (v41 = v40 + v39, v40 + v39 < v40) || v41 + 4 < v41 )
          v11 = -1073741675;
        else
          v11 = v41 + 4 + *(_DWORD *)(a2 + 32) < v41 + 4 ? 0xC0000095 : 0;
      }
LABEL_67:
      if ( v11 < 0 )
        goto LABEL_141;
      if ( !a4 )
      {
        v11 = -1073741811;
        goto LABEL_141;
      }
      v11 = 0;
      *(_DWORD *)(a4 + 4) = v5;
      if ( v5 )
      {
        v42 = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u);
        if ( v42 )
        {
          *(_QWORD *)(a4 + 8) = v42;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v11 = -1073741801;
        }
      }
      else
      {
        v11 = -1073741762;
      }
      if ( v11 < 0 )
        goto LABEL_141;
      v43 = *(_QWORD *)(a4 + 8);
      v44 = v34 | 0x10000000;
      v45 = -1;
      if ( v43 )
      {
        v49 = 0;
        v50 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v51 = *v50 + 4;
            if ( *v50 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v50 + v51) < v50 )
              goto LABEL_140;
            ++v49;
            v50 = (_DWORD *)((char *)v50 + v51);
            if ( v49 >= *(_DWORD *)a4 )
              goto LABEL_87;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_87:
          if ( v50 + 1 < v50 )
            goto LABEL_140;
          v11 = 0;
          if ( (unsigned __int64)(v50 + 2) > v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_89;
          *v50 = 4;
          v50[1] = v44;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v46 = *(_DWORD *)(a4 + 4);
        v47 = -1;
        v48 = v46 + 8;
        if ( v46 + 8 >= v46 )
          v47 = v46 + 8;
        v11 = v48 < v46 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v47;
        if ( v48 >= v46 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_93;
        }
      }
      if ( v11 < 0 )
        goto LABEL_141;
LABEL_93:
      v52 = *(_QWORD *)(a4 + 8);
      if ( v52 )
      {
        v56 = 0;
        v57 = *(_QWORD *)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v58 = *(_DWORD *)v57 + 4;
            if ( *(_DWORD *)v57 >= 0xFFFFFFFC )
              break;
            if ( v57 + v58 < v57 )
              goto LABEL_140;
            ++v56;
            v57 += v58;
            if ( v56 >= *(_DWORD *)a4 )
              goto LABEL_102;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_102:
          if ( v57 + 4 < v57 )
            goto LABEL_140;
          v11 = 0;
          if ( v57 + 12 > v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_89;
          *(_DWORD *)v57 = 8;
          *(_QWORD *)(v57 + 4) = v75;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v53 = *(_DWORD *)(a4 + 4);
        v54 = -1;
        v55 = v53 + 12;
        if ( v53 + 12 >= v53 )
          v54 = v53 + 12;
        v11 = v55 < v53 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v54;
        if ( v55 >= v53 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_106;
        }
      }
      if ( v11 < 0 )
        goto LABEL_141;
LABEL_106:
      if ( Src )
      {
        if ( !v6 )
          goto LABEL_108;
      }
      else if ( v6 )
      {
LABEL_108:
        v11 = -1073741811;
        goto LABEL_109;
      }
      v63 = *(_QWORD *)(a4 + 8);
      if ( v63 )
      {
        v67 = 0;
        v68 = *(unsigned int **)(a4 + 8);
        if ( !*(_DWORD *)a4 )
        {
LABEL_128:
          if ( v68 + 1 < v68 )
            goto LABEL_140;
          v11 = 0;
          if ( (unsigned __int64)v68 + v6 + 4 > v63 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_89;
          *v68 = v6;
          if ( Src )
            memmove(v68 + 1, Src, v6);
          ++*(_DWORD *)a4;
          goto LABEL_109;
        }
        while ( 1 )
        {
          v69 = *v68 + 4;
          if ( *v68 >= 0xFFFFFFFC )
            break;
          if ( (unsigned int *)((char *)v68 + v69) < v68 )
            goto LABEL_140;
          ++v67;
          v68 = (unsigned int *)((char *)v68 + v69);
          if ( v67 >= *(_DWORD *)a4 )
            goto LABEL_128;
        }
      }
      else if ( v35 >= 4 )
      {
        v64 = *(_DWORD *)(a4 + 4);
        v65 = -1;
        v66 = v64 + v35;
        if ( v64 + v35 >= v64 )
          v65 = v64 + v35;
        v11 = v66 < v64 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v65;
        if ( v66 >= v64 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_110;
        }
LABEL_109:
        if ( v11 < 0 )
          goto LABEL_141;
LABEL_110:
        v59 = *(_QWORD *)(a4 + 8);
        v60 = v76;
        if ( !v59 )
        {
          v61 = *(_DWORD *)(a4 + 4);
          v62 = v61 + 8;
          if ( v61 + 8 >= v61 )
            v45 = v61 + 8;
          v11 = v62 < v61 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v45;
          if ( v62 >= v61 )
          {
            ++*(_DWORD *)a4;
            v11 = 0;
          }
          goto LABEL_141;
        }
        v70 = 0;
        for ( m = *(_DWORD **)(a4 + 8); v70 < *(_DWORD *)a4; m = (_DWORD *)((char *)m + v72) )
        {
          v72 = *m + 4;
          if ( *m >= 0xFFFFFFFC || (_DWORD *)((char *)m + v72) < m )
            goto LABEL_140;
          ++v70;
        }
        if ( m + 1 >= m )
        {
          v11 = 0;
          if ( (unsigned __int64)(m + 2) <= v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *m = 4;
            m[1] = v60;
            ++*(_DWORD *)a4;
            goto LABEL_141;
          }
LABEL_89:
          v11 = -1073741789;
          goto LABEL_141;
        }
LABEL_140:
        v11 = -1073741675;
        goto LABEL_141;
      }
      v11 = -1073741675;
      goto LABEL_109;
    }
  }
  return (unsigned int)v11;
}
