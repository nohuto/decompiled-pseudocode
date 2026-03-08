/*
 * XREFs of CmpSortedValueEnumStackAdvanceInternal @ 0x140A22324
 * Callers:
 *     CmpSortedValueEnumStackAdvance @ 0x140A222F0 (CmpSortedValueEnumStackAdvance.c)
 * Callees:
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x140A22670 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A227E0 (CmpSortedValueEnumStackValueCompareFunction.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvanceInternal(__int16 *a1)
{
  __int16 i; // di
  __int64 EntryAtLayerHeight; // rsi
  unsigned int v5; // eax
  __int16 v6; // si
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 j; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 10) )
  {
    if ( !*(_QWORD *)a1 )
      return 2147483674LL;
    for ( i = 0; i <= a1[4]; ++i )
    {
      EntryAtLayerHeight = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)i);
      v5 = *(_DWORD *)(EntryAtLayerHeight + 28);
      if ( v5 < *(_DWORD *)(EntryAtLayerHeight + 24) )
      {
        v11 = *(_QWORD *)(*(_QWORD *)(EntryAtLayerHeight + 8) + 8LL * v5);
        if ( v11 == *(_QWORD *)a1 || !CmpSortedValueEnumStackValueCompareFunction(&v11, a1) )
          ++*(_DWORD *)(EntryAtLayerHeight + 28);
      }
    }
  }
  v6 = a1[4];
  v7 = 0LL;
  for ( j = 0LL; v6 >= 0; --v6 )
  {
    v8 = CmpValueEnumStackGetEntryAtLayerHeight(a1, (unsigned __int16)v6);
    v9 = *(unsigned int *)(v8 + 28);
    if ( (unsigned int)v9 < *(_DWORD *)(v8 + 24) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * v9);
      v11 = v10;
      if ( !v7 || CmpSortedValueEnumStackValueCompareFunction(&j, &v11) > 0 )
      {
        v7 = v10;
        j = v10;
      }
    }
  }
  *(_QWORD *)a1 = v7;
  *((_BYTE *)a1 + 10) = 1;
  return v7 == 0 ? 0x8000001A : 0;
}
