/*
 * XREFs of MiViewMayContainPage @ 0x1402A12A0
 * Callers:
 *     MiTrimSection @ 0x1402A0034 (MiTrimSection.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiStartingOffset @ 0x14028C530 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x140324190 (MiEndingOffsetWithLock.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiViewMayContainPage(
        __int64 a1,
        _DWORD *a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v8; // r13
  int v10; // r12d
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  PVOID Pool; // rax
  void *v20; // rdi
  int v22; // r8d
  __int64 v23; // rsi
  unsigned int v24; // r8d
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+68h] [rbp+20h]

  v8 = 0LL;
  v10 = -1;
  *a7 = 0LL;
  v11 = *(_QWORD *)(a4 + 16);
  if ( (v11 & 3) != 1 && a2 )
    return 0LL;
  if ( (v11 & 3) != 0 )
  {
    switch ( v11 & 3 )
    {
      case 1uLL:
        v8 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( a2 && *a2 != *(_DWORD *)(v8 + 1088) )
          return 0LL;
        v22 = a3 & 0x20;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          if ( v22 )
            return 0LL;
          v13 = 0LL;
          v15 = 0LL;
        }
        else
        {
          if ( v22 && (*(_DWORD *)(a4 - 48) & 0x280) != 0x200 )
            return 0LL;
          v13 = MiStartingOffset(*(__int64 **)(a4 - 24), *(_QWORD *)(a4 - 16), 0xFFFFFFFF);
          v15 = v13
              + (((*(unsigned int *)(a4 - 68) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 63) << 32))
                - (*(unsigned int *)(a4 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 64) << 32))
                + 1) << 12);
        }
        v11 = (*(unsigned int *)(a4 - 72) | ((unsigned __int64)*(unsigned __int8 *)(a4 - 64) << 32)) << 12;
        break;
      case 2uLL:
        v11 &= ~2uLL;
        v13 = *(_QWORD *)(a4 - 48) << 12;
        v15 = v13 + *(_QWORD *)(a4 - 40);
        break;
      case 3uLL:
        v11 &= 0xFFFFFFFFFFFFFFFCuLL;
        v10 = *(_DWORD *)(a4 + 32);
        v15 = *(_QWORD *)(a4 + 24) - v11 + 1;
        if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
        {
          v23 = a1 + 128;
          if ( (unsigned int)MiGetSystemRegionType(v11) != 1 )
            v10 = -2;
          if ( !v23 )
            return 0LL;
          while ( 1 )
          {
            v24 = v10;
            if ( v10 == -2 )
              v24 = -1;
            v28 = MiStartingOffset((__int64 *)v23, *(_QWORD *)(v23 + 8), v24);
            v25 = MiEndingOffsetWithLock(v23);
            if ( a5 >= v28 && a5 < v25 )
              break;
            v23 = *(_QWORD *)(v23 + 16);
            if ( !v23 )
              return 0LL;
          }
          v26 = *(_QWORD *)(v23 + 8);
          v27 = v26 + 8 * ((a5 - v28) >> 12);
          if ( v27 >= v26 + 8 * (unsigned __int64)*(unsigned int *)(v23 + 44)
            || (*(_WORD *)(v23 + 34) & 2) != 0 && (*(_DWORD *)(a1 + 56) & 0x8000000) != 0 )
          {
            return 0LL;
          }
          v11 += (__int64)(v27 - *(_QWORD *)(a1 + 136)) >> 3 << 12;
        }
        v13 = 0LL;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    v12 = *(_QWORD *)(a4 + 32);
    v13 = 4 * (v12 & 0xFFFFFFFFFFFF0000uLL);
    if ( (v12 & 0x3F) != 0 )
      v14 = (*(_QWORD *)(a4 + 32) & 0x3FLL) << 12;
    else
      v14 = 0x40000LL;
    v15 = v13 + v14;
    if ( v12 >> 62 != 3 )
      return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v16 = 0LL;
    v18 = v11 + 4096;
    goto LABEL_15;
  }
  if ( a5 >= v15 || a6 <= v13 )
    return 0LL;
  v16 = v13;
  if ( a5 >= v13 )
  {
    v16 = a5;
    v11 += a5 - v13;
  }
  v17 = a6 - v16;
  if ( a6 > v15 )
    v17 = v15 - v16;
  v18 = v11 + v17;
LABEL_15:
  Pool = MiAllocatePool(64, 0x30uLL, 0x6156694Du);
  v20 = Pool;
  if ( Pool )
  {
    *((_QWORD *)Pool + 2) = v11;
    *((_QWORD *)Pool + 3) = v18;
    *((_QWORD *)Pool + 1) = v8;
    *((_QWORD *)Pool + 4) = v16;
    *((_DWORD *)Pool + 10) = v10;
    *((_DWORD *)Pool + 11) = *(_DWORD *)(a4 + 16) & 3;
    if ( !v8 || ObReferenceObjectSafeWithTag(v8) )
      *a7 = v20;
    else
      ExFreePoolWithTag(v20, 0);
    return 0LL;
  }
  return 3221225626LL;
}
