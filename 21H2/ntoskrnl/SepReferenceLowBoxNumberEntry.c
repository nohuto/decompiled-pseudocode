/*
 * XREFs of SepReferenceLowBoxNumberEntry @ 0x140925808
 * Callers:
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepReferenceLowBoxNumberEntry(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
