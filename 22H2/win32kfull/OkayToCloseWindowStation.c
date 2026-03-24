/*
 * XREFs of OkayToCloseWindowStation @ 0x1C0065D10
 * Callers:
 *     <none>
 * Callees:
 *     CheckHandleFlag @ 0x1C00666B8 (CheckHandleFlag.c)
 */

__int64 __fastcall OkayToCloseWindowStation(PRKPROCESS *a1)
{
  if ( !*((_BYTE *)a1 + 24) )
    return 0LL;
  if ( (unsigned int)PsGetProcessSessionIdEx(*a1) == -1 )
    return 3221225506LL;
  if ( !(unsigned int)CheckHandleFlag(*a1) && !(unsigned int)CheckHandleFlag(*a1) )
    return 0LL;
  return 2147483665LL;
}
