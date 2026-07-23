/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1403716C0
 * Callers:
 *     VfTargetDriversAdd @ 0x14037158C (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1409D72CC (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D74C0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140252BB0 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14037175C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371790 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403717EC (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x140371824 (ViAvlTableIndex.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  v6 = ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2);
  v6 *= 192LL;
  ViAvlAcquireTableLockAtDpcLevelSafe(v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + v6 + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v6 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v6 + *(_QWORD *)(a1 + 16), a2);
}
