/*
 * XREFs of sub_140A0E590 @ 0x140A0E590
 * Callers:
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 * Callees:
 *     StringCbLengthW @ 0x140354748 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A0E590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  unsigned int v7; // ebx
  const wchar_t *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // rax
  unsigned int *v18; // r8
  size_t v19; // rdx
  _WORD *v20; // rbp
  __int64 v21; // r11
  size_t v22; // r14
  unsigned int v23; // eax
  size_t v24; // r15
  void *Pool2; // rax
  void *v26; // r13
  unsigned int *v27; // rax
  unsigned int k; // ecx
  __int64 v29; // r8
  unsigned int *v30; // rdx
  size_t v31; // rcx
  const wchar_t *v32; // rbp
  __int64 v33; // r11
  size_t v34; // rbx
  unsigned int v35; // r12d
  void *v36; // rax
  void *v37; // r15
  int v38; // ebx
  _DWORD *v39; // rax
  int v40; // ebx
  unsigned int v41; // r8d
  __int64 v42; // r9
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned int m; // ecx
  unsigned int v46; // eax
  __int64 v48; // [rsp+30h] [rbp-38h]
  size_t pcbLength; // [rsp+70h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(const wchar_t **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = (unsigned int *)v8;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v13 = *v9;
  v14 = v9 + 1;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( v13 )
    v15 = v14;
  if ( v13 != 8 )
    return (unsigned int)-1073741789;
  v48 = *(_QWORD *)v15;
  pcbLength = 0LL;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v17 = *(unsigned int *)v8;
    v18 = (unsigned int *)(v8 + 2);
    if ( v8 + 2 < v8 )
      return (unsigned int)-1073741675;
    v8 = (const wchar_t *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  v19 = *(unsigned int *)v8;
  if ( v8 + 2 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v19 )
    return (unsigned int)-1073741762;
  v20 = v8 + 2;
  if ( (v19 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v20[(v19 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v8 + 2, v19, &pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength + 2 != v21 )
    return (unsigned int)-1073741762;
  v22 = pcbLength >> 1;
  v23 = 2 * (pcbLength >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength >> 1) == -2 )
    return (unsigned int)-1073741762;
  v24 = v23;
  Pool2 = (void *)ExAllocatePool2(256LL, v23, 542329939LL);
  v26 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v20, v24);
  v27 = *(unsigned int **)(a1 + 8);
  pcbLength = 0LL;
  if ( !v27 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_64;
  }
  for ( k = 0; k < 5; ++k )
  {
    v29 = *v27;
    v30 = v27 + 1;
    if ( v27 + 1 < v27 )
      goto LABEL_63;
    v27 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      goto LABEL_63;
  }
  v31 = *v27;
  if ( v27 + 1 < v27 )
    goto LABEL_63;
  if ( !(_DWORD)v31
    || (v32 = (const wchar_t *)(v27 + 1),
        (v31 & 1) != 0
     || *((_WORD *)v27 + (v31 >> 1) + 1)
     || StringCbLengthW(v32, v31, &pcbLength) < 0
     || pcbLength + 2 != v33
     || (v34 = pcbLength >> 1, 2 * (unsigned int)(pcbLength >> 1) == -2)) )
  {
    v7 = -1073741762;
    goto LABEL_64;
  }
  v35 = 2 * (pcbLength >> 1) + 2;
  v36 = (void *)ExAllocatePool2(256LL, v35, 542329939LL);
  v37 = v36;
  if ( !v36 )
    goto LABEL_55;
  memmove(v36, v32, v35);
  v6 = v37;
  v38 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, void *))qword_140D3B470)(
          (unsigned int)(2 * v22 + 2),
          v26,
          (unsigned int)(2 * v34 + 2),
          v37);
  if ( v38 >= 0 )
  {
    if ( qword_140D3B410 )
    {
      v38 = qword_140D3B410(v26);
      if ( v38 == -1073741198 )
        v38 = 0;
    }
    else
    {
      v38 = -1073741637;
    }
  }
  *(_DWORD *)(a4 + 4) = 20;
  v39 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 542329939LL);
  if ( !v39 )
  {
LABEL_55:
    v7 = -1073741801;
    goto LABEL_64;
  }
  *(_QWORD *)(a4 + 8) = v39;
  *(_DWORD *)a4 = 0;
  v40 = v38 | 0x10000000;
  if ( v39 + 1 < v39 )
    goto LABEL_63;
  if ( v39 + 2 > (_DWORD *)((char *)v39 + *(unsigned int *)(a4 + 4)) )
  {
LABEL_58:
    v7 = -1073741789;
    goto LABEL_64;
  }
  *v39 = 4;
  v39[1] = v40;
  v41 = ++*(_DWORD *)a4;
  v42 = *(_QWORD *)(a4 + 8);
  if ( !v42 )
  {
    v43 = *(_DWORD *)(a4 + 4);
    if ( v43 + 12 >= v43 )
    {
      *(_DWORD *)(a4 + 4) = v43 + 12;
      *(_DWORD *)a4 = v41 + 1;
      v7 = 0;
      goto LABEL_64;
    }
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_63;
  }
  v44 = *(_QWORD *)(a4 + 8);
  for ( m = 0; m < v41; v44 += v46 )
  {
    v46 = *(_DWORD *)v44 + 4;
    if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
      goto LABEL_63;
    ++m;
  }
  if ( v44 + 4 < v44 )
  {
LABEL_63:
    v7 = -1073741675;
    goto LABEL_64;
  }
  v7 = 0;
  if ( v44 + 12 > v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_58;
  *(_DWORD *)v44 = 8;
  *(_QWORD *)(v44 + 4) = v48;
  ++*(_DWORD *)a4;
LABEL_64:
  ExFreePoolWithTag(v26, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
