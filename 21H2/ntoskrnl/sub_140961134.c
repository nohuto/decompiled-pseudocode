/*
 * XREFs of sub_140961134 @ 0x140961134
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140961134(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  const wchar_t *v16; // r14
  size_t v17; // r8
  unsigned int j; // edx
  __int64 v19; // rax
  unsigned int *v20; // r9
  size_t v21; // rdx
  unsigned int *v22; // rcx
  __int64 v23; // r11
  unsigned int v24; // eax
  size_t v25; // rbp
  PVOID PoolWithTag; // rax
  PVOID v27; // rbx
  void *v28; // r12
  unsigned int *v29; // rax
  unsigned int k; // edx
  __int64 v31; // r10
  unsigned int *v32; // r8
  unsigned int v33; // ebx
  unsigned int *v34; // r11
  unsigned int m; // edx
  __int64 v36; // rax
  unsigned int *v37; // r8
  unsigned int *v38; // r9
  int v39; // edi
  int v40; // edx
  unsigned int v41; // ecx
  _DWORD *v42; // rax
  int v43; // edi
  unsigned int v44; // r8d
  __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int64 v53; // [rsp+30h] [rbp-38h]
  size_t pcbLength; // [rsp+78h] [rbp+10h] BYREF

  v53 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = v8;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_17;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_17;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_17:
      v7 = -1073741675;
    }
    else
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v14;
      v7 = 0;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v53 = *(_QWORD *)v15;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  pcbLength = 0LL;
  v16 = 0LL;
  LODWORD(v17) = 0;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v8;
      v20 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_39;
      v8 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_39;
    }
    v21 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_39:
      v7 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v21 )
        v16 = (const wchar_t *)(v8 + 1);
      v7 = 0;
      if ( !(_DWORD)v21
        || (v21 & 1) != 0
        || v16[(v21 >> 1) - 1]
        || StringCbLengthW(v16, v21, &pcbLength) < 0
        || pcbLength + 2 != v23 )
      {
        return (unsigned int)-1073741762;
      }
      v17 = pcbLength >> 1;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  v24 = 2 * v17 + 2;
  if ( 2 * (_DWORD)v17 == -2 )
    return (unsigned int)-1073741762;
  v25 = v24;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
  v27 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, v16, v25);
  v28 = v27;
  v22 = *(unsigned int **)(a1 + 8);
  if ( !v22 || *(_DWORD *)a1 <= 5u )
    goto LABEL_33;
  v29 = *(unsigned int **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v31 = *v29;
    v32 = v29 + 1;
    if ( v29 + 1 < v29 )
      goto LABEL_85;
    v29 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      goto LABEL_85;
  }
  v33 = *v29;
  if ( v29 + 1 >= v29 )
  {
    v34 = 0LL;
    if ( v33 )
      v34 = v29 + 1;
    if ( *(_DWORD *)a1 > 6u )
    {
      for ( m = 0; m < 6; ++m )
      {
        v36 = *v22;
        v37 = v22 + 1;
        if ( v22 + 1 < v22 )
          goto LABEL_85;
        v22 = (unsigned int *)((char *)v37 + v36);
        if ( (unsigned int *)((char *)v37 + v36) < v37 )
          goto LABEL_85;
      }
      if ( v22 + 1 < v22 )
        goto LABEL_85;
      v38 = 0LL;
      if ( *v22 )
        v38 = v22 + 1;
      if ( qword_140D2D400 )
        v39 = qword_140D2D400(v28, v34, v33, v38, *v22);
      else
        v39 = -1073741637;
      v7 = v39;
      if ( v39 < 0 )
        goto LABEL_86;
      v40 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
      {
        v41 = *(_DWORD *)(a2 + 16) + 52;
        if ( v41 >= *(_DWORD *)(a2 + 16) + 48 )
        {
          v7 = v41 + v40 < v41 ? 0xC0000095 : 0;
          if ( v41 + v40 < v41 )
            goto LABEL_86;
          *(_DWORD *)(a4 + 4) = 20;
          v42 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
          if ( !v42 )
          {
            v7 = -1073741801;
            goto LABEL_86;
          }
          *(_QWORD *)(a4 + 8) = v42;
          *(_DWORD *)a4 = 0;
          v43 = v39 | 0x10000000;
          if ( v42 + 1 >= v42 )
          {
            if ( v42 + 2 > (_DWORD *)((char *)v42 + *(unsigned int *)(a4 + 4)) )
            {
LABEL_72:
              v7 = -1073741789;
              goto LABEL_86;
            }
            *v42 = 4;
            v42[1] = v43;
            v44 = ++*(_DWORD *)a4;
            v45 = *(_QWORD *)(a4 + 8);
            if ( !v45 )
            {
              v46 = *(_DWORD *)(a4 + 4);
              v47 = -1;
              v48 = v46 + 12;
              if ( v46 + 12 >= v46 )
                v47 = v46 + 12;
              v7 = v48 < v46 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v47;
              if ( v48 >= v46 )
              {
                v7 = 0;
                *(_DWORD *)a4 = v44 + 1;
              }
              goto LABEL_86;
            }
            v49 = *(_QWORD *)(a4 + 8);
            v50 = 0;
            if ( v44 )
            {
              while ( 1 )
              {
                v51 = *(_DWORD *)v49 + 4;
                if ( *(_DWORD *)v49 >= 0xFFFFFFFC || v49 + v51 < v49 )
                  break;
                ++v50;
                v49 += v51;
                if ( v50 >= v44 )
                  goto LABEL_82;
              }
            }
            else
            {
LABEL_82:
              if ( v49 + 4 >= v49 )
              {
                v7 = 0;
                if ( v49 + 12 > v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_72;
                *(_DWORD *)v49 = 8;
                *(_QWORD *)(v49 + 4) = v53;
                ++*(_DWORD *)a4;
                goto LABEL_86;
              }
            }
          }
        }
      }
      goto LABEL_85;
    }
LABEL_33:
    v7 = -1073741811;
    goto LABEL_86;
  }
LABEL_85:
  v7 = -1073741675;
LABEL_86:
  if ( v28 )
    ExFreePoolWithTag(v28, 0x20534C53u);
  return (unsigned int)v7;
}
