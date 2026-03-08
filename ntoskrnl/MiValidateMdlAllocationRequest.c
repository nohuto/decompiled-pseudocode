/*
 * XREFs of MiValidateMdlAllocationRequest @ 0x1402B3DE8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMdlAllocationRequest(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        int a8,
        signed int a9,
        __int64 a10)
{
  signed int v10; // r10d
  int *v11; // r11
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // edi
  __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned int v22; // eax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  int v26; // edx

  v10 = a9;
  v11 = (int *)(a1 + 84);
  if ( (a9 & 0x400000) != 0 )
  {
    v10 = a9 & 0xFFBFFFFF;
    *v11 |= 2u;
  }
  if ( (v10 & 0x100) != 0 )
  {
    if ( (_UNKNOWN *)a2 != &MiSystemPartition )
      return 3221225485LL;
    *v11 |= 2u;
  }
  if ( (*(_DWORD *)(a2 + 4) & 0x10) != 0 )
    *v11 |= 2u;
  v14 = a3 >> 12;
  v15 = a4 >> 12;
  if ( a4 >> 12 < qword_140C65820 )
  {
    if ( v15 >= *(_QWORD *)(a2 + 17032) && !v14 )
      v10 |= 0x10000u;
  }
  else
  {
    v15 = qword_140C65820;
    v16 = v10 | 0x10000;
    if ( v14 )
      v16 = v10;
    v10 = v16;
  }
  if ( (a5 & 0xFFF) != 0 )
    return 3221225485LL;
  v17 = a5 >> 12;
  if ( ((v17 - 1) & v17) != 0 )
  {
    if ( (v10 & 0x40) != 0 )
      return 3221225485LL;
    v17 = 0LL;
  }
  if ( (v10 & 0x400) != 0 && ((v10 & 0x370) != 0 || (v10 & 0x10001) != 0x10001 || ((a7 - 1) & 0xFFFFFFFD) != 0) )
    return 3221225485LL;
  *(_QWORD *)(a1 + 48) = 1LL;
  v18 = 1LL;
  if ( v10 >= 0 )
  {
    v19 = v10 & 4;
    goto LABEL_15;
  }
  if ( (v10 & 0x1000) == 0 )
  {
    if ( (v10 & 0x1000000) != 0 )
    {
      v18 = 512LL;
    }
    else
    {
      if ( (v10 & 0x2000000) == 0 )
        goto LABEL_50;
      v18 = 0x40000LL;
    }
    *(_QWORD *)(a1 + 48) = v18;
    goto LABEL_50;
  }
  *(_QWORD *)(a1 + 48) = 16LL;
  v18 = 16LL;
LABEL_50:
  if ( (v10 & 4) != 0 )
    return 3221225485LL;
  *v11 |= 2u;
  v19 = 0;
LABEL_15:
  v20 = a6;
  if ( a6 > 4294963200LL * v18 )
  {
    if ( v19 )
      return 3221225485LL;
    v20 = 4294963200LL * v18;
    if ( (v10 & 0x60) != 0 && v18 == 1 && v17 )
      v20 = (4294963200LL * v18) & ~((v17 << 12) - 1);
  }
  v21 = (unsigned __int64)(v20 + 4095) >> 12;
  if ( (v10 & 0x40) != 0 )
  {
    if ( (v14 & 0xFFFFFFFFFFEFFFFFuLL) != 0 || v15 < *(_QWORD *)(a2 + 17032) )
      return 3221225485LL;
    v22 = 0;
    v23 = MiLargePageSizes;
    while ( v17 != *v23 )
    {
      ++v22;
      ++v23;
      if ( v22 >= 3 )
      {
        if ( v22 == 3 )
          return 3221225485LL;
        break;
      }
    }
    if ( v21 % v17 && (v19 || v21 < v17) )
      return 3221225485LL;
  }
  v24 = (unsigned __int64)(~(unsigned __int8)*(_DWORD *)(a2 + 4) & 0x10) << 6;
  *(_QWORD *)(a1 + 40) = v24;
  v25 = *(_QWORD *)(a2 + 17280) - v24;
  if ( (__int64)v25 <= 0 )
    return 3221225485LL;
  if ( v21 <= v25 )
  {
    v25 = v21;
    if ( v21 )
      goto LABEL_27;
    return 3221225485LL;
  }
  if ( v19 )
    return 3221225626LL;
  if ( (v10 & 0x40) != 0 )
  {
    if ( v25 % v17 && v25 < v17 )
      return 3221225626LL;
    goto LABEL_67;
  }
  if ( (v10 & 0x20) != 0 && v17 )
LABEL_67:
    v25 &= ~(v17 - 1);
  if ( !v25 || v25 < v17 )
    return 3221225626LL;
LABEL_27:
  v26 = *v11;
  *(_DWORD *)(a1 + 60) = a8;
  *(_QWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 72) = a10;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 56) = v10;
  *(_QWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 16) = v15;
  *(_DWORD *)(a1 + 80) = a7;
  *(_QWORD *)(a1 + 32) = v25;
  if ( (v26 & 2) == 0 && (v10 & 0x10000) == 0 )
    *v11 = v26 | 2;
  return 0LL;
}
