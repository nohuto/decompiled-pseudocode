/*
 * XREFs of IsUninterceptable @ 0x1C00F62B4
 * Callers:
 *     EditionKeyEventLLHook @ 0x1C00EA4C0 (EditionKeyEventLLHook.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsHotKey @ 0x1C00F6854 (IsHotKey.c)
 */

__int64 IsUninterceptable()
{
  __int64 result; // rax

  result = IsHotKey((unsigned int)gfsRawModifiersForHotKey);
  if ( !result || !_bittest16((const signed __int16 *)(result + 26), 0xBu) )
    return 0LL;
  return result;
}
