__int64 __fastcall CmpLightWeightCommitSetUserFlagsUoW(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v6; // rdx
  __int64 CellFlat; // rax
  unsigned int v8; // edx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, v6, &v10);
  else
    CellFlat = HvpGetCellPaged(v5, v6, (unsigned int *)&v10);
  v8 = *(_DWORD *)(CellFlat + 52) ^ (*(_DWORD *)(CellFlat + 52) ^ (*(_DWORD *)(a1 + 88) << 16)) & 0xF0000;
  *(_DWORD *)(CellFlat + 52) = v8;
  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^= (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 184LL) ^ HIWORD(v8)) & 0xF;
  *(_QWORD *)(CellFlat + 4) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    return HvpReleaseCellFlat(v5, &v10);
  else
    return HvpReleaseCellPaged(v5, (unsigned int *)&v10);
}
