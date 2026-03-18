/*
 * XREFs of CmpHashUnicodeComponent @ 0x140708D90
 * Callers:
 *     CmDeleteLayeredKey @ 0x14061695C (CmDeleteLayeredKey.c)
 *     CmpGetNameControlBlock @ 0x1406D8F90 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x1406DCB70 (CmpCheckLeaf.c)
 *     CmpAddToLeaf @ 0x140708AA4 (CmpAddToLeaf.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1407697F0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpAddStringToMapping @ 0x1407E4470 (CmpAddStringToMapping.c)
 *     CmpFindSubKeyByHashWithStatus @ 0x140826618 (CmpFindSubKeyByHashWithStatus.c)
 *     CmpWaitForHiveMount @ 0x14084E90C (CmpWaitForHiveMount.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpGetMappingHiveForString @ 0x140A19C18 (CmpGetMappingHiveForString.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140A20448 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x140A26450 (CmpPartialPromoteSubkeys.c)
 *     CmpCreateRegistryRoot @ 0x140B39780 (CmpCreateRegistryRoot.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D330 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpHashUnicodeComponent(__m128i *a1)
{
  unsigned int v1; // r9d
  __int16 v2; // ax
  unsigned __int16 *v3; // r10
  __int64 v4; // r11
  unsigned __int16 v5; // dx
  _QWORD *CurrentServerSiloGlobals; // rax
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
          v5 = NLS_UPCASE(CurrentServerSiloGlobals[154], v8);
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
