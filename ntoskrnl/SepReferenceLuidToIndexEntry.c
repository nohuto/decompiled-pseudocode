/*
 * XREFs of SepReferenceLuidToIndexEntry @ 0x1402DFF34
 * Callers:
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14070BB54 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepReferenceLuidToIndexEntry(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
