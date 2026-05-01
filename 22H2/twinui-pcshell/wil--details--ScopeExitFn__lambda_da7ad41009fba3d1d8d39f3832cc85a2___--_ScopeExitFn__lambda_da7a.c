/*
 * XREFs of wil::details::ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___::_ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___ @ 0x1803102B4
 * Callers:
 *     __lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()_::_1_::dtor$0 @ 0x18031100F (__lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_da7ad41009fba3d1d8d39f3832cc85a2_::operator() @ 0x180311188 (_lambda_da7ad41009fba3d1d8d39f3832cc85a2_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___::_ScopeExitFn__lambda_da7ad41009fba3d1d8d39f3832cc85a2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_da7ad41009fba3d1d8d39f3832cc85a2_::operator()();
  }
  return result;
}
