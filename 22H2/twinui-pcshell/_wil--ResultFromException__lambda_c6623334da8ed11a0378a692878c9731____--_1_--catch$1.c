/*
 * XREFs of _wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____::_1_::catch$1 @ 0x1804586B7
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18020EA1C (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::ResultFromException__lambda_c6623334da8ed11a0378a692878c9731____::_1_::catch_1(
        wil *a1,
        __int64 a2)
{
  *(_DWORD *)(a2 + 48) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
