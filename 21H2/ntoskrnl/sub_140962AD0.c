/*
 * XREFs of sub_140962AD0 @ 0x140962AD0
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140962AD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  signed int v8; // ebx
  unsigned int *v9; // rcx
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // r8
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
  const wchar_t *v17; // r14
  size_t v18; // r9
  unsigned int j; // edx
  __int64 v20; // rax
  unsigned int *v21; // r8
  size_t v22; // rdx
  unsigned int *v23; // rax
  __int64 v24; // r11
  unsigned int v25; // eax
  size_t v26; // rbp
  PVOID PoolWithTag; // rax
  PVOID v28; // rbx
  void *v29; // rbp
  unsigned int k; // ecx
  __int64 v31; // r8
  unsigned int *v32; // rdx
  __int64 v33; // r8
  unsigned int *v34; // rdx
  int v35; // esi
  int v36; // edx
  unsigned int v37; // ecx
  _DWORD *v38; // rax
  int v39; // esi
  unsigned int v40; // r8d
  __int64 v41; // r9
  int v42; // r11d
  unsigned int v43; // edx
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // r8
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned __int64 v53; // rdx
  unsigned int v54; // eax
  size_t pcbLength[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v57; // [rsp+40h] [rbp-48h] BYREF

  pcbLength[1] = 0LL;
  v7 = 0LL;
  v57 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v10 = v9;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_17;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_17;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_17:
      v8 = -1073741675;
    }
    else
    {
      v16 = 0LL;
      if ( v14 )
        v16 = v15;
      v8 = 0;
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v7 = *(_QWORD *)v16;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  pcbLength[0] = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  if ( v9 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v20 = *v9;
      v21 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_39;
      v9 = (unsigned int *)((char *)v21 + v20);
      if ( (unsigned int *)((char *)v21 + v20) < v21 )
        goto LABEL_39;
    }
    v22 = *v9;
    if ( v9 + 1 < v9 )
    {
LABEL_39:
      v8 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v22 )
        v17 = (const wchar_t *)(v9 + 1);
      v8 = 0;
      if ( !(_DWORD)v22
        || (v22 & 1) != 0
        || v17[(v22 >> 1) - 1]
        || StringCbLengthW(v17, v22, pcbLength) < 0
        || pcbLength[0] + 2 != v24 )
      {
        return (unsigned int)-1073741762;
      }
      v18 = pcbLength[0] >> 1;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  v25 = 2 * v18 + 2;
  if ( 2 * (_DWORD)v18 == -2 )
    return (unsigned int)-1073741762;
  v26 = v25;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
  v28 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, v17, v26);
  v29 = v28;
  v23 = *(unsigned int **)(a1 + 8);
  if ( !v23 || *(_DWORD *)a1 <= 5u )
  {
    v8 = -1073741811;
    goto LABEL_92;
  }
  for ( k = 0; k < 5; ++k )
  {
    v31 = *v23;
    v32 = v23 + 1;
    if ( v23 + 1 < v23 )
      goto LABEL_91;
    v23 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      goto LABEL_91;
  }
  v33 = *v23;
  if ( v23 + 1 >= v23 )
  {
    v34 = 0LL;
    if ( (_DWORD)v33 )
      v34 = v23 + 1;
    v35 = qword_140D2D3F0 ? qword_140D2D3F0(v28, v34, v33, &v57) : -1073700223;
    v36 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFC0 )
    {
      v37 = *(_DWORD *)(a2 + 16) + 68;
      if ( v37 >= *(_DWORD *)(a2 + 16) + 64 )
      {
        v8 = v37 + v36 < v37 ? 0xC0000095 : 0;
        if ( v37 + v36 < v37 )
          goto LABEL_92;
        *(_DWORD *)(a4 + 4) = 40;
        v38 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
        if ( !v38 )
        {
          v8 = -1073741801;
          goto LABEL_92;
        }
        *(_QWORD *)(a4 + 8) = v38;
        *(_DWORD *)a4 = 0;
        v39 = v35 | 0x10000000;
        if ( v38 + 1 >= v38 )
        {
          if ( v38 + 2 > (_DWORD *)((char *)v38 + *(unsigned int *)(a4 + 4)) )
          {
LABEL_63:
            v8 = -1073741789;
            goto LABEL_92;
          }
          *v38 = 4;
          v38[1] = v39;
          v40 = ++*(_DWORD *)a4;
          v41 = *(_QWORD *)(a4 + 8);
          v42 = -1;
          if ( !v41 )
          {
            v43 = *(_DWORD *)(a4 + 4);
            v44 = -1;
            v45 = v43 + 12;
            if ( v43 + 12 >= v43 )
              v44 = v43 + 12;
            v8 = v45 < v43 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v44;
            if ( v45 >= v43 )
            {
              *(_DWORD *)a4 = v40 + 1;
LABEL_77:
              v49 = *(_QWORD *)(a4 + 8);
              if ( !v49 )
              {
                v50 = *(_DWORD *)(a4 + 4);
                v51 = v50 + 20;
                if ( v50 + 20 >= v50 )
                  v42 = v50 + 20;
                v8 = v51 < v50 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v42;
                if ( v51 >= v50 )
                {
                  ++*(_DWORD *)a4;
                  v8 = 0;
                }
                goto LABEL_92;
              }
              v52 = 0;
              v53 = *(_QWORD *)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v54 = *(_DWORD *)v53 + 4;
                  if ( *(_DWORD *)v53 >= 0xFFFFFFFC || v53 + v54 < v53 )
                    break;
                  ++v52;
                  v53 += v54;
                  if ( v52 >= *(_DWORD *)a4 )
                    goto LABEL_88;
                }
              }
              else
              {
LABEL_88:
                if ( v53 + 4 >= v53 )
                {
                  v8 = 0;
                  if ( v53 + 20 > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_63;
                  *(_DWORD *)v53 = 16;
                  *(_OWORD *)(v53 + 4) = v57;
                  ++*(_DWORD *)a4;
                  goto LABEL_92;
                }
              }
              goto LABEL_82;
            }
LABEL_76:
            if ( v8 < 0 )
              goto LABEL_92;
            goto LABEL_77;
          }
          v46 = 0;
          v47 = *(_QWORD *)(a4 + 8);
          if ( v40 )
          {
            while ( 1 )
            {
              v48 = *(_DWORD *)v47 + 4;
              if ( *(_DWORD *)v47 >= 0xFFFFFFFC )
                break;
              if ( v47 + v48 < v47 )
                goto LABEL_82;
              ++v46;
              v47 += v48;
              if ( v46 >= v40 )
                goto LABEL_73;
            }
            v8 = -1073741675;
            goto LABEL_76;
          }
LABEL_73:
          if ( v47 + 4 >= v47 )
          {
            v8 = 0;
            if ( v47 + 12 > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_63;
            *(_DWORD *)v47 = 8;
            *(_QWORD *)(v47 + 4) = v7;
            ++*(_DWORD *)a4;
            goto LABEL_76;
          }
        }
LABEL_82:
        v8 = -1073741675;
        goto LABEL_92;
      }
    }
  }
LABEL_91:
  v8 = -1073741675;
LABEL_92:
  if ( v29 )
    ExFreePoolWithTag(v29, 0x20534C53u);
  return (unsigned int)v8;
}
