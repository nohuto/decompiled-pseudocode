/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x140603C40
 * Callers:
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     SepSetProcessUniqueAttribute @ 0x140603B5C (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x140275A04 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x1402D6D8C (SepReferenceLuidToIndexEntry.c)
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
