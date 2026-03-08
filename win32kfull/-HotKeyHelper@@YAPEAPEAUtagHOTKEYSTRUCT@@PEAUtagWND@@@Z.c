/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00120DC
 * Callers:
 *     DWP_SetHotKey @ 0x1C0012040 (DWP_SetHotKey.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

struct tagWND ***__fastcall HotKeyHelper(struct tagWND *a1)
{
  struct tagWND ***result; // rax
  struct tagWND **v3; // rdx

  for ( result = (struct tagWND ***)(SGDGetUserSessionState(a1) + 12720); ; result = (struct tagWND ***)(v3 + 2) )
  {
    v3 = *result;
    if ( !*result || *v3 == a1 )
      break;
  }
  return result;
}
