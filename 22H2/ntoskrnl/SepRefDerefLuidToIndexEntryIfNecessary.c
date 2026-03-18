/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406B7AB4
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x1406B7620 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x14034975C (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x14034AFE8 (SepReferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}
