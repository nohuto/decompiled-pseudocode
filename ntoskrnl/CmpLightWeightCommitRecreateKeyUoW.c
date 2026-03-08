/*
 * XREFs of CmpLightWeightCommitRecreateKeyUoW @ 0x14067DB14
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14074AF50 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs @ 0x140A1CF98 (CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs.c)
 */

__int64 __fastcall CmpLightWeightCommitRecreateKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  __int64 CellFlat; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v14 = -1;
  v15 = 0;
  v4 = *(_QWORD *)(a1 + 48);
  v7 = *(_QWORD *)(v4 + 32);
  v8 = *(_QWORD *)(v4 + 72);
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v7, *(unsigned int *)(v8 + 40));
  else
    CellFlat = HvpGetCellPaged(v7);
  *(_QWORD *)(CellFlat + 4) = *a2;
  v10 = *a2;
  ++*(_QWORD *)(v8 + 304);
  *(_QWORD *)(v8 + 168) = v10;
  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v7, &v14);
  else
    HvpReleaseCellPaged(v7, &v14);
  LOBYTE(v12) = 1;
  CmpFlushNotifiesOnAllUnbackedHigherLayerKcbs(*(_QWORD *)(a1 + 48), v11, a3, v12);
  return CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3);
}
