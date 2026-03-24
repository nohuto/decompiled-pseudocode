/*
 * XREFs of RtlAreAnyAccessesGranted @ 0x1406C3230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreAnyAccessesGranted(int a1, int a2)
{
  return (a1 & a2) != 0;
}
