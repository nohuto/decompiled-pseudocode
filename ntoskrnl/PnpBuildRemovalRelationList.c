/*
 * XREFs of PnpBuildRemovalRelationList @ 0x140862D2C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PnpProcessRelation @ 0x140861E18 (PnpProcessRelation.c)
 *     IopSortRelationListForRemove @ 0x140862350 (IopSortRelationListForRemove.c)
 *     IopFreeRelationList @ 0x140863634 (IopFreeRelationList.c)
 *     IopAllocateRelationList @ 0x140863684 (IopAllocateRelationList.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  ULONG_PTR BugCheckParameter3; // rax
  void *v10; // rbx
  int v11; // edi

  v4 = *(_QWORD *)(a1 + 312);
  *a4 = 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = (void *)BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2LL, a3, BugCheckParameter3);
  if ( v11 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a4 = v10;
    IopSortRelationListForRemove((__int64)v10);
  }
  return (unsigned int)v11;
}
