/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406F382C
 * Callers:
 *     SepFilterToken @ 0x1406CA87C (SepFilterToken.c)
 *     SepSetProcessUniqueAttribute @ 0x1406F3748 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x1403000D4 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x14036132C (SepReferenceLuidToIndexEntry.c)
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
