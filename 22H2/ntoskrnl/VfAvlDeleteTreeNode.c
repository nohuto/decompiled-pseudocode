/*
 * XREFs of VfAvlDeleteTreeNode @ 0x14037E4A8
 * Callers:
 *     VfTargetDriversRemove @ 0x14037E300 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x1409D635C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x1409E15C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16EC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E249C (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14032DA20 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1403723EC (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140372420 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x14037247C (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1403724B4 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x14037255C (ViAvlNodeInitializeSessionId.c)
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
