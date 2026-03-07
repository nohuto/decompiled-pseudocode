__int64 __fastcall CmpLightWeightCommitRenameKeyUoW(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  ULONG_PTR v7; // rbx
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // rsi
  ULONG_PTR v11; // rdx
  __int64 CellPaged; // rax
  __int64 v13; // r8
  int v14; // eax
  unsigned __int16 v15; // cx
  unsigned int *v16; // rsi
  ULONG_PTR v17; // rcx
  _QWORD v19[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0xFFFFFFFFLL;
  v6 = a1[6];
  v21 = 0xFFFFFFFFLL;
  v7 = *(_QWORD *)(v6 + 32);
  CmpUpdateParentForEachSon(v7, *(unsigned int *)(v6 + 40));
  ++*(_QWORD *)(a1[6] + 304);
  v8 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v8, &v20);
  else
    CellFlat = HvpGetCellPaged(v7, v8, (unsigned int *)&v20);
  v10 = CellFlat;
  *(_DWORD *)(CellFlat + 16) = *(_DWORD *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  v11 = *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v7, v11, &v21);
  else
    CellPaged = HvpGetCellPaged(v7, v11, (unsigned int *)&v21);
  v13 = CellPaged;
  *(_QWORD *)(CellPaged + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1[6] + 72) + 304LL);
  v14 = *(_DWORD *)(CellPaged + 52);
  v15 = 2 * *(_WORD *)(v10 + 72);
  if ( (*(_BYTE *)(v10 + 2) & 0x20) == 0 )
    v15 = *(_WORD *)(v10 + 72);
  if ( (unsigned __int16)v14 < (unsigned int)v15 )
  {
    *(_WORD *)(v13 + 52) = v15;
    *(_WORD *)(*(_QWORD *)(a1[6] + 72) + 176LL) = v15;
  }
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v20);
  else
    HvpReleaseCellPaged(v7, (unsigned int *)&v20);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v21);
  else
    HvpReleaseCellPaged(v7, (unsigned int *)&v21);
  v19[1] = a1[6];
  v19[0] = a1[11];
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, __int64))CmpRefreshParent,
    v7,
    a3,
    (__int64)v19,
    0);
  CmpSearchForOpenSubKeys(a1[6], 1, 0LL);
  HvFreeCell(v7, *(unsigned int *)(a1[11] + 40));
  CmpFlushNotifiesOnKeyBodyList(a1[11], 8LL, a3, 1);
  CmpMarkKeyUnbacked(a1[11], a3);
  CmpDiscardKcb(a1[11]);
  v16 = (unsigned int *)a1[13];
  if ( *v16 == 1 )
    CmpLightWeightSwapParentSubKeyList(v7, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), a1[13]);
  CmpLightWeightCleanupModifyKeyDataUoW(v7, v16);
  v17 = a1[6];
  a1[13] = 0LL;
  CmpDereferenceKeyControlBlockWithLock(v17, a3, 0);
  return CmpDereferenceKeyControlBlockWithLock(a1[11], a3, 0);
}
