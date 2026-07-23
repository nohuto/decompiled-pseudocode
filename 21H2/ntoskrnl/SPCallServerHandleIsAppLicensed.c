/*
 * XREFs of SPCallServerHandleIsAppLicensed @ 0x140614020
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

__int64 __fastcall SPCallServerHandleIsAppLicensed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r12d
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  signed int v13; // ebx
  unsigned int *v14; // rax
  unsigned int *v15; // rax
  unsigned int j; // edx
  unsigned int v17; // ebp
  PVOID v18; // rax
  void *v19; // rbx
  void *v20; // rbp
  _DWORD *v21; // rcx
  unsigned int *v22; // rax
  unsigned int n; // edx
  __int64 v24; // r9
  unsigned int *v25; // r8
  unsigned int ii; // edx
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // r8d
  unsigned int *v33; // rdx
  unsigned int *v34; // rax
  const wchar_t *v35; // r14
  size_t v36; // r9
  unsigned int v37; // ebp
  PVOID PoolWithTag; // rax
  void *v39; // rbx
  unsigned int *v40; // rax
  const wchar_t *v41; // r14
  size_t v42; // r8
  int v43; // edi
  int v44; // edx
  unsigned int v45; // ecx
  _DWORD *v46; // rax
  int v47; // edi
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  unsigned int v50; // eax
  unsigned int v51; // r8d
  __int64 v52; // r9
  int v53; // r11d
  unsigned int v54; // edx
  int v55; // eax
  unsigned int v56; // ecx
  __int64 v57; // rax
  unsigned int *v58; // rdx
  unsigned int k; // r8d
  __int64 v60; // r9
  unsigned int *v61; // rcx
  unsigned int m; // edx
  unsigned int v63; // r8d
  unsigned int *v64; // rdx
  __int64 v65; // r9
  unsigned int *v66; // r8
  size_t v67; // rdx
  __int64 v68; // r11
  size_t v69; // rcx
  __int64 v70; // r11
  __int64 v71; // rax
  _DWORD *v72; // r8
  __int64 v73; // rax
  unsigned int v74; // ecx
  unsigned int v75; // eax
  size_t pcbLength; // [rsp+48h] [rbp-60h] BYREF
  PVOID P; // [rsp+50h] [rbp-58h]
  PVOID v78; // [rsp+58h] [rbp-50h]
  __int64 v79; // [rsp+60h] [rbp-48h]
  __int128 v80; // [rsp+68h] [rbp-40h]

  v79 = 0LL;
  P = 0LL;
  v78 = 0LL;
  v7 = 0;
  v80 = 0LL;
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
        goto LABEL_8;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_8;
    }
    v63 = *v9;
    v64 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_8:
      v13 = -1073741675;
    }
    else
    {
      v14 = 0LL;
      if ( v63 )
        v14 = v64;
      v13 = 0;
      if ( v63 != 8 )
        return (unsigned int)-1073741789;
      v79 = *(_QWORD *)v14;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    v15 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v65 = *v15;
      v66 = v15 + 1;
      if ( v15 + 1 < v15 )
        goto LABEL_115;
      v15 = (unsigned int *)((char *)v66 + v65);
      if ( (unsigned int *)((char *)v66 + v65) < v66 )
        goto LABEL_115;
    }
    v32 = *v15;
    v33 = v15 + 1;
    if ( v15 + 1 >= v15 )
    {
      v34 = 0LL;
      if ( v32 )
        v34 = v33;
      v13 = 0;
      if ( v32 == 4 )
      {
        v7 = *v34;
        goto LABEL_53;
      }
      return (unsigned int)-1073741789;
    }
LABEL_115:
    v13 = -1073741675;
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_53:
  if ( v13 < 0 )
    return (unsigned int)v13;
  pcbLength = 0LL;
  v35 = 0LL;
  LODWORD(v36) = 0;
  if ( v8 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v57 = *v8;
      v58 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_56;
      v8 = (unsigned int *)((char *)v58 + v57);
      if ( (unsigned int *)((char *)v58 + v57) < v58 )
        goto LABEL_56;
    }
    v67 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_56:
      v13 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v67 )
        v35 = (const wchar_t *)(v8 + 1);
      v13 = 0;
      if ( !(_DWORD)v67
        || (v67 & 1) != 0
        || v35[(v67 >> 1) - 1]
        || StringCbLengthW(v35, v67, &pcbLength) < 0
        || pcbLength + 2 != v68 )
      {
        return (unsigned int)-1073741762;
      }
      v36 = pcbLength >> 1;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( 2 * (_DWORD)v36 == -2 )
    return (unsigned int)-1073741762;
  v37 = 2 * v36 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
  v39 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, v35, v37);
  P = v39;
  v40 = *(unsigned int **)(a1 + 8);
  v41 = 0LL;
  pcbLength = 0LL;
  LODWORD(v42) = 0;
  if ( v40 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v60 = *v40;
      v61 = v40 + 1;
      if ( v40 + 1 < v40 )
        goto LABEL_19;
      v40 = (unsigned int *)((char *)v61 + v60);
      if ( (unsigned int *)((char *)v61 + v60) < v61 )
        goto LABEL_19;
    }
    v69 = *v40;
    if ( v40 + 1 < v40 )
    {
LABEL_19:
      v13 = -1073741675;
    }
    else
    {
      if ( (_DWORD)v69 )
        v41 = (const wchar_t *)(v40 + 1);
      v13 = 0;
      if ( !(_DWORD)v69
        || (v69 & 1) != 0
        || v41[(v69 >> 1) - 1]
        || StringCbLengthW(v41, v69, &pcbLength) < 0
        || pcbLength + 2 != v70 )
      {
        goto LABEL_96;
      }
      v42 = pcbLength >> 1;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 < 0 )
    goto LABEL_37;
  if ( 2 * (_DWORD)v42 == -2 )
  {
LABEL_96:
    v13 = -1073741762;
    goto LABEL_37;
  }
  v17 = 2 * v42 + 2;
  v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
  v19 = v18;
  if ( v18 )
  {
    memmove(v18, v41, v17);
    v20 = v19;
    v78 = v19;
    v21 = *(_DWORD **)(a1 + 8);
    if ( v21 && *(_DWORD *)a1 > 7u )
    {
      v22 = *(unsigned int **)(a1 + 8);
      for ( n = 0; n < 7; ++n )
      {
        v24 = *v22;
        v25 = v22 + 1;
        if ( v22 + 1 < v22 )
          goto LABEL_153;
        v22 = (unsigned int *)((char *)v25 + v24);
        if ( (unsigned int *)((char *)v25 + v24) < v25 )
          goto LABEL_153;
      }
      if ( v22 + 1 < v22 )
      {
LABEL_153:
        v13 = -1073741675;
        goto LABEL_37;
      }
      if ( *(_DWORD *)a1 > 8u )
      {
        for ( ii = 0; ii < 8; ++ii )
        {
          v71 = (unsigned int)*v21;
          v72 = v21 + 1;
          if ( v21 + 1 < v21 )
            goto LABEL_142;
          v21 = (_DWORD *)((char *)v72 + v71);
          if ( (_DWORD *)((char *)v72 + v71) < v72 )
            goto LABEL_142;
        }
        if ( v21 + 1 < v21 )
        {
LABEL_142:
          v13 = -1073741675;
          goto LABEL_64;
        }
        v13 = 0;
        if ( *v21 == 4 )
          goto LABEL_64;
        v13 = -1073741789;
        goto LABEL_37;
      }
      v13 = -1073741811;
LABEL_64:
      if ( v13 >= 0 )
      {
        if ( qword_140D2D3D8 )
          v43 = qword_140D2D3D8(v7, P, v20);
        else
          v43 = -1073700223;
        v44 = *(_DWORD *)(a2 + 32);
        if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0 || (v45 = *(_DWORD *)(a2 + 16) + 68, v45 < *(_DWORD *)(a2 + 16) + 64) )
        {
          v13 = -1073741675;
          goto LABEL_37;
        }
        v13 = v45 + v44 < v45 ? 0xC0000095 : 0;
        if ( v45 + v44 < v45 )
          goto LABEL_37;
        *(_DWORD *)(a4 + 4) = 40;
        v46 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
        if ( v46 )
        {
          *(_QWORD *)(a4 + 8) = v46;
          *(_DWORD *)a4 = 0;
          v47 = v43 | 0x10000000;
          if ( v46 + 1 < v46 )
            goto LABEL_47;
          if ( v46 + 2 > (_DWORD *)((char *)v46 + *(unsigned int *)(a4 + 4)) )
          {
LABEL_146:
            v13 = -1073741789;
            goto LABEL_37;
          }
          *v46 = 4;
          v46[1] = v47;
          v51 = ++*(_DWORD *)a4;
          v52 = *(_QWORD *)(a4 + 8);
          v53 = -1;
          if ( v52 )
          {
            v49 = *(_QWORD *)(a4 + 8);
            v48 = 0;
            if ( v51 )
            {
              while ( 1 )
              {
                v50 = *(_DWORD *)v49 + 4;
                if ( *(_DWORD *)v49 >= 0xFFFFFFFC )
                  break;
                if ( v49 + v50 < v49 )
                  goto LABEL_47;
                ++v48;
                v49 += v50;
                if ( v48 >= v51 )
                  goto LABEL_77;
              }
              v13 = -1073741675;
            }
            else
            {
LABEL_77:
              if ( v49 + 4 < v49 )
                goto LABEL_47;
              v13 = 0;
              if ( v49 + 12 > v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                goto LABEL_146;
              v73 = v79;
              *(_DWORD *)v49 = 8;
              *(_QWORD *)(v49 + 4) = v73;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v54 = *(_DWORD *)(a4 + 4);
            v55 = -1;
            v56 = v54 + 12;
            if ( v54 + 12 >= v54 )
              v55 = v54 + 12;
            v13 = v56 < v54 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v55;
            if ( v56 >= v54 )
            {
              *(_DWORD *)a4 = v51 + 1;
              goto LABEL_44;
            }
          }
          if ( v13 < 0 )
            goto LABEL_37;
LABEL_44:
          v30 = *(_QWORD *)(a4 + 8);
          if ( !v30 )
          {
            v74 = *(_DWORD *)(a4 + 4);
            v75 = v74 + 20;
            if ( v74 + 20 >= v74 )
              v53 = v74 + 20;
            v13 = v75 < v74 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v53;
            if ( v75 >= v74 )
            {
              ++*(_DWORD *)a4;
              v13 = 0;
            }
            goto LABEL_37;
          }
          v28 = *(_QWORD *)(a4 + 8);
          v27 = 0;
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v31 = *(_DWORD *)v28 + 4;
              if ( *(_DWORD *)v28 >= 0xFFFFFFFC || v28 + v31 < v28 )
                break;
              ++v27;
              v28 += v31;
              if ( v27 >= *(_DWORD *)a4 )
                goto LABEL_34;
            }
          }
          else
          {
LABEL_34:
            if ( v28 + 4 >= v28 )
            {
              v13 = 0;
              if ( v28 + 20 <= v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v28 = 16;
                *(_OWORD *)(v28 + 4) = v80;
                ++*(_DWORD *)a4;
                goto LABEL_37;
              }
              goto LABEL_146;
            }
          }
LABEL_47:
          v13 = -1073741675;
          goto LABEL_37;
        }
        v13 = -1073741801;
      }
    }
    else
    {
      v13 = -1073741811;
    }
  }
  else
  {
    v13 = -1073741801;
  }
LABEL_37:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v78 )
    ExFreePoolWithTag(v78, 0x20534C53u);
  return (unsigned int)v13;
}
