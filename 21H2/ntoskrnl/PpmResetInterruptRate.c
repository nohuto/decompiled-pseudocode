/*
 * XREFs of PpmResetInterruptRate @ 0x14057C6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmResetInterruptRate(_DWORD *a1)
{
  int v1; // eax

  _disable();
  v1 = a1[8096];
  a1[2921] = 0;
  a1[2920] = v1;
  _enable();
  return 0LL;
}
