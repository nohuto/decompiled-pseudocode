__int64 __fastcall CmpLightWeightCommitAddKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int *v5; // r14
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rdx
  __int64 CellPaged; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int16 v15; // cx
  unsigned int v16; // eax
  __int64 result; // rax
  __int64 v18; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(unsigned int **)(a1 + 104);
  v19 = 0xFFFFFFFFLL;
  v18 = 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v19);
  else
    CellFlat = HvpGetCellPaged(v6, v7, (unsigned int *)&v19);
  v9 = CellFlat;
  v10 = *(unsigned int *)(CellFlat + 44);
  *(_DWORD *)(CellFlat + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), v10, 0LL, 0, 0);
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v6, v11, &v18);
  else
    CellPaged = HvpGetCellPaged(v6, v11, (unsigned int *)&v18);
  v13 = CellPaged;
  *(_QWORD *)(CellPaged + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 304LL);
  v14 = *(_DWORD *)(CellPaged + 52);
  v15 = 2 * *(_WORD *)(v9 + 72);
  if ( (*(_BYTE *)(v9 + 2) & 0x20) == 0 )
    v15 = *(_WORD *)(v9 + 72);
  if ( (unsigned __int16)v14 < (unsigned int)v15 )
  {
    *(_WORD *)(v13 + 52) = v15;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 176LL) = v15;
  }
  v16 = *(unsigned __int16 *)(v9 + 74);
  if ( *(_DWORD *)(v13 + 56) < v16 )
    *(_DWORD *)(v13 + 56) = v16;
  if ( *v5 == 1 )
    CmpLightWeightSwapParentSubKeyList(v6, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL), v5);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, &v18);
  else
    HvpReleaseCellPaged(v6, (unsigned int *)&v18);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, &v19);
  else
    HvpReleaseCellPaged(v6, (unsigned int *)&v19);
  CmpLightWeightCleanupModifyKeyDataUoW(v6, v5);
  result = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(result + 240) = 0LL;
  return result;
}
