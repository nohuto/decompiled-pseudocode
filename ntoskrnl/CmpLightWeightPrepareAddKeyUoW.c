/*
 * XREFs of CmpLightWeightPrepareAddKeyUoW @ 0x140A26040
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyKeyPartial @ 0x14078ECB4 (CmpCopyKeyPartial.c)
 *     CmpAddSubKeyToList @ 0x1407A4300 (CmpAddSubKeyToList.c)
 *     HvAllocateCell @ 0x1407A63A8 (HvAllocateCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A25254 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140A25D48 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareAddKeyUoW(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rax
  _WORD *v4; // r13
  ULONG_PTR v5; // rbx
  __int64 v6; // rax
  unsigned int *v7; // rdi
  int v8; // eax
  int v9; // esi
  bool v10; // zf
  ULONG_PTR v11; // rdx
  __int64 CellPaged; // rax
  __int64 v13; // r12
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  _WORD *v16; // rax
  unsigned int *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *v23; // [rsp+48h] [rbp-20h] BYREF
  _WORD *v24; // [rsp+50h] [rbp-18h] BYREF
  unsigned int *v25; // [rsp+58h] [rbp-10h]
  unsigned int v26; // [rsp+B0h] [rbp+48h]
  __int64 v27; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v28; // [rsp+C0h] [rbp+58h] BYREF
  ULONG_PTR v29; // [rsp+C8h] [rbp+60h] BYREF

  v22 = 0xFFFFFFFFLL;
  v2 = -1;
  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v29 = 0xFFFFFFFFLL;
  v28 = 0;
  LODWORD(v27) = -1;
  v5 = *(_QWORD *)(v3 + 32);
  v26 = *(_DWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 80);
  v24 = 0LL;
  v7 = *(unsigned int **)(v6 + 104);
  v23 = v7;
  if ( v7 )
  {
    ++*v7;
  }
  else
  {
    v8 = CmpLightWeightCreateModificationData(a1, &v23);
    v7 = v23;
    v9 = v8;
    if ( v8 < 0 )
      goto LABEL_32;
  }
  v10 = (*(_BYTE *)(v5 + 140) & 1) == 0;
  v23 = *(unsigned int **)(*(_QWORD *)(a1 + 48) + 72LL);
  v11 = v23[10];
  if ( v10 )
    CellPaged = HvpGetCellPaged(v5, v11, (unsigned int *)&v22);
  else
    CellPaged = HvpGetCellFlat(v5, v11, &v22);
  v13 = CellPaged;
  if ( !CellPaged )
  {
    v9 = -1073741670;
    goto LABEL_32;
  }
  v9 = HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL), 1);
  if ( v9 >= 0 )
  {
    v9 = HvpMarkCellDirty(v5, v23[10], 1);
    if ( v9 >= 0 )
    {
      v9 = HvpMarkCellDirty(v5, *(unsigned int *)(v13 + 4LL * (int)v26 + 28), 1);
      if ( v9 >= 0 )
      {
        v14 = v26;
        v10 = v7[v26 + 3] == -1;
        v25 = &v7[v26 + 3];
        if ( !v10 )
          goto LABEL_19;
        v15 = *(_DWORD *)(v5 + 220);
        v9 = HvAllocateCell(v5, 12, v26, &v28, (__int64)&v24, (__int64)&v29);
        if ( v9 >= 0 )
        {
          v16 = v24;
          *v24 = v15 < 5 ? 26220 : 26732;
          v17 = v25;
          v16[1] = 0;
          *v17 = v28;
          v7[v26 + 1] = 0;
          if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v5, &v29);
          else
            HvpReleaseCellPaged(v5, (unsigned int *)&v29);
          v14 = v26;
          v4 = 0LL;
LABEL_19:
          v18 = CmpCopyKeyPartial(
                  v5,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 40LL),
                  v5,
                  v23[10],
                  38,
                  BugCheckParameter4,
                  v14,
                  (unsigned int *)&v27);
          v2 = v27;
          v9 = v18;
          if ( v18 >= 0 )
          {
            v9 = CmpAddSubKeyToList(v5, v25, v27);
            if ( v9 >= 0 )
            {
              ++v7[v26 + 1];
              v19 = *(_QWORD *)(a1 + 48);
              v9 = 0;
              *(_DWORD *)(a1 + 88) = *(_DWORD *)(v19 + 40);
              *(_DWORD *)(v19 + 40) = v2;
              v2 = -1;
              *(_QWORD *)(a1 + 104) = v7;
              v7 = 0LL;
            }
          }
          goto LABEL_23;
        }
        v4 = v24;
      }
    }
  }
LABEL_23:
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v5, &v22);
  else
    HvpReleaseCellPaged(v5, (unsigned int *)&v22);
  if ( v4 )
  {
    if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v5, &v29);
    else
      HvpReleaseCellPaged(v5, (unsigned int *)&v29);
  }
  if ( v2 != -1 )
    CmpFreeKeyByCell(v5, v2, 0);
LABEL_32:
  if ( v7 )
  {
    CmpLightWeightCleanupModifyKeyDataUoW(v5, v7);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return (unsigned int)v9;
}
