/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14037E688
 * Callers:
 *     VfTargetDriversRemove @ 0x14037E4E0 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x1409D734C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D7804 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E26DC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E2E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E348C (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14037175C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140371790 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1403717EC (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x140371824 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1403718CC (ViAvlNodeInitializeSessionId.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *(_QWORD *)a1;
  ViAvlNodeInitializeSessionId(a1, (__int64)&Buffer);
  v6 = ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(192 * v6 + *(_QWORD *)(a1 + 16)), &Buffer);
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 192 * v6 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
  return v9;
}
