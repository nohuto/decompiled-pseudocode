/*
 * XREFs of CmpCleanUpSubKeyInfo @ 0x1407A5570
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpInvalidateSubtreeWorker @ 0x14067F320 (CmpInvalidateSubtreeWorker.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x14074A958 (CmpCompleteUnloadKey.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1407A5468 (CmpRebuildKcbCacheFromNode.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCleanUpSubKeyInfo(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rcx
  __int64 CellFlat; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0xFFFFFFFFLL;
  result = *(unsigned int *)(a1 + 8);
  if ( (result & 7) != 0 )
  {
    if ( (result & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x6E494D43u);
    result = 65528LL;
    *(_WORD *)(a1 + 8) &= 0xFFF8u;
  }
  *(_WORD *)(a1 + 8) |= 0x40u;
  if ( a2 )
  {
    v5 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v5 != -1 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v6, v5);
      else
        CellFlat = HvpGetCellPaged(v6);
      *(_WORD *)(a1 + 8) &= ~0x40u;
      v8 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 112) = *(_DWORD *)(CellFlat + 20) + *(_DWORD *)(CellFlat + 24);
      if ( (*(_BYTE *)(v8 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(v8, &v9);
      else
        return HvpReleaseCellPaged(v8, &v9);
    }
  }
  return result;
}
