/*
 * XREFs of HvAllocateCell @ 0x1407A63A8
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetValueKeyExisting @ 0x1406BAE08 (CmpSetValueKeyExisting.c)
 *     HvDuplicateCell @ 0x1407890A4 (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x14078F10C (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x140796AA4 (CmpSetValueDataExisting.c)
 *     CmpAddSubKeyEx @ 0x1407A4094 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x1407A4E40 (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x1407A5F18 (CmpAddValueKeyNew.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140A13664 (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x140A1E25C (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140A21D7C (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A26040 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140B52778 (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x1407A6420 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvAllocateCell(ULONG_PTR a1, int a2, __int64 a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v8; // r10d
  unsigned int i; // edx
  __int64 result; // rax

  v6 = (a2 + 11) & 0xFFFFFFF8;
  v8 = 0;
  for ( i = 0x4000; v6 > i; i *= 2 )
    ++v8;
  if ( !v8 )
    i = v6;
  if ( i > 0x100000 )
    return 3221225626LL;
  result = HvpDoAllocateCell(a1, a5, a6);
  if ( (int)result >= 0 )
  {
    *a4 = 0;
    return 0LL;
  }
  return result;
}
