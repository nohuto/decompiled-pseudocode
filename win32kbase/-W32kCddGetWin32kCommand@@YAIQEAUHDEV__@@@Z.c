/*
 * XREFs of ?W32kCddGetWin32kCommand@@YAIQEAUHDEV__@@@Z @ 0x1C00D1970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall W32kCddGetWin32kCommand(_DWORD *a1)
{
  __int64 v2; // rdx
  int result; // eax

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  result = a1[648] | 0x40000000;
  if ( !*(_DWORD *)(v2 + 1296) )
    return a1[648];
  return result;
}
