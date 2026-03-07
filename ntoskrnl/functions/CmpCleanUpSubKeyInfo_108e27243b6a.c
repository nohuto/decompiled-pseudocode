__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 CellFlat; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0xFFFFFFFFLL;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    result = 65528LL;
    *(_WORD *)(a1 + 8) &= 0xFFF8u;
  }
  *(_WORD *)(a1 + 8) |= 0x40u;
  if ( a2 )
  {
    v5 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v5 != -1 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v6, v5);
      else
        CellFlat = HvpGetCellPaged(v6);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      v8 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(v8, &v9);
      else
        return HvpReleaseCellPaged(v8, &v9);
    }
  }
  return result;
}
