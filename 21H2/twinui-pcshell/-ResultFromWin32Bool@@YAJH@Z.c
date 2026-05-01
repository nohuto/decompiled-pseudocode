/*
 * XREFs of ?ResultFromWin32Bool@@YAJH@Z @ 0x1801DBBB8
 * Callers:
 *     ?IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ @ 0x180116018 (-IsTempProfile@ShellFeedsAvailabilityHelpers@@YAEXZ.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1801C0284 (-ResultFromKnownLastError@@YAJXZ.c)
 */

signed int __fastcall ResultFromWin32Bool(int a1)
{
  signed int result; // eax

  result = 0;
  if ( !a1 )
    return ResultFromKnownLastError();
  return result;
}
