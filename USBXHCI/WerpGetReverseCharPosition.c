/*
 * XREFs of WerpGetReverseCharPosition @ 0x1C0054BFC
 * Callers:
 *     WerpParseKeyName @ 0x1C0054C28 (WerpParseKeyName.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall WerpGetReverseCharPosition(unsigned __int64 a1, _WORD *a2)
{
  if ( a1 && a2 )
  {
    while ( (unsigned __int64)a2 >= a1 )
    {
      if ( *a2 == 92 )
        return a2;
      --a2;
    }
  }
  return 0LL;
}
