/*
 * XREFs of _atoi64 @ 0x1403D36B0
 * Callers:
 *     KiMatchLoadOption @ 0x140A8CE30 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140B98380 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1403D35EC (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
