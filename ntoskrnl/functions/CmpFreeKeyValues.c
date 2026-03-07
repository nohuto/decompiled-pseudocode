__int64 __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  __int64 v8; // r14
  unsigned int i; // esi
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = 0xFFFFFFFFLL;
  result = CmpMarkKeyValuesDirty(BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a3 + 2) & 2) == 0 )
    {
      if ( *(_DWORD *)(a3 + 36) )
      {
        v6 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter2, v6, &v10);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter2, v6, (unsigned int *)&v10);
        v8 = CellFlat;
        for ( i = 0; i < *(_DWORD *)(a3 + 36); ++i )
          CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v8 + 4LL * i));
        if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter2, &v10);
        else
          HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v10);
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 40));
      }
      *(_DWORD *)(a3 + 40) = -1;
      *(_DWORD *)(a3 + 36) = 0;
      if ( *(_WORD *)(a3 + 74) )
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 48));
        *(_DWORD *)(a3 + 48) = -1;
        *(_WORD *)(a3 + 74) = 0;
      }
    }
    return 0LL;
  }
  return result;
}
