/*
 * XREFs of sub_180115444 @ 0x180115444
 * Callers:
 *     DllMain @ 0x18006D2E0 (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 sub_180115444()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348 )
  {
    while ( v0 )
    {
      v1 = v0[1];
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        v0[1] = 0LL;
      }
      v0 = (_QWORD *)*v0;
    }
    off_18019C348 = &off_18019C348;
  }
  return result;
}
