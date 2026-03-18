/*
 * XREFs of CmpLightWeightCommitSetSecDescUoW @ 0x140A287A0
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A1C95C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140297330 (CmpDereferenceSecurityNode.c)
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     CmpAssignSecurityToKcb @ 0x14076AF70 (CmpAssignSecurityToKcb.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A28008 (CmpLightWeightCleanupSetSecDescUoW.c)
 */

void __fastcall CmpLightWeightCommitSetSecDescUoW(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rax
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0xFFFFFFFFLL;
  v2 = *(_QWORD **)(a1 + 104);
  v4 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v4 + 32);
  v7 = *(unsigned int *)(v4 + 40);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v6, v7, &v11);
  else
    CellFlat = HvpGetCellPaged(v6, v7, (unsigned int *)&v11);
  v9 = *(unsigned int *)(CellFlat + 44);
  v10 = CellFlat;
  *(_DWORD *)(CellFlat + 44) = *(_DWORD *)v2;
  CmpDereferenceSecurityNode(v6, v9);
  *(_DWORD *)v2 = -1;
  *(_QWORD *)(v10 + 4) = *a2;
  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 168LL) = *a2;
  ++*(_QWORD *)(*(_QWORD *)(a1 + 48) + 304LL);
  CmpAssignSecurityToKcb(*(_QWORD *)(a1 + 48), *(unsigned int *)(v10 + 44), 0LL, 0, 0);
  if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v6, &v11);
  else
    HvpReleaseCellPaged(v6, (unsigned int *)&v11);
  CmpLightWeightCleanupSetSecDescUoW(v2);
  *(_QWORD *)(a1 + 104) = 0LL;
}
