/*
 * XREFs of CmpKeyEnumStackEntryBegin @ 0x140A20F7C
 * Callers:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x140A20C04 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 * Callees:
 *     CmpDoFindSubKeyByNumber @ 0x1407AD3EC (CmpDoFindSubKeyByNumber.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpCompareKeysByName @ 0x140A1CA20 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryBegin(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int *v4; // r8
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 *v9; // rsi
  unsigned int *v10; // rdi
  __int64 result; // rax
  unsigned int *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned int v15; // edx
  unsigned int v16; // eax
  char *v17; // rcx
  unsigned int *v18; // r8
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rcx
  _WORD *CellPaged; // rax
  unsigned int SubKeyByNumber; // eax
  ULONG_PTR v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx

  *a1 = *(_QWORD *)a2;
  v4 = (unsigned int *)(a1 + 2);
  v6 = *(_QWORD *)a2;
  v7 = *(unsigned int *)(a2 + 8);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, v4);
  else
    CellFlat = HvpGetCellPaged(v6, v7, v4);
  a1[1] = CellFlat;
  v9 = a1 + 10;
  v10 = (unsigned int *)(a1 + 3);
  result = -4LL - (_QWORD)a1;
  v12 = (unsigned int *)(a1 + 12);
  v13 = 4LL - (_QWORD)a1;
  v14 = 2LL;
  do
  {
    v15 = *(unsigned int *)((char *)v10 + result + a1[1]);
    v10[2] = v15;
    if ( a3 )
      v16 = *(unsigned int *)((char *)v10 + a3 - (_QWORD)a1 - 8);
    else
      v16 = 0;
    *v10 = v16;
    if ( v15 > v16 )
    {
      v17 = (char *)v10 + v13;
      v18 = v12 - 10;
      v19 = *(unsigned int *)&v17[a1[1]];
      v20 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        CellPaged = (_WORD *)HvpGetCellFlat(v20, v19, v18);
      else
        CellPaged = (_WORD *)HvpGetCellPaged(v20, v19, v18);
      *(v9 - 5) = (__int64)CellPaged;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, CellPaged, *v10);
      v10[12] = SubKeyByNumber;
      v23 = *a1;
      if ( (*(_BYTE *)(*a1 + 140LL) & 1) != 0 )
        v24 = HvpGetCellFlat(v23, SubKeyByNumber, v12);
      else
        v24 = HvpGetCellPaged(v23, SubKeyByNumber, v12);
      *v9 = v24;
      v25 = a1[15];
      if ( !v25 || (int)CmpCompareKeysByName(v24, v25) < 0 )
      {
        a1[15] = *v9;
        *((_DWORD *)a1 + 28) = v10[12];
      }
      v13 = 4LL - (_QWORD)a1;
    }
    result = -4LL - (_QWORD)a1;
    v12 += 2;
    ++v9;
    ++v10;
    --v14;
  }
  while ( v14 );
  return result;
}
