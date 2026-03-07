void __fastcall CmpLightWeightCommitDeleteKeyUoW(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int *v3; // r15
  __int64 v6; // rax
  ULONG_PTR v8; // rbx
  int v9; // r9d
  __int64 v10; // rsi
  ULONG_PTR v11; // rdx
  __int64 CellFlat; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  ULONG_PTR v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-49h] BYREF
  __int64 v18; // [rsp+48h] [rbp-41h] BYREF
  __int64 v19; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  __int64 *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]

  v18 = 0xFFFFFFFFLL;
  v3 = *(unsigned int **)(a1 + 104);
  v6 = *(_QWORD *)(a1 + 48);
  v8 = *(_QWORD *)(v6 + 32);
  if ( (int)CmpFreeKeyByCell(v8, *(unsigned int *)(v6 + 40), 0) < 0
    && (unsigned int)dword_140C04328 > 5
    && tlgKeywordOn((__int64)&dword_140C04328, 0x200000000000LL) )
  {
    v23 = 0;
    v26 = 0;
    v21 = &v17;
    LODWORD(v17) = v9;
    v24 = &v19;
    v22 = 4;
    v19 = 0x1000000LL;
    v25 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_140037B58, 0LL, 0LL, 4u, &v20);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL);
  if ( *v3 == 1 )
    CmpLightWeightSwapParentSubKeyList(v8, *(unsigned int *)(v10 + 40), v3);
  CmpCleanUpSubKeyInfo(v10, 1);
  v11 = *(unsigned int *)(v10 + 40);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, v11, &v18);
  else
    CellFlat = HvpGetCellPaged(v8, v11, (unsigned int *)&v18);
  *(_WORD *)(v10 + 176) = *(_WORD *)(CellFlat + 52);
  *(_QWORD *)(CellFlat + 4) = *a2;
  v13 = *a2;
  ++*(_QWORD *)(v10 + 304);
  *(_QWORD *)(v10 + 168) = v13;
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v8, &v18);
  else
    HvpReleaseCellPaged(v8, (unsigned int *)&v18);
  v14 = *(_QWORD *)(a1 + 48);
  v17 = 0x10100000008LL;
  CmpEnumerateAllHigherLayerKcbs(
    v14,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpFlushNotifiesPreCallback,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64, __int64))CmpFlushNotifiesPostCallback,
    a3,
    (__int64)&v17,
    1,
    1);
  CmpFlushNotifiesOnKeyBodyList(*(_QWORD *)(a1 + 48), 8LL, a3, 1);
  CmpMarkKeyUnbacked(*(_QWORD *)(a1 + 48), a3);
  v15 = *(_QWORD *)(a1 + 112);
  v16 = *(_QWORD *)(a1 + 48);
  if ( v15 )
  {
    CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(v16, v15, a3);
    CmpCleanupDiscardReplaceContext(*(_QWORD **)(a1 + 112), a3);
    CmSiFreeMemory(*(PPRIVILEGE_SET *)(a1 + 112));
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else
  {
    CmpDiscardKcb(v16);
  }
  CmpLightWeightCleanupModifyKeyDataUoW(v8, v3);
  *(_QWORD *)(a1 + 104) = 0LL;
}
