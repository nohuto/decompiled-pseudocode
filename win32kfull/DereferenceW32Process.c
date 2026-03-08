/*
 * XREFs of DereferenceW32Process @ 0x1C00CA570
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceW32ProcessEx @ 0x1C00CA980 (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall DereferenceW32Process(__int64 a1)
{
  return DereferenceW32ProcessEx(a1, 1LL);
}
