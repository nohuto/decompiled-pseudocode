/*
 * XREFs of HalpBuildScatterGatherListDmarThin @ 0x140511900
 * Callers:
 *     HalGetScatterGatherListDmarThin @ 0x140454980 (HalGetScatterGatherListDmarThin.c)
 *     HalBuildScatterGatherListDmarThin @ 0x140511180 (HalBuildScatterGatherListDmarThin.c)
 *     HalBuildScatterGatherListDmarThinEx @ 0x140511200 (HalBuildScatterGatherListDmarThinEx.c)
 *     HalGetScatterGatherListDmarThinEx @ 0x140511650 (HalGetScatterGatherListDmarThinEx.c)
 * Callees:
 *     HalpGetNumberOfSGElementsDmarThin @ 0x140454A50 (HalpGetNumberOfSGElementsDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140511AA4 (HalpConstructScatterGatherListDmarThin.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpBuildScatterGatherListDmarThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        char *P,
        unsigned int a12,
        _QWORD *a13)
{
  __int64 v13; // rbx
  int v15; // ebx
  unsigned __int64 v17; // rax
  unsigned int NumberOfSGElementsDmarThin; // eax
  __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  char *Pool2; // rbp
  char *v22; // rdi

  v13 = a4;
  if ( a4 )
  {
    if ( a13 )
      *a13 = 0LL;
    while ( 1 )
    {
      v17 = *(unsigned int *)(v13 + 40);
      if ( a5 < v17 )
        break;
      v13 = *(_QWORD *)v13;
      a5 -= v17;
      if ( !v13 )
        return (unsigned int)-1073741811;
    }
    NumberOfSGElementsDmarThin = HalpGetNumberOfSGElementsDmarThin((__int64 *)v13, a5, a6);
    v19 = 3LL * NumberOfSGElementsDmarThin;
    v20 = 24LL * NumberOfSGElementsDmarThin + 120;
    if ( P )
    {
      if ( a12 < v20 )
        return (unsigned int)-1073741789;
      Pool2 = P;
    }
    else
    {
      Pool2 = (char *)ExAllocatePool2(66LL, v20, 1147953480LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    v22 = &Pool2[8 * v19 + 16];
    v22[97] = P == 0LL;
    *((_QWORD *)v22 + 3) = a1;
    *((_QWORD *)v22 + 4) = a2;
    *((_QWORD *)v22 + 5) = *(_QWORD *)(a2 + 32);
    *((_QWORD *)v22 + 8) = a8;
    *((_QWORD *)v22 + 9) = a9;
    *((_DWORD *)v22 + 15) = a5;
    *((_DWORD *)v22 + 14) = a6;
    *((_QWORD *)v22 + 6) = v13;
    *((_QWORD *)v22 + 10) = Pool2;
    v22[96] = a7 & 1;
    *((_DWORD *)v22 + 4) = 1;
    v22[98] = 0;
    *((_QWORD *)v22 + 11) = 0LL;
    if ( a3 )
    {
      *(_QWORD *)(a3 + 88) = v22;
      *((_QWORD *)v22 + 11) = a3 + 8;
    }
    v15 = HalpConstructScatterGatherListDmarThin(v22);
    if ( v15 < 0 )
    {
      if ( v22[97] )
        ExFreePoolWithTag(Pool2, 0);
    }
    else if ( a13 )
    {
      *a13 = Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
