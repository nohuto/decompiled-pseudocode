/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x140303A48
 * Callers:
 *     VfTargetDriversAdd @ 0x140303834 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140ACF440 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140ACF620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140ADF240 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140AE15E4 (VfTrackResource.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402451A0 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlTableIndex @ 0x140303AE4 (ViAvlTableIndex.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140303B00 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x140303B34 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140303B6C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
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
