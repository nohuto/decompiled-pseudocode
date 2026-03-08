/*
 * XREFs of CmpInitializeKeyNodeStack @ 0x1407836E4
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140A18A38 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x140A20860 (CmpGetSubKeyCountForKcbStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140A21424 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2163C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpValueEnumStackStartFromKcbStack @ 0x140A22BAC (CmpValueEnumStackStartFromKcbStack.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 */

__int64 __fastcall CmpInitializeKeyNodeStack(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  memset(a1, 0, 0x50uLL);
  v2 = a1 + 32;
  v3 = 2LL;
  do
  {
    *(_OWORD *)(v2 - 24) = 0LL;
    *(_OWORD *)(v2 - 8) = 0LL;
    *((_DWORD *)v2 - 4) = -1;
    result = HvpGetCellContextReinitialize(v2);
    v2 += 32;
    --v3;
  }
  while ( v3 );
  return result;
}
