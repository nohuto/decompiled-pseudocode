/*
 * XREFs of _atoi64 @ 0x1403D1A4C
 * Callers:
 *     KiMatchLoadOption @ 0x1409A2944 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140A96268 (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1403D1990 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
