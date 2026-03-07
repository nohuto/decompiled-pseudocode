__int64 __fastcall CmpFindSubkeyInHashByChildCell(
        ULONG_PTR a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        unsigned int a4,
        ULONG_PTR *a5)
{
  ULONG_PTR *v5; // r13
  ULONG_PTR v6; // r14
  int v8; // ebx
  bool v10; // zf
  __int64 CellPaged; // rax
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  ULONG_PTR v16; // rcx
  __int64 v17; // rdi
  ULONG_PTR v18; // rdi
  __int64 v19; // rcx
  __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  int v23; // [rsp+70h] [rbp+40h] BYREF
  int v24; // [rsp+74h] [rbp+44h]
  __int64 v25; // [rsp+80h] [rbp+50h]

  v5 = a5;
  HIDWORD(v22[0]) = 0;
  v6 = a1;
  v23 = -1;
  v8 = *(_DWORD *)(a1 + 16);
  *a5 = 0LL;
  v10 = (*(_BYTE *)(a3 + 140) & 1) == 0;
  v24 = 0;
  v25 = *(_QWORD *)(a3 + 1648);
  if ( v10 )
    CellPaged = HvpGetCellPaged(a3);
  else
    CellPaged = HvpGetCellFlat(a3, a4);
  if ( !CellPaged )
    return 3221225626LL;
  v13 = *(unsigned __int16 *)(CellPaged + 72);
  if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
  {
    v14 = CmpHashCompressedComponent(CellPaged + 76, v13);
  }
  else
  {
    v22[1] = CellPaged + 76;
    LOWORD(v22[0]) = v13;
    WORD1(v22[0]) = v13;
    v14 = CmpHashUnicodeComponent(v22);
  }
  v15 = 37 * v8 + v14;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(a3, &v23);
  else
    HvpReleaseCellPaged(a3, &v23);
  CmpUnlockTwoKcbs(v6, a2);
  v16 = *(_QWORD *)(v6 + 32);
  v22[0] = v6 + 32;
  CmpLockHashEntryShared(v16, v15);
  CmpLockTwoKcbsShared(v6, a2);
  v17 = *(_QWORD *)(v25
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a3 + 1656) - 1) & ((101027 * (v15 ^ (v15 >> 9))) ^ ((unsigned __int64)(101027 * (v15 ^ (v15 >> 9))) >> 9)))
                  + 16);
  if ( v17 )
  {
    LOBYTE(a5) = 0;
    while ( v15 != *(_DWORD *)v17 || a4 != *(_DWORD *)(v17 + 24) || a3 != *(_QWORD *)(v17 + 16) )
    {
      v17 = *(_QWORD *)(v17 + 8);
      if ( !v17 )
        goto LABEL_17;
    }
    v18 = v17 - 16;
    if ( (unsigned __int8)CmpIsKcbLockAllowed(v6, v18, &a5) )
    {
      if ( !a2 || (unsigned __int8)CmpIsKcbLockAllowed(a2, v18, &a5) )
      {
        v6 = v18;
      }
      else
      {
        CmpUnlockKcb(v21);
        CmpLockKcbShared(v18);
        v6 = a2;
      }
    }
    else
    {
      CmpUnlockKcb(v19);
      CmpLockKcbShared(v18);
    }
    CmpLockKcbShared(v6);
    CmpReferenceKeyControlBlock(v18);
    *v5 = v18;
    CmpUnlockKcb(v18);
  }
LABEL_17:
  CmpUnlockHashEntry(*(PVOID *)v22[0]);
  return 0LL;
}
