/*
 * XREFs of CmpHashUnicodeComponent @ 0x1407A480C
 * Callers:
 *     CmDeleteLayeredKey @ 0x1406144A0 (CmDeleteLayeredKey.c)
 *     CmpAddStringToMapping @ 0x140734140 (CmpAddStringToMapping.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14074BC50 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddToLeaf @ 0x1407A4520 (CmpAddToLeaf.c)
 *     CmpGetNameControlBlock @ 0x1407B01F0 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x1407B0800 (CmpCheckLeaf.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x1407FE888 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x14084B55C (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpGetMappingHiveForString @ 0x140A16EC8 (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A1D6E8 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A236F0 (CmpPartialPromoteSubkeys.c)
 *     CmpCreateRegistryRoot @ 0x140B5131C (CmpCreateRegistryRoot.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v8; // dx

  v1 = 0;
  v2 = _mm_cvtsi128_si32(*a1);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)a1->m128i_i64[1];
    v4 = (unsigned __int16)(((unsigned __int16)(v2 - 1) >> 1) + 1);
    do
    {
      v5 = *v3;
      if ( *v3 >= 0x61u )
      {
        if ( v5 > 0x7Au )
        {
          CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
          v5 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v8);
        }
        else
        {
          v5 -= 32;
        }
      }
      ++v3;
      v1 = v5 + 37 * v1;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
