/*
 * XREFs of PsReferenceVsmEnclave @ 0x14090E2F4
 * Callers:
 *     MiCanDeleteEnclave @ 0x1405498A8 (MiCanDeleteEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsReferenceVsmEnclave(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
