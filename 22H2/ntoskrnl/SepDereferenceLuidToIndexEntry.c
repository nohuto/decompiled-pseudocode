/*
 * XREFs of SepDereferenceLuidToIndexEntry @ 0x14034975C
 * Callers:
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1406B7AB4 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepTokenDeleteMethod @ 0x140729600 (SepTokenDeleteMethod.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall SepDereferenceLuidToIndexEntry(__int64 a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  signed __int64 result; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    *(_BYTE *)(a1 + 48) = 1;
  }
  return result;
}
