/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x14020A3CC
 * Callers:
 *     VfTargetDriversAdd @ 0x14020A1B8 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140AD3440 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD3620 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140AE55E4 (VfTrackResource.c)
 * Callees:
 *     ViAvlTableIndex @ 0x14020A468 (ViAvlTableIndex.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A484 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x14020A4B8 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4F0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlInsertElementGenericTableAvl @ 0x14031EA50 (RtlInsertElementGenericTableAvl.c)
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
