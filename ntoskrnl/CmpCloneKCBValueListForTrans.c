/*
 * XREFs of CmpCloneKCBValueListForTrans @ 0x140788FC0
 * Callers:
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 * Callees:
 *     HvDuplicateCell @ 0x1407890A4 (HvDuplicateCell.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCloneKCBValueListForTrans(__int64 a1, __int64 a2, _BYTE *a3)
{
  int v6; // edi
  ULONG_PTR v8; // rcx
  __int64 CellFlat; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  HvpGetCellContextReinitialize(&v12);
  if ( *(_QWORD *)(a1 + 288) )
  {
    *a3 = 0;
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v8, *(unsigned int *)(a1 + 40));
  else
    CellFlat = HvpGetCellPaged(v8);
  v10 = CellFlat;
  if ( *(_DWORD *)(CellFlat + 36) )
  {
    v6 = HvDuplicateCell(*(_QWORD *)(a1 + 32), *(unsigned int *)(CellFlat + 40), a1 + 284);
    if ( v6 < 0 )
      goto LABEL_10;
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(v10 + 36);
  }
  else
  {
    *(_DWORD *)(a1 + 280) = 0;
    *(_DWORD *)(a1 + 284) = -1;
  }
  v6 = 0;
  *a3 = 1;
  *(_QWORD *)(a1 + 288) = a2;
LABEL_10:
  v11 = *(_QWORD *)(a1 + 32);
  if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v11, &v12);
  else
    HvpReleaseCellPaged(v11, &v12);
  return (unsigned int)v6;
}
