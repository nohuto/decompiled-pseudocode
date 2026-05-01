/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x1801DBA08
 * Callers:
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x180115EA8 (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C00D4 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
