/*
 * XREFs of PopGenericEventHandler @ 0x14079C750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGenericEventHandler(char a1, _DWORD *a2)
{
  if ( a1 )
    *a2 = 1;
  else
    *a2 = PopPlatformAoAc != 0 ? 3 : 0;
  return 0LL;
}
