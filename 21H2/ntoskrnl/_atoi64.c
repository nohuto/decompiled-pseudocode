/*
 * XREFs of _atoi64 @ 0x1403E0C98
 * Callers:
 *     KiMatchLoadOption @ 0x140A55D44 (KiMatchLoadOption.c)
 *     RamdiskStart @ 0x140B550AC (RamdiskStart.c)
 * Callees:
 *     _strtoi64 @ 0x1403E0BE4 (_strtoi64.c)
 */

__int64 __cdecl atoi64(const char *String)
{
  if ( String )
    return strtoi64(String, 0LL, 10);
  else
    return 0LL;
}
