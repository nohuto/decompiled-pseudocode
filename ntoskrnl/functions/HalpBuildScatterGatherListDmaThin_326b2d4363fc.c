__int64 __fastcall HalpBuildScatterGatherListDmaThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int **a13)
{
  __int64 **v13; // rbx
  unsigned int **v15; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // edi
  unsigned __int64 v19; // rdx
  unsigned int *Pool2; // r14
  unsigned int *v21; // rdi
  int v22; // ebx
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  __int64 v28; // [rsp+78h] [rbp+20h]

  a10 = 0;
  v13 = a4;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v15 = a13;
  if ( a13 )
    *a13 = 0LL;
  while ( 1 )
  {
    v17 = *((unsigned int *)v13 + 10);
    if ( a5 < v17 )
      break;
    v13 = (__int64 **)*v13;
    a5 -= v17;
    if ( !v13 )
      return (unsigned int)-1073741811;
  }
  HalpGetNumberOfSGElementsDmaThin(v13, a5, a6, &a10);
  v18 = a10;
  v28 = 3LL * a10;
  v19 = 24LL * a10 + 120;
  if ( a11 )
  {
    if ( a12 < v19 )
      return (unsigned int)-1073741789;
    Pool2 = a11;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(66LL, v19, 1147953480LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  *Pool2 = v18;
  v21 = &Pool2[2 * v28 + 4];
  *((_BYTE *)v21 + 97) = a11 == 0LL;
  *((_QWORD *)v21 + 3) = a1;
  *((_QWORD *)v21 + 4) = a2;
  *((_QWORD *)v21 + 5) = *(_QWORD *)(a2 + 32);
  *((_QWORD *)v21 + 8) = a8;
  *((_QWORD *)v21 + 9) = a9;
  v21[15] = a5;
  v21[14] = a6;
  *((_QWORD *)v21 + 6) = v13;
  *((_QWORD *)v21 + 10) = Pool2;
  *((_BYTE *)v21 + 96) = a7 & 1;
  v21[4] = 2;
  *((_BYTE *)v21 + 98) = 0;
  *((_QWORD *)v21 + 11) = 0LL;
  if ( a3 )
  {
    *(_QWORD *)(a3 + 88) = v21;
    *((_QWORD *)v21 + 11) = a3 + 8;
    _m_prefetchw((const void *)(a3 + 8));
    v24 = *(_DWORD *)(a3 + 8);
    do
    {
      v25 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 8), v24 | 4, v24);
    }
    while ( v25 != v24 );
    if ( (v24 & 2) != 0 )
    {
      v22 = -1073741536;
LABEL_22:
      if ( *((_BYTE *)v21 + 97) )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v22;
    }
  }
  v22 = HalpConstructScatterGatherListDmaThin(v21);
  if ( v22 < 0 )
    goto LABEL_22;
  if ( v15 )
    *v15 = Pool2;
  return (unsigned int)v22;
}
