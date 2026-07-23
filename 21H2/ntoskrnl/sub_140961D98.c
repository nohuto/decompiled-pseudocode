/*
 * XREFs of sub_140961D98 @ 0x140961D98
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140961D98(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 v5; // r15
  int v6; // r11d
  signed int v10; // ebx
  unsigned int *v11; // rax
  unsigned int i; // ecx
  __int64 v13; // r10
  unsigned int *v14; // rdx
  unsigned int v15; // edx
  unsigned int *v16; // rcx
  unsigned int *v17; // rax
  unsigned int j; // ecx
  __int64 v19; // rax
  unsigned int *v20; // rdx
  unsigned int v21; // edx
  int *v22; // rax
  PVOID PoolWithTag; // r14
  int v24; // esi
  int v25; // edx
  unsigned int v26; // ecx
  PVOID v27; // rax
  __int64 v28; // r9
  int v29; // esi
  int v30; // ebp
  unsigned int v31; // edx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  _DWORD *v35; // rdx
  unsigned int v36; // eax
  __int64 v37; // r8
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r8
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  _DWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // ecx
  _DWORD *k; // rdx
  unsigned int v56; // eax

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  v6 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = *v11;
      v14 = v11 + 1;
      if ( v11 + 1 < v11 )
        goto LABEL_14;
      v11 = (unsigned int *)((char *)v14 + v13);
      if ( (unsigned int *)((char *)v14 + v13) < v14 )
        goto LABEL_14;
    }
    v15 = *v11;
    v16 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
LABEL_14:
      v10 = -1073741675;
      goto LABEL_15;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = v16;
    v10 = 0;
    if ( v15 == 8 )
    {
      v5 = *(_QWORD *)v17;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v10 = -1073741811;
LABEL_15:
  if ( v10 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v19 = *v4;
        v20 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_28;
        v4 = (unsigned int *)((char *)v20 + v19);
        if ( (unsigned int *)((char *)v20 + v19) < v20 )
          goto LABEL_28;
      }
      v21 = *v4;
      if ( v4 + 1 < v4 )
      {
LABEL_28:
        v10 = -1073741675;
        goto LABEL_29;
      }
      v22 = 0LL;
      if ( v21 )
        v22 = (int *)(v4 + 1);
      v10 = 0;
      if ( v21 == 4 )
      {
        v6 = *v22;
        goto LABEL_29;
      }
      return (unsigned int)-1073741789;
    }
    v10 = -1073741811;
LABEL_29:
    if ( v10 >= 0 )
    {
      if ( v6 != 4104 )
        return (unsigned int)-1073741762;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1008uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      if ( qword_140D2D388 )
        v24 = qword_140D2D388(PoolWithTag);
      else
        v24 = -1073741637;
      v10 = v24;
      if ( v24 < 0 )
        goto LABEL_103;
      v25 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFEFC0 )
        goto LABEL_102;
      v26 = *(_DWORD *)(a2 + 16) + 4164;
      if ( v26 < *(_DWORD *)(a2 + 16) + 4160 )
        goto LABEL_102;
      v10 = v26 + v25 < v26 ? 0xC0000095 : 0;
      if ( v26 + v25 < v26 )
      {
LABEL_103:
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
        return (unsigned int)v10;
      }
      if ( !a4 )
      {
        v10 = -1073741811;
        goto LABEL_103;
      }
      *(_DWORD *)(a4 + 4) = 4136;
      v10 = 0;
      v27 = ExAllocatePoolWithTag(PagedPool, 0x1028uLL, 0x20534C53u);
      if ( v27 )
      {
        *(_QWORD *)(a4 + 8) = v27;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v10 = -1073741801;
      }
      if ( v10 < 0 )
        goto LABEL_103;
      v28 = *(_QWORD *)(a4 + 8);
      v29 = v24 | 0x10000000;
      v30 = -1;
      if ( v28 )
      {
        v34 = 0;
        v35 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v36 = *v35 + 4;
            if ( *v35 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v35 + v36) < v35 )
              goto LABEL_102;
            ++v34;
            v35 = (_DWORD *)((char *)v35 + v36);
            if ( v34 >= *(_DWORD *)a4 )
              goto LABEL_56;
          }
          v10 = -1073741675;
        }
        else
        {
LABEL_56:
          if ( v35 + 1 < v35 )
            goto LABEL_102;
          v10 = 0;
          if ( (unsigned __int64)(v35 + 2) > v28 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_58;
          *v35 = 4;
          v35[1] = v29;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v31 = *(_DWORD *)(a4 + 4);
        v32 = -1;
        v33 = v31 + 8;
        if ( v31 + 8 >= v31 )
          v32 = v31 + 8;
        v10 = v33 < v31 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v32;
        if ( v33 >= v31 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_62;
        }
      }
      if ( v10 < 0 )
        goto LABEL_103;
LABEL_62:
      v37 = *(_QWORD *)(a4 + 8);
      if ( v37 )
      {
        v41 = 0;
        v42 = *(_QWORD *)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v43 = *(_DWORD *)v42 + 4;
            if ( *(_DWORD *)v42 >= 0xFFFFFFFC )
              break;
            if ( v42 + v43 < v42 )
              goto LABEL_102;
            ++v41;
            v42 += v43;
            if ( v41 >= *(_DWORD *)a4 )
              goto LABEL_71;
          }
          v10 = -1073741675;
        }
        else
        {
LABEL_71:
          if ( v42 + 4 < v42 )
            goto LABEL_102;
          v10 = 0;
          if ( v42 + 12 > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_58;
          *(_DWORD *)v42 = 8;
          *(_QWORD *)(v42 + 4) = v5;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v38 = *(_DWORD *)(a4 + 4);
        v39 = -1;
        v40 = v38 + 12;
        if ( v38 + 12 >= v38 )
          v39 = v38 + 12;
        v10 = v40 < v38 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v39;
        if ( v40 >= v38 )
        {
          ++*(_DWORD *)a4;
LABEL_75:
          v44 = *(_QWORD *)(a4 + 8);
          if ( !v44 )
          {
            v45 = *(_DWORD *)(a4 + 4);
            v46 = -1;
            v47 = v45 + 4108;
            if ( v45 + 4108 >= v45 )
              v46 = v45 + 4108;
            v10 = v47 < v45 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v46;
            if ( v47 >= v45 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_89;
            }
LABEL_88:
            if ( v10 < 0 )
              goto LABEL_103;
LABEL_89:
            v51 = *(_QWORD *)(a4 + 8);
            if ( !v51 )
            {
              v52 = *(_DWORD *)(a4 + 4);
              v53 = v52 + 8;
              if ( v52 + 8 >= v52 )
                v30 = v52 + 8;
              v10 = v53 < v52 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v30;
              if ( v53 >= v52 )
              {
                ++*(_DWORD *)a4;
                v10 = 0;
              }
              goto LABEL_103;
            }
            v54 = 0;
            for ( k = *(_DWORD **)(a4 + 8); v54 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v56) )
            {
              v56 = *k + 4;
              if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v56) < k )
                goto LABEL_102;
              ++v54;
            }
            if ( k + 1 >= k )
            {
              v10 = 0;
              if ( (unsigned __int64)(k + 2) <= v51 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *k = 4;
                k[1] = 4104;
                ++*(_DWORD *)a4;
                goto LABEL_103;
              }
              goto LABEL_58;
            }
LABEL_102:
            v10 = -1073741675;
            goto LABEL_103;
          }
          v48 = 0;
          v49 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v50 = *v49 + 4;
              if ( *v49 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v49 + v50) < v49 )
                goto LABEL_102;
              ++v48;
              v49 = (_DWORD *)((char *)v49 + v50);
              if ( v48 >= *(_DWORD *)a4 )
                goto LABEL_85;
            }
            v10 = -1073741675;
            goto LABEL_88;
          }
LABEL_85:
          if ( v49 + 1 < v49 )
            goto LABEL_102;
          v10 = 0;
          if ( (unsigned __int64)(v49 + 1027) <= v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v49 = 4104;
            memmove(v49 + 1, PoolWithTag, 0x1008uLL);
            ++*(_DWORD *)a4;
            goto LABEL_88;
          }
LABEL_58:
          v10 = -1073741789;
          goto LABEL_103;
        }
      }
      if ( v10 < 0 )
        goto LABEL_103;
      goto LABEL_75;
    }
  }
  return (unsigned int)v10;
}
