/*
 * XREFs of _wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8____::_1_::catch$7 @ 0x1800CE4B1
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18020EBCC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_c2b84dc65f1ba037143a467dc4ccf5a8____::_1_::catch_7(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
