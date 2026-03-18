/*
 * XREFs of HvAllocateCell @ 0x14070A478
 * Callers:
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x140708618 (CmpAddSubKeyEx.c)
 *     CmpSetValueDataNew @ 0x14070951C (CmpSetValueDataNew.c)
 *     CmpAddValueToListEx @ 0x140709B64 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x140709FE8 (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyExisting @ 0x14070B7B4 (CmpSetValueKeyExisting.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CFC8 (CmpSetSecurityDescriptorInfo.c)
 *     HvDuplicateCell @ 0x1407D7A50 (HvDuplicateCell.c)
 *     CmpCopyCell @ 0x1407DE230 (CmpCopyCell.c)
 *     CmpSetValueDataExisting @ 0x1407E5F94 (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x14087495C (CmpCreateHiveRootCell.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140A163B4 (CmpAddValueKeyTombstone.c)
 *     CmpConcatenateValueLists @ 0x140A20FBC (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A21188 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpSplitLeaf @ 0x140A24ADC (CmpSplitLeaf.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A28DA0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29450 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpCreateRootNode @ 0x140B3ABDC (CmpCreateRootNode.c)
 * Callees:
 *     HvpDoAllocateCell @ 0x14070A4F0 (HvpDoAllocateCell.c)
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
