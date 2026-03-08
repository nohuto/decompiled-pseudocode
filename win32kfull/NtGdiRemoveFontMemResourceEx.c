/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x1C02C6D60
 * Callers:
 *     <none>
 * Callees:
 *     GreRemoveFontMemResourceEx @ 0x1C0290DB8 (GreRemoveFontMemResourceEx.c)
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(Gre::Base *a1)
{
  if ( a1 )
    return GreRemoveFontMemResourceEx(a1);
  else
    return 0LL;
}
