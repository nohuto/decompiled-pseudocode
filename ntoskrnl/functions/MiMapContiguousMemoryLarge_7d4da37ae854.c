__int64 __fastcall MiMapContiguousMemoryLarge(
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        _DWORD *a5)
{
  unsigned int v7; // esi
  ULONG_PTR v8; // rcx
  _QWORD *v9; // r12
  __int64 v10; // rbp
  int v11; // r14d
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __int64 i; // r15
  unsigned int v15; // edx
  int v16; // r15d
  __int64 PageTablesForLargeMap; // rsi
  unsigned int AnyMultiplexedVm; // eax
  __int64 v20; // [rsp+48h] [rbp-50h]
  int v21; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+18h]
  int v23; // [rsp+B8h] [rbp+20h]

  v23 = a4;
  v22 = a3;
  v21 = 0;
  *a5 = 0;
  v7 = 1;
  if ( a3 >> 3 == 1 )
  {
    v7 = 0;
  }
  else if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
  {
    v7 = 2;
  }
  v8 = 48 * BugCheckParameter2;
  v9 = (_QWORD *)(v8 - 0x21FFFFFFFFD8LL);
  if ( BugCheckParameter2 > qword_140C65820 )
    LODWORD(v10) = 0;
  else
    v10 = (*v9 >> 54) & 1LL;
  v11 = 3;
  v12 = 0LL;
  v13 = (v8 - 0x220000000000LL) & -(__int64)((_DWORD)v10 != 0);
  v20 = v13;
  for ( i = v13; v12 < a2; i += 48LL )
  {
    if ( BugCheckParameter2 + v12 <= qword_140C65820 && ((*v9 >> 54) & 1) != 0 )
    {
      if ( (a4 & 2) != 0 && ((*(_BYTE *)(i + 34) & 7) != 5 || !_bittest64((const signed __int64 *)(i + 40), 0x35u)) )
        KeBugCheckEx(0x1Au, 0x1160CuLL, BugCheckParameter2 + v12, 0LL, 0LL);
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(i + 34) & 0xC0) == 0xC0 )
      {
        MiAssignInitialPageAttribute(i, v7);
        v13 = v20;
        LOBYTE(a4) = v23;
      }
      if ( *(unsigned __int8 *)(i + 34) >> 6 != v7 )
        break;
      v11 = v7;
    }
    else if ( v13 )
    {
      break;
    }
    ++v12;
    v9 += 6;
  }
  if ( v12 != a2 )
    return 0LL;
  if ( (_DWORD)v10 )
  {
    v16 = v21;
    goto LABEL_17;
  }
  v21 = 0;
  if ( (int)MiReferenceIoPages(1, BugCheckParameter2, a2, v7, &v21, 0LL) < 0 )
    return 0LL;
  v15 = v21;
  if ( ((v21 - 1) & v21) != 0 )
  {
    MiDereferenceIoPages(1, BugCheckParameter2, a2);
    return 0LL;
  }
  v11 = 0;
  while ( (v15 & 1) == 0 )
  {
    ++v11;
    v15 >>= 1;
  }
  v16 = 1;
LABEL_17:
  MiSearchNumaNodeTable(BugCheckParameter2);
  PageTablesForLargeMap = MiGetPageTablesForLargeMap(a2, 9LL, 1LL);
  if ( PageTablesForLargeMap )
  {
    AnyMultiplexedVm = (unsigned int)MiGetAnyMultiplexedVm(3);
    MiMapWithLargePages(AnyMultiplexedVm, PageTablesForLargeMap, BugCheckParameter2, a2, 1, v22, v11);
    if ( v16 )
      *a5 |= 1u;
  }
  else if ( !(_DWORD)v10 )
  {
    MiDereferenceIoPages(1, BugCheckParameter2, a2);
  }
  return PageTablesForLargeMap;
}
