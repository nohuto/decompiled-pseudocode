/*
 * XREFs of CmpLightWeightPrepareDeleteKeyUoW @ 0x140A262F8
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocatePool @ 0x140243878 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpCleanupDiscardReplaceContext @ 0x1406B7DC0 (CmpCleanupDiscardReplaceContext.c)
 *     CmpMarkKeyDirty @ 0x1406BAB64 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKeyFromList @ 0x1406BB424 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A1D2A4 (CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A25254 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140A25D48 (CmpLightWeightCreateModificationData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteKeyUoW(__int64 *a1, __int64 a2)
{
  struct _PRIVILEGE_SET *v4; // rsi
  ULONG_PTR v5; // rbp
  unsigned int *v6; // rdi
  int v7; // eax
  int v8; // ebx
  ULONG_PTR v9; // r12
  __int64 CellFlat; // rax
  __int64 v11; // rax
  __int64 Pool; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  unsigned int *v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = 0xFFFFFFFFLL;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1[6] + 32);
  v6 = *(unsigned int **)(a1[10] + 104);
  v16 = v6;
  if ( v6 )
  {
    ++*v6;
  }
  else
  {
    v7 = CmpLightWeightCreateModificationData((__int64)a1, &v16);
    v6 = v16;
    v8 = v7;
    if ( v7 < 0 )
      goto LABEL_23;
  }
  v9 = *(unsigned int *)(a1[6] + 40);
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v5, v9, &v17);
  else
    CellFlat = HvpGetCellPaged(v5, v9, (unsigned int *)&v17);
  if ( !CellFlat )
  {
LABEL_9:
    v8 = -1073741670;
    goto LABEL_23;
  }
  if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v5, &v17);
  else
    HvpReleaseCellPaged(v5, (unsigned int *)&v17);
  v8 = CmpMarkKeyDirty(v5, (unsigned int)v9, 0);
  if ( v8 < 0 )
    goto LABEL_23;
  v8 = HvpMarkCellDirty(v5, *(unsigned int *)(*(_QWORD *)(a1[6] + 72) + 40LL), 0);
  if ( v8 < 0 )
    goto LABEL_23;
  v11 = *(_QWORD *)(a1[6] + 192);
  if ( v11 && *(_QWORD *)(v11 + 32) != v11 + 32 )
  {
    Pool = CmpAllocatePool(256LL, 32LL, 825707843LL);
    v4 = (struct _PRIVILEGE_SET *)Pool;
    if ( !Pool )
      goto LABEL_9;
    *(_QWORD *)Pool = 0LL;
    v13 = Pool;
    *(_DWORD *)(Pool + 12) = 0;
    *(_QWORD *)(Pool + 24) = 0LL;
    *(_DWORD *)(Pool + 8) = -1073741823;
    v14 = (_QWORD *)(Pool + 16);
    v14[1] = v14;
    *v14 = v14;
    v8 = CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(a1[6], v13);
    if ( v8 < 0 )
      goto LABEL_22;
  }
  if ( CmpRemoveSubKeyFromList(v5, (int *)&v6[(v9 >> 31) + 3], v9) )
  {
    --v6[(v9 >> 31) + 1];
    v8 = 0;
    a1[13] = (__int64)v6;
    a1[14] = (__int64)v4;
    return (unsigned int)v8;
  }
  v8 = -1073741670;
  if ( v4 )
  {
LABEL_22:
    CmpCleanupDiscardReplaceContext(v4, a2);
    CmSiFreeMemory(v4);
  }
LABEL_23:
  if ( v6 )
    CmpLightWeightCleanupModifyKeyDataUoW(v5, v6);
  return (unsigned int)v8;
}
