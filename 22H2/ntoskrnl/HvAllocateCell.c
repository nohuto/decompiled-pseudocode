/*
 * XREFs of HvAllocateCell @ 0x140656A94
 * Callers:
 *     CmpCreateTombstone @ 0x1404ED49C (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1405CCAF8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpAddValueKeyNew @ 0x140657630 (CmpAddValueKeyNew.c)
 *     CmpCopyCell @ 0x14066F470 (CmpCopyCell.c)
 *     HvDuplicateCell @ 0x14069FCC0 (HvDuplicateCell.c)
 *     CmpSetValueDataExisting @ 0x1406A3E6C (CmpSetValueDataExisting.c)
 *     CmpSetValueKeyExisting @ 0x1406DFA78 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x1406E0254 (CmpAddValueToListEx.c)
 *     CmpCreateChild @ 0x1406E08C4 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x1406E19D4 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x1406E1C64 (CmpSetValueDataNew.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406E5AEC (CmpSetSecurityDescriptorInfo.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14072A360 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140733B98 (CmpSplitLeaf.c)
 *     CmpCreateHiveRootCell @ 0x14078DAF0 (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x14086CA54 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14086E53C (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x1408783D0 (CmpConcatenateValueLists.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14087F404 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F814 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140A5B0B4 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x1406564F8 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, int a3, _QWORD *a4, __int64 *a5)
{
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // r10d

  v5 = a2 + 11;
  v6 = 0x4000;
  v7 = v5 & 0xFFFFFFF8;
  v8 = 0;
  while ( v7 > v6 )
  {
    v6 *= 2;
    ++v8;
  }
  if ( !v8 )
    v6 = v7;
  if ( v6 > 0x100000 )
    return 0xFFFFFFFFLL;
  else
    return HvpDoAllocateCell(a1, v6, a3, a4, a5);
}
