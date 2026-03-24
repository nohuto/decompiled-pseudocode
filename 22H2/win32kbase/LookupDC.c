/*
 * XREFs of LookupDC @ 0x1C00226F0
 * Callers:
 *     UserGetMonitorDC @ 0x1C0022638 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0070940 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall LookupDC(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 *i; // r8
  int v4; // eax

  v2 = 0LL;
  for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
  {
    v4 = *((_DWORD *)i + 16);
    if ( (v4 & 0x400800) == 0 && i[1] == a1 && (v4 & 0x1000) != 0 && (!a2 || !i[11]) )
      return i;
  }
  return (__int64 *)v2;
}
