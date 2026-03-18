/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x1C02C4570
 * Callers:
 *     <none>
 * Callees:
 *     GreRemoveFontMemResourceEx @ 0x1C028E564 (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(Gre::Base *a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0LL;
}
