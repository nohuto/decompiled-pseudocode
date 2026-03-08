/*
 * XREFs of sub_140A48280 @ 0x140A48280
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A48280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  unsigned int i; // ecx
  __int64 v8; // r8
  unsigned int *v9; // rdx
  unsigned int v10; // edx
  __int64 *v11; // rbp
  __int64 v12; // rbp
  unsigned int v13; // ebx
  int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  unsigned int *v17; // rsi
  __int64 Pool2; // rax
  __int64 v19; // r9
  int v20; // r15d
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _DWORD *v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned __int64 j; // rdx
  unsigned int v28; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0; i < 3; ++i )
  {
    v8 = *v4;
    v9 = v4 + 1;
    if ( v4 + 1 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v9 + v8);
    if ( (unsigned int *)((char *)v9 + v8) < v9 )
      return (unsigned int)-1073741675;
  }
  v10 = *v4;
  if ( v4 + 1 < v4 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( v10 )
    v11 = (__int64 *)(v4 + 1);
  if ( v10 != 8 )
    return (unsigned int)-1073741789;
  v12 = *v11;
  if ( !qword_140D533B0 )
    return (unsigned int)-1073741637;
  v13 = qword_140D533B0();
  if ( (v13 & 0x80000000) != 0 )
    return v13;
  v14 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v15 = *(_DWORD *)(a2 + 16) + 52;
  v16 = v13;
  if ( v15 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v13 = v15 + v14 < v15 ? 0xC0000095 : 0;
  if ( v15 + v14 < v15 )
    return v13;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v17 = (unsigned int *)(a4 + 4);
  *(_DWORD *)(a4 + 4) = 20;
  v13 = 0;
  Pool2 = ExAllocatePool2(256LL, 20LL, 542329939LL);
  if ( Pool2 )
  {
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v13 = -1073741801;
  }
  if ( (v13 & 0x80000000) == 0 )
  {
    v19 = *(_QWORD *)(a4 + 8);
    v20 = v16 | 0x10000000;
    if ( !v19 )
    {
      v21 = *v17 + 8;
      if ( v21 < *v17 )
      {
LABEL_25:
        *v17 = -1;
        return (unsigned int)-1073741675;
      }
      *v17 = v21;
LABEL_35:
      ++*(_DWORD *)a4;
      v24 = *(_QWORD *)(a4 + 8);
      if ( !v24 )
      {
        v25 = *v17 + 12;
        if ( v25 >= *v17 )
        {
          *v17 = v25;
          ++*(_DWORD *)a4;
          return 0;
        }
        goto LABEL_25;
      }
      v26 = 0;
      for ( j = *(_QWORD *)(a4 + 8); v26 < *(_DWORD *)a4; j += v28 )
      {
        v28 = *(_DWORD *)j + 4;
        if ( *(_DWORD *)j >= 0xFFFFFFFC || j + v28 < j )
          return (unsigned int)-1073741675;
        ++v26;
      }
      if ( j + 4 >= j )
      {
        v13 = 0;
        if ( j + 12 <= v24 + (unsigned __int64)*v17 )
        {
          *(_DWORD *)j = 8;
          *(_QWORD *)(j + 4) = v12;
          ++*(_DWORD *)a4;
          return v13;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    v22 = 0;
    v23 = *(_DWORD **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( *v23 < 0xFFFFFFFC && (_DWORD *)((char *)v23 + (unsigned int)(*v23 + 4)) >= v23 )
      {
        ++v22;
        v23 = (_DWORD *)((char *)v23 + (unsigned int)(*v23 + 4));
        if ( v22 >= *(_DWORD *)a4 )
          goto LABEL_31;
      }
      return (unsigned int)-1073741675;
    }
LABEL_31:
    if ( v23 + 1 < v23 )
      return (unsigned int)-1073741675;
    if ( (unsigned __int64)(v23 + 2) <= v19 + (unsigned __int64)*v17 )
    {
      *v23 = 4;
      v23[1] = v20;
      goto LABEL_35;
    }
    return (unsigned int)-1073741789;
  }
  return v13;
}
