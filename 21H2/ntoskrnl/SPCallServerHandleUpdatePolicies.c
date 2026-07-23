/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x140620518
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r10
  int v7; // ecx
  unsigned int v8; // edx
  unsigned int *v9; // rax
  unsigned int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  unsigned int *v13; // r8
  unsigned int *v14; // rcx
  unsigned int v15; // r8d
  unsigned int *v16; // rdx
  int v17; // eax
  int v18; // r14d
  unsigned int v19; // eax
  _DWORD *v20; // rax
  unsigned int i; // edx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  signed int v25; // r8d
  _DWORD *v26; // r9
  unsigned int v27; // ecx
  int v28; // edx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  _DWORD *v31; // rdx
  unsigned int v32; // eax
  _DWORD *PoolWithTag; // rax
  unsigned int *v34; // rax
  __int64 v35; // rbp
  unsigned int *v36; // r9
  unsigned int v37; // r9d
  unsigned int *v38; // rdx
  __int64 v39; // r9
  unsigned int v40; // ecx
  _DWORD *v41; // r8
  unsigned int v42; // ecx
  int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax

  v6 = 0LL;
  v7 = *(_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 16) + 32;
  if ( v8 < 0x20 )
    return (unsigned int)-1073741675;
  v23 = v8 + 4;
  if ( v8 + 4 < v8 )
    return (unsigned int)-1073741675;
  v24 = v23 + v7;
  if ( v24 < v23 )
    return (unsigned int)-1073741675;
  if ( a3 < v24 )
  {
    if ( !a4 )
    {
      v25 = -1073741811;
      goto LABEL_66;
    }
    v26 = *(_DWORD **)(a4 + 8);
    if ( v26 )
    {
      v30 = 0;
      v31 = v26;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v32 = *v31 + 4;
          if ( v32 < 4 )
            break;
          if ( (_DWORD *)((char *)v31 + v32) < v31 )
            goto LABEL_65;
          ++v30;
          v31 = (_DWORD *)((char *)v31 + v32);
          if ( v30 >= *(_DWORD *)a4 )
            goto LABEL_52;
        }
        v25 = -1073741675;
      }
      else
      {
LABEL_52:
        if ( v31 + 1 < v31 )
          goto LABEL_65;
        v25 = 0;
        if ( v31 + 2 > (_DWORD *)((char *)v26 + *(unsigned int *)(a4 + 4)) )
          goto LABEL_59;
        *v31 = 4;
        v31[1] = 0;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v27 = *(_DWORD *)(a4 + 4);
      v28 = -1;
      v29 = v27 + 8;
      if ( v27 + 8 >= v27 )
        v28 = v27 + 8;
      v25 = v29 < v27 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v28;
      if ( v29 >= v27 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_56;
      }
    }
    if ( v25 < 0 )
      goto LABEL_66;
LABEL_56:
    if ( !*(_DWORD *)(a4 + 4) )
    {
      v25 = -1073741762;
      goto LABEL_66;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
    if ( !PoolWithTag )
    {
      v25 = -1073741801;
      goto LABEL_66;
    }
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    if ( PoolWithTag + 1 >= PoolWithTag )
    {
      v25 = 0;
      if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
      {
        *PoolWithTag = 4;
        PoolWithTag[1] = 0;
        ++*(_DWORD *)a4;
        goto LABEL_66;
      }
LABEL_59:
      v25 = -1073741789;
      goto LABEL_66;
    }
LABEL_65:
    v25 = -1073741675;
LABEL_66:
    v10 = v25;
    if ( v25 >= 0 )
      return 0;
    return v10;
  }
  v14 = *(unsigned int **)(a1 + 8);
  if ( v14 && *(_DWORD *)a1 > 3u )
  {
    v34 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v35 = *v34;
      v36 = v34 + 1;
      if ( v34 + 1 < v34 )
        goto LABEL_73;
      v34 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) < v36 )
        goto LABEL_73;
    }
    v37 = *v34;
    v38 = v34 + 1;
    if ( v34 + 1 < v34 )
    {
LABEL_73:
      v10 = -1073741675;
      goto LABEL_7;
    }
    v9 = 0LL;
    if ( v37 )
      v9 = v38;
    v10 = 0;
    if ( v37 == 8 )
    {
      v6 = *(_QWORD *)v9;
      goto LABEL_7;
    }
    return (unsigned int)-1073741789;
  }
  v10 = -1073741811;
LABEL_7:
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  if ( v6 && qword_140D2D270 )
  {
    if ( v6 == qword_140D2D270 )
    {
      if ( v14 && *(_DWORD *)a1 > 4u )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = *v14;
          v13 = v14 + 1;
          if ( v14 + 1 < v14 )
            break;
          v14 = (unsigned int *)((char *)v13 + v12);
          if ( (unsigned int *)((char *)v13 + v12) < v13 )
            break;
          if ( (unsigned int)++v11 >= 4 )
          {
            v15 = *v14;
            if ( v14 + 1 < v14 )
              return (unsigned int)-1073741675;
            v16 = 0LL;
            if ( v15 )
              v16 = v14 + 1;
            v17 = ((__int64 (__fastcall *)(_QWORD, unsigned int *))qword_140D2D490)(v15, v16);
            if ( v17 == 263 )
            {
              v18 = 1074058754;
            }
            else if ( v17 == 0x40000000 )
            {
              v18 = 1074058753;
            }
            else if ( v17 < 0 )
            {
              v18 = v17 | 0x10000000;
            }
            else
            {
              v18 = 0;
            }
            *(_DWORD *)(a4 + 4) = 0;
            *(_DWORD *)a4 = 0;
            if ( *(_QWORD *)(a4 + 8) )
            {
              ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0x20534C53u);
              *(_QWORD *)(a4 + 8) = 0LL;
            }
            goto LABEL_84;
          }
        }
        return (unsigned int)-1073741675;
      }
      return (unsigned int)-1073741811;
    }
    if ( !a4 )
      return (unsigned int)-1073741811;
    v39 = *(_QWORD *)(a4 + 8);
    v18 = -1073425151;
    if ( v39 )
    {
      v40 = 0;
      v41 = *(_DWORD **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
      {
LABEL_81:
        if ( v41 + 1 < v41 )
          return (unsigned int)-1073741675;
        v10 = 0;
        if ( (unsigned __int64)(v41 + 2) > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v41 = 4;
        v41[1] = -1073425151;
        ++*(_DWORD *)a4;
LABEL_28:
        if ( (v10 & 0x80000000) != 0 )
          return v10;
        goto LABEL_29;
      }
      while ( 1 )
      {
        v45 = *v41 + 4;
        if ( v45 < 4 )
          break;
        if ( (_DWORD *)((char *)v41 + v45) < v41 )
          return (unsigned int)-1073741675;
        ++v40;
        v41 = (_DWORD *)((char *)v41 + v45);
        if ( v40 >= *(_DWORD *)a4 )
          goto LABEL_81;
      }
LABEL_92:
      v10 = -1073741675;
      goto LABEL_28;
    }
  }
  else
  {
    if ( !a4 )
      return (unsigned int)-1073741811;
    v39 = *(_QWORD *)(a4 + 8);
    v18 = -1073425151;
    if ( v39 )
    {
      v46 = 0;
      v41 = *(_DWORD **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
        goto LABEL_81;
      while ( 1 )
      {
        v47 = *v41 + 4;
        if ( v47 < 4 )
          goto LABEL_92;
        if ( (_DWORD *)((char *)v41 + v47) < v41 )
          return (unsigned int)-1073741675;
        ++v46;
        v41 = (_DWORD *)((char *)v41 + v47);
        if ( v46 >= *(_DWORD *)a4 )
          goto LABEL_81;
      }
    }
  }
LABEL_84:
  v42 = *(_DWORD *)(a4 + 4);
  v43 = -1;
  v44 = v42 + 8;
  if ( v42 + 8 >= v42 )
    v43 = v42 + 8;
  *(_DWORD *)(a4 + 4) = v43;
  v10 = v44 < v42 ? 0xC0000095 : 0;
  if ( v44 < v42 )
    goto LABEL_28;
  ++*(_DWORD *)a4;
LABEL_29:
  v19 = *(_DWORD *)(a4 + 4);
  if ( !v19 )
    return (unsigned int)-1073741762;
  v20 = ExAllocatePoolWithTag(PagedPool, v19, 0x20534C53u);
  if ( v20 )
  {
    *(_QWORD *)(a4 + 8) = v20;
    *(_DWORD *)a4 = 0;
    if ( v20 + 1 >= v20 )
    {
      v10 = 0;
      if ( v20 + 2 <= (_DWORD *)((char *)v20 + *(unsigned int *)(a4 + 4)) )
      {
        *v20 = 4;
        v20[1] = v18;
        ++*(_DWORD *)a4;
        return v10;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741801;
}
