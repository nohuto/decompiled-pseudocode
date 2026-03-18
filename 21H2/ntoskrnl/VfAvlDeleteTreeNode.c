/*
 * XREFs of VfAvlDeleteTreeNode @ 0x1402DB8D8
 * Callers:
 *     VfTargetDriversRemove @ 0x1402DB738 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140A91AD0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140A91EDC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1402D82D0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1402D8304 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1402D8360 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1402D8398 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1402D8440 (ViAvlNodeInitializeSessionId.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402DECF0 (RtlDeleteElementGenericTableAvl.c)
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
