/*
 * XREFs of sub_140963538 @ 0x140963538
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     StringCbLengthW @ 0x140290AA4 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140963538(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // r8
  unsigned int v12; // r8d
  unsigned int *v13; // rdx
  unsigned int *v14; // rax
  const wchar_t *v15; // r15
  size_t v16; // rsi
  unsigned int j; // r8d
  __int64 v18; // rax
  unsigned int *v19; // rdx
  size_t v20; // rdx
  unsigned int *v21; // rax
  const wchar_t *v22; // rbp
  size_t v23; // rsi
  __int64 v24; // r11
  unsigned int v25; // eax
  size_t v26; // rbp
  PVOID PoolWithTag; // rax
  PVOID v28; // rbx
  void *v29; // r12
  int v30; // r15d
  unsigned int k; // ecx
  __int64 v32; // r8
  unsigned int *v33; // rdx
  size_t v34; // rcx
  int v35; // ebx
  __int64 v36; // r11
  unsigned int v37; // eax
  size_t v38; // rdi
  PVOID v39; // rax
  PVOID v40; // rbx
  PVOID v41; // rdi
  _DWORD *v42; // rax
  int v43; // ebx
  unsigned int v44; // r8d
  __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int64 v52; // rax
  size_t pcbLength; // [rsp+30h] [rbp-58h] BYREF
  __int64 v55; // [rsp+38h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-48h]

  v55 = 0LL;
  P = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = v7;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_18;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_18;
    }
    v12 = *v8;
    v13 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_18:
      v6 = -1073741675;
      goto LABEL_19;
    }
    v14 = 0LL;
    if ( v12 )
      v14 = v13;
    v6 = 0;
    if ( v12 != 8 )
      return (unsigned int)-1073741789;
    v55 = *(_QWORD *)v14;
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_19:
  if ( v6 >= 0 )
  {
    pcbLength = 0LL;
    v15 = 0LL;
    LODWORD(v16) = 0;
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = *v7;
        v19 = v7 + 1;
        if ( v7 + 1 < v7 )
          goto LABEL_39;
        v7 = (unsigned int *)((char *)v19 + v18);
        if ( (unsigned int *)((char *)v19 + v18) < v19 )
          goto LABEL_39;
      }
      v20 = *v7;
      if ( v7 + 1 < v7 )
      {
LABEL_39:
        v6 = -1073741675;
        goto LABEL_40;
      }
      if ( (_DWORD)v20 )
        v15 = (const wchar_t *)(v7 + 1);
      v6 = 0;
      if ( (_DWORD)v20
        && (v20 & 1) == 0
        && !v15[(v20 >> 1) - 1]
        && StringCbLengthW(v15, v20, &pcbLength) >= 0
        && pcbLength + 2 == v24 )
      {
        v16 = pcbLength >> 1;
        goto LABEL_40;
      }
      return (unsigned int)-1073741762;
    }
    v6 = -1073741811;
LABEL_40:
    if ( v6 >= 0 )
    {
      v25 = 2 * v16 + 2;
      if ( 2 * (_DWORD)v16 == -2 )
        return (unsigned int)-1073741762;
      v26 = v25;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v25, 0x20534C53u);
      v28 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, v15, v26);
      v29 = v28;
      v30 = v16;
      v21 = *(unsigned int **)(a1 + 8);
      v22 = 0LL;
      pcbLength = 0LL;
      LODWORD(v23) = 0;
      if ( v21 && *(_DWORD *)a1 > 5u )
      {
        for ( k = 0; k < 5; ++k )
        {
          v32 = *v21;
          v33 = v21 + 1;
          if ( v21 + 1 < v21 )
            goto LABEL_63;
          v21 = (unsigned int *)((char *)v33 + v32);
          if ( (unsigned int *)((char *)v33 + v32) < v33 )
            goto LABEL_63;
        }
        v34 = *v21;
        if ( v21 + 1 < v21 )
        {
LABEL_63:
          v6 = -1073741675;
          goto LABEL_64;
        }
        if ( (_DWORD)v34 )
          v22 = (const wchar_t *)(v21 + 1);
        v6 = 0;
        if ( (_DWORD)v34
          && (v34 & 1) == 0
          && !v22[(v34 >> 1) - 1]
          && StringCbLengthW(v22, v34, &pcbLength) >= 0
          && pcbLength + 2 == v36 )
        {
          v23 = pcbLength >> 1;
          goto LABEL_64;
        }
LABEL_54:
        v6 = -1073741762;
LABEL_90:
        v41 = P;
        goto LABEL_91;
      }
      v6 = -1073741811;
LABEL_64:
      if ( v6 < 0 )
        goto LABEL_90;
      v37 = 2 * v23 + 2;
      if ( 2 * (_DWORD)v23 == -2 )
        goto LABEL_54;
      v38 = v37;
      v39 = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
      v40 = v39;
      if ( !v39 )
      {
        v6 = -1073741801;
        goto LABEL_90;
      }
      memmove(v39, v22, v38);
      v41 = v40;
      v35 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, PVOID))qword_140D2D4A0)(
              (unsigned int)(2 * v30 + 2),
              v29,
              (unsigned int)(2 * v23 + 2),
              v40);
      if ( v35 >= 0 )
      {
        v35 = qword_140D2D440 ? qword_140D2D440(v29) : -1073741637;
        if ( v35 == -1073741198 )
          v35 = 0;
      }
      *(_DWORD *)(a4 + 4) = 20;
      v42 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
      if ( !v42 )
      {
        v6 = -1073741801;
LABEL_91:
        if ( v29 )
          ExFreePoolWithTag(v29, 0x20534C53u);
        if ( v41 )
          ExFreePoolWithTag(v41, 0x20534C53u);
        return (unsigned int)v6;
      }
      *(_QWORD *)(a4 + 8) = v42;
      *(_DWORD *)a4 = 0;
      v43 = v35 | 0x10000000;
      if ( v42 + 1 >= v42 )
      {
        if ( v42 + 2 > (_DWORD *)((char *)v42 + *(unsigned int *)(a4 + 4)) )
        {
LABEL_76:
          v6 = -1073741789;
          goto LABEL_91;
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
          v6 = v48 < v46 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v47;
          if ( v48 >= v46 )
          {
            v6 = 0;
            *(_DWORD *)a4 = v44 + 1;
          }
          goto LABEL_91;
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
              goto LABEL_86;
          }
        }
        else
        {
LABEL_86:
          if ( v49 + 4 >= v49 )
          {
            v6 = 0;
            if ( v49 + 12 <= v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v52 = v55;
              *(_DWORD *)v49 = 8;
              *(_QWORD *)(v49 + 4) = v52;
              ++*(_DWORD *)a4;
              goto LABEL_91;
            }
            goto LABEL_76;
          }
        }
      }
      v6 = -1073741675;
      goto LABEL_91;
    }
  }
  return (unsigned int)v6;
}
