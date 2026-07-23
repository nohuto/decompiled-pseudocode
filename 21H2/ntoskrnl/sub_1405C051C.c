/*
 * XREFs of sub_1405C051C @ 0x1405C051C
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405C051C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  const void *v5; // r12
  unsigned int v6; // r15d
  unsigned int *v8; // r8
  signed int v11; // ebx
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r10
  unsigned int *v15; // rdx
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  unsigned int *v18; // rax
  unsigned int j; // ecx
  __int64 v20; // rax
  unsigned int *v21; // rdx
  unsigned int v22; // edx
  unsigned int *v23; // rax
  int v24; // esi
  PVOID PoolWithTag; // rax
  const void *v26; // rcx
  int v27; // esi
  unsigned int v28; // r14d
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // edx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  PVOID v35; // rax
  __int64 v36; // r9
  int v37; // esi
  int v38; // ebp
  unsigned int v39; // edx
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  _DWORD *v43; // rdx
  unsigned int v44; // eax
  __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdx
  unsigned int v51; // eax
  __int64 v52; // r8
  int v53; // r11d
  unsigned int v54; // ecx
  unsigned int v55; // eax
  __int64 v56; // r8
  unsigned int v57; // edx
  int v58; // eax
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int *v61; // rdx
  unsigned int v62; // eax
  unsigned int v63; // ecx
  _DWORD *k; // rdx
  unsigned int v65; // eax
  __int64 v67; // [rsp+20h] [rbp-38h]
  int v68; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v67 = 0LL;
  v6 = 0;
  v68 = 0;
  v8 = *(unsigned int **)(a1 + 8);
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
      v67 = *(_QWORD *)v18;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v11 = -1073741811;
LABEL_15:
  if ( v11 >= 0 )
  {
    if ( v8 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v20 = *v8;
        v21 = v8 + 1;
        if ( v8 + 1 < v8 )
          goto LABEL_28;
        v8 = (unsigned int *)((char *)v21 + v20);
        if ( (unsigned int *)((char *)v21 + v20) < v21 )
          goto LABEL_28;
      }
      v22 = *v8;
      if ( v8 + 1 < v8 )
      {
LABEL_28:
        v11 = -1073741675;
        goto LABEL_29;
      }
      v23 = 0LL;
      if ( v22 )
        v23 = v8 + 1;
      v11 = 0;
      if ( v22 == 4 )
      {
        v6 = *v23;
        goto LABEL_29;
      }
      return (unsigned int)-1073741789;
    }
    v11 = -1073741811;
LABEL_29:
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        v24 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset(PoolWithTag, 0, v6);
      }
      else
      {
        v24 = 1;
      }
      if ( qword_140D2D458 )
      {
        v26 = 0LL;
        if ( !v24 )
          v26 = v5;
        v27 = qword_140D2D458(v26, v6, &v68);
      }
      else
      {
        v27 = -1073741637;
      }
      v28 = v6 + 4;
      if ( v6 >= 0xFFFFFFFC )
      {
        v11 = -1073741675;
      }
      else
      {
        if ( v28 >= 0xFFFFFFEC || (v4 = v6 + 32, v6 + 32 < v6 + 24) )
        {
          v11 = -1073741675;
          goto LABEL_132;
        }
        v11 = 0;
      }
      if ( v11 < 0 )
      {
LABEL_132:
        if ( v5 )
          ExFreeHeapPool((ULONG_PTR)v5);
        return (unsigned int)v11;
      }
      v29 = 0;
      if ( v4 >= 0xFFFFFFF8 )
      {
        v11 = -1073741675;
        goto LABEL_132;
      }
      v30 = (v4 + 15) & 0xFFFFFFF8;
      if ( v30 >= v4 + 8 )
      {
        v29 = v30 + 8;
        if ( v30 + 8 < v30 )
        {
          v11 = -1073741675;
          goto LABEL_58;
        }
        v11 = 0;
      }
      else
      {
        v11 = -1073741675;
      }
      if ( v11 >= 0 )
      {
        v31 = v29 + 4;
        v32 = *(_DWORD *)(a2 + 16);
        v33 = v29 + 8;
        if ( v33 < v31 || (v34 = v33 + v32, v33 + v32 < v33) || v34 + 4 < v34 )
          v11 = -1073741675;
        else
          v11 = v34 + 4 + *(_DWORD *)(a2 + 32) < v34 + 4 ? 0xC0000095 : 0;
      }
LABEL_58:
      if ( v11 < 0 )
        goto LABEL_132;
      if ( !a4 )
      {
        v11 = -1073741811;
        goto LABEL_132;
      }
      v11 = 0;
      *(_DWORD *)(a4 + 4) = v4;
      if ( v4 )
      {
        v35 = ExAllocatePoolWithTag(PagedPool, v4, 0x20534C53u);
        if ( v35 )
        {
          *(_QWORD *)(a4 + 8) = v35;
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
        goto LABEL_132;
      v36 = *(_QWORD *)(a4 + 8);
      v37 = v27 | 0x10000000;
      v38 = -1;
      if ( v36 )
      {
        v42 = 0;
        v43 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v44 = *v43 + 4;
            if ( *v43 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v43 + v44) < v43 )
              goto LABEL_131;
            ++v42;
            v43 = (_DWORD *)((char *)v43 + v44);
            if ( v42 >= *(_DWORD *)a4 )
              goto LABEL_78;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_78:
          if ( v43 + 1 < v43 )
            goto LABEL_131;
          v11 = 0;
          if ( (unsigned __int64)(v43 + 2) > v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_80;
          *v43 = 4;
          v43[1] = v37;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v39 = *(_DWORD *)(a4 + 4);
        v40 = -1;
        v41 = v39 + 8;
        if ( v39 + 8 >= v39 )
          v40 = v39 + 8;
        v11 = v41 < v39 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v40;
        if ( v41 >= v39 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_84;
        }
      }
      if ( v11 < 0 )
        goto LABEL_132;
LABEL_84:
      v45 = *(_QWORD *)(a4 + 8);
      if ( v45 )
      {
        v49 = 0;
        v50 = *(_QWORD *)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v51 = *(_DWORD *)v50 + 4;
            if ( *(_DWORD *)v50 >= 0xFFFFFFFC )
              break;
            if ( v50 + v51 < v50 )
              goto LABEL_131;
            ++v49;
            v50 += v51;
            if ( v49 >= *(_DWORD *)a4 )
              goto LABEL_93;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_93:
          if ( v50 + 4 < v50 )
            goto LABEL_131;
          v11 = 0;
          if ( v50 + 12 > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_80;
          *(_DWORD *)v50 = 8;
          *(_QWORD *)(v50 + 4) = v67;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v46 = *(_DWORD *)(a4 + 4);
        v47 = -1;
        v48 = v46 + 12;
        if ( v46 + 12 >= v46 )
          v47 = v46 + 12;
        v11 = v48 < v46 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v47;
        if ( v48 >= v46 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_97;
        }
      }
      if ( v11 < 0 )
        goto LABEL_132;
LABEL_97:
      if ( v5 )
      {
        if ( !v6 )
          goto LABEL_99;
      }
      else if ( v6 )
      {
LABEL_99:
        v11 = -1073741811;
        goto LABEL_100;
      }
      v56 = *(_QWORD *)(a4 + 8);
      if ( v56 )
      {
        v60 = 0;
        v61 = *(unsigned int **)(a4 + 8);
        if ( !*(_DWORD *)a4 )
        {
LABEL_119:
          if ( v61 + 1 < v61 )
            goto LABEL_131;
          v11 = 0;
          if ( (unsigned __int64)v61 + v6 + 4 > v56 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_80;
          *v61 = v6;
          if ( v5 )
            memmove(v61 + 1, v5, v6);
          ++*(_DWORD *)a4;
          goto LABEL_100;
        }
        while ( 1 )
        {
          v62 = *v61 + 4;
          if ( *v61 >= 0xFFFFFFFC )
            break;
          if ( (unsigned int *)((char *)v61 + v62) < v61 )
            goto LABEL_131;
          ++v60;
          v61 = (unsigned int *)((char *)v61 + v62);
          if ( v60 >= *(_DWORD *)a4 )
            goto LABEL_119;
        }
      }
      else if ( v28 >= 4 )
      {
        v57 = *(_DWORD *)(a4 + 4);
        v58 = -1;
        v59 = v57 + v28;
        if ( v57 + v28 >= v57 )
          v58 = v57 + v28;
        v11 = v59 < v57 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v58;
        if ( v59 >= v57 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_101;
        }
LABEL_100:
        if ( v11 < 0 )
          goto LABEL_132;
LABEL_101:
        v52 = *(_QWORD *)(a4 + 8);
        v53 = v68;
        if ( !v52 )
        {
          v54 = *(_DWORD *)(a4 + 4);
          v55 = v54 + 8;
          if ( v54 + 8 >= v54 )
            v38 = v54 + 8;
          v11 = v55 < v54 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v38;
          if ( v55 >= v54 )
          {
            ++*(_DWORD *)a4;
            v11 = 0;
          }
          goto LABEL_132;
        }
        v63 = 0;
        for ( k = *(_DWORD **)(a4 + 8); v63 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v65) )
        {
          v65 = *k + 4;
          if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v65) < k )
            goto LABEL_131;
          ++v63;
        }
        if ( k + 1 >= k )
        {
          v11 = 0;
          if ( (unsigned __int64)(k + 2) <= v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *k = 4;
            k[1] = v53;
            ++*(_DWORD *)a4;
            goto LABEL_132;
          }
LABEL_80:
          v11 = -1073741789;
          goto LABEL_132;
        }
LABEL_131:
        v11 = -1073741675;
        goto LABEL_132;
      }
      v11 = -1073741675;
      goto LABEL_100;
    }
  }
  return (unsigned int)v11;
}
