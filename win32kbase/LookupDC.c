/*
 * XREFs of LookupDC @ 0x1C003C0C0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C003BFDC (UserGetMonitorDC.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall LookupDC(__int64 a1, int a2)
{
  __int64 v2; // r9
  __int64 *i; // r8
  int v4; // eax

  v2 = 0LL;
  for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
  {
    v4 = *((_DWORD *)i + 16);
    if ( (v4 & 0x400800) == 0 && i[1] == a1 && (v4 & 0x1000) != 0 && (!a2 || !i[11]) )
      return i;
  }
  return (__int64 *)v2;
}
