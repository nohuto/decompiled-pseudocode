__int64 __fastcall CmpLightWeightCommitDeleteValueKeyUoW(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0xFFFFFFFFLL;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v3 + 32);
  v7 = *(unsigned int *)(v3 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v14);
  else
    CellFlat = HvpGetCellPaged(v6, v7, (unsigned int *)&v14);
  v9 = CellFlat;
  CmpFreeValue(v6, *(unsigned int *)(*(_QWORD *)(a1 + 112) + 4LL));
  CmpFreeTransientPoolWithTag(*(void **)(a1 + 112), 0x77554D43u);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(v9 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( *(_DWORD *)v2 == 1 )
  {
    v10 = *(_QWORD *)(v9 + 36);
    *(_QWORD *)(v9 + 36) = *(_QWORD *)(v2 + 4);
    *(_QWORD *)(v2 + 4) = v10;
    CmpCleanUpKcbCachedSymlink(*(_QWORD *)(a1 + 48));
    v11 = *(_QWORD *)(a1 + 48);
    v12 = *(_DWORD *)(v9 + 40);
    *(_DWORD *)(v11 + 96) = *(_DWORD *)(v9 + 36);
    *(_DWORD *)(v11 + 100) = v12;
    if ( !*(_DWORD *)(v9 + 36) )
    {
      *(_QWORD *)(v9 + 60) = 0LL;
      *(_WORD *)(*(_QWORD *)(a1 + 48) + 178LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 48) + 180LL) = 0;
    }
  }
  CmpLightWeightCleanupSetValueKeyUoW(v6, (unsigned int *)v2);
  *(_QWORD *)(a1 + 104) = 0LL;
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v6, &v14);
  else
    return HvpReleaseCellPaged(v6, (unsigned int *)&v14);
}
