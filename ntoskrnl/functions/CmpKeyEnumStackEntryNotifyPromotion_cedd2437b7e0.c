__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(__int64 a1)
{
  int v2; // edx
  __int64 v3; // r8
  _DWORD *v4; // rcx
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  unsigned int *v11; // rdx
  __int64 v12; // rcx
  unsigned int *v13; // r8
  ULONG_PTR v14; // rdx
  ULONG_PTR v15; // rcx
  _WORD *CellFlat; // rax
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v18; // rcx
  unsigned int *v19; // r8
  unsigned int v20; // esi
  __int64 result; // rax

  v2 = 0;
  v3 = 0LL;
  v4 = (_DWORD *)(a1 + 32);
  v5 = 2;
  while ( *v4 == *(_DWORD *)((char *)v4 + *(_QWORD *)(a1 + 8) - a1 - 12) )
  {
    ++v2;
    ++v3;
    ++v4;
    if ( v3 >= 2 )
      goto LABEL_6;
  }
  v5 = v2;
LABEL_6:
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 112) = -1;
  v6 = v5;
  v7 = 8LL * v5;
  if ( *(_QWORD *)(a1 + v7 + 80) )
  {
    v8 = *(_QWORD *)a1;
    v9 = (unsigned int *)(v7 + a1 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v8, v9);
    else
      HvpReleaseCellPaged(v8, v9);
    *(_QWORD *)(a1 + 8 * v6 + 80) = 0LL;
    *(_DWORD *)(a1 + 4 * v6 + 72) = -1;
  }
  if ( *(_QWORD *)(a1 + 8 * v6 + 40) )
  {
    v10 = *(_QWORD *)a1;
    v11 = (unsigned int *)(v7 + a1 + 56);
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
      HvpReleaseCellFlat(v10, v11);
    else
      HvpReleaseCellPaged(v10, v11);
    *(_QWORD *)(a1 + 8 * v6 + 40) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = (unsigned int *)(a1 + 56 + 8 * v6);
  *(_DWORD *)(a1 + 4 * v6 + 32) = *(_DWORD *)(v12 + 4 * v6 + 20);
  v14 = *(unsigned int *)(v12 + 4 * v6 + 28);
  v15 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(v15, v14, v13);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(v15, v14, v13);
  *(_QWORD *)(a1 + 8 * v6 + 40) = CellFlat;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*(_QWORD *)a1, CellFlat, *(_DWORD *)(a1 + 4 * v6 + 24));
  *(_DWORD *)(a1 + 4 * v6 + 72) = SubKeyByNumber;
  v18 = *(_QWORD *)a1;
  v19 = (unsigned int *)(a1 + 96 + 8 * v6);
  v20 = SubKeyByNumber;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 140LL) & 1) != 0 )
    result = HvpGetCellFlat(v18, SubKeyByNumber, v19);
  else
    result = HvpGetCellPaged(v18, SubKeyByNumber, v19);
  *(_QWORD *)(a1 + 8 * v6 + 80) = result;
  *(_DWORD *)(a1 + 112) = v20;
  *(_QWORD *)(a1 + 120) = result;
  return result;
}
