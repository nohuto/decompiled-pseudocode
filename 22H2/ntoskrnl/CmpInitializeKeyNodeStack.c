/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1407D21DC
 * Callers:
 *     CmQueryLayeredKey @ 0x14035D634 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x140A0BA40 (CmSaveKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A1B788 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A235C0 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140A24184 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2439C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A2590C (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A25DB0 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A269A0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A26B3C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140A26C60 (CmpPromoteSubtree.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 4;
  v3 = 2LL;
  do
  {
    *(_OWORD *)(v2 - 3) = 0LL;
    *(_OWORD *)(v2 - 1) = 0LL;
    *((_DWORD *)v2 - 4) = -1;
    result = HvpGetCellContextReinitialize(v2);
    v2 += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
