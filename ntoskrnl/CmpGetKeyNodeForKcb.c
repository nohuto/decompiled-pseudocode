__int64 __fastcall CmpGetKeyNodeForKcb(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v7; // rcx
  __int64 CellFlat; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v12; // rcx
  signed __int64 *v13; // rdi
  __int64 v14; // rbp
  ULONG_PTR v15; // rcx
  __int64 CellPaged; // rax
  __int64 v17; // rbx

  v5 = *(unsigned int *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, v5);
  else
    CellFlat = HvpGetCellPaged(v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = CellFlat;
  if ( a3 )
  {
    CmpUpdateKeyNodeAccessBits(v9, CellFlat, *(unsigned int *)(a1 + 40));
  }
  else if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v9, CellFlat) )
  {
    if ( (*(_BYTE *)(v12 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v12, a2);
    else
      HvpReleaseCellPaged(v12, a2);
    v13 = (signed __int64 *)(*(_QWORD *)(a1 + 32) + 72LL);
    v14 = KeAbPreAcquire((__int64)v13, 0LL);
    if ( _InterlockedCompareExchange64(v13, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v13, 0, v14, (__int64)v13);
    if ( v14 )
      *(_BYTE *)(v14 + 18) = 1;
    v15 = *(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v15, *(unsigned int *)(a1 + 40));
    else
      CellPaged = HvpGetCellPaged(v15);
    v10 = CellPaged;
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(a1 + 32), CellPaged, *(unsigned int *)(a1 + 40));
    v17 = *(_QWORD *)(a1 + 32);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 72), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v17 + 72));
    KeAbPostRelease(v17 + 72);
  }
  return v10;
}
