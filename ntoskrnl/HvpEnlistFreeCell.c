ULONG_PTR __fastcall HvpEnlistFreeCell(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v7; // rdi
  int v8; // r8d
  int v9; // r12d
  unsigned int v10; // ebp
  ULONG_PTR result; // rax
  __int64 v12; // rax
  _QWORD *v13; // r8
  _QWORD *CellMap; // rax
  __int64 v15; // rcx

  v4 = a4;
  v5 = (unsigned int)a2;
  v7 = ((unsigned int)a2 & 0xFFFFF000) - *(_DWORD *)HvpGetCellMap(BugCheckParameter2, a2);
  v9 = *(_DWORD *)(HvpGetCellMap(BugCheckParameter2, v7) + 16);
  v10 = v9 + v7;
  if ( !(_DWORD)v7 )
    return HvpAddFreeCellHint(BugCheckParameter2);
  if ( v5 != (unsigned int)v7 + 32LL )
    return HvpAddFreeCellHint(BugCheckParameter2);
  if ( (_DWORD)v5 + v8 != v10 )
    return HvpAddFreeCellHint(BugCheckParameter2);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 540495171LL);
  v13 = (_QWORD *)v12;
  if ( !v12 )
    return HvpAddFreeCellHint(BugCheckParameter2);
  *(_QWORD *)v12 = 0LL;
  *(_QWORD *)(v12 + 8) = 0LL;
  *(_DWORD *)(v12 + 16) = v9;
  *(_DWORD *)(v12 + 20) = v7 & 0x7FFFFFFF;
  while ( (unsigned int)v7 < v10 )
  {
    CellMap = (_QWORD *)HvpGetCellMap(BugCheckParameter2, (unsigned int)v7);
    CellMap[1] |= 2uLL;
    LODWORD(v7) = v7 + 4096;
    *CellMap = v13;
  }
  result = 632 * v4 + BugCheckParameter2 + 888;
  v15 = *(_QWORD *)result;
  if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = result;
  *(_QWORD *)(v15 + 8) = v13;
  *(_QWORD *)result = v13;
  return result;
}
