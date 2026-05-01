/*
 * XREFs of wil::details::ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___::_ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___ @ 0x180310168
 * Callers:
 *     __lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()_::_1_::dtor$2 @ 0x180311027 (__lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator()_--_1_--dtor$2.c)
 *     __lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator()_::_1_::dtor$7 @ 0x180311057 (__lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator()_--_1_--dtor$7.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$8 @ 0x18031902D (_ViewEventDispatcher--ViewCreated_--_1_--dtor$8.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$11 @ 0x18031A093 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$11.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$2 @ 0x18031B06C (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$8 @ 0x18031C0D0 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___::_ScopeExitFn__lambda_9fd9efb7673d546cdb2afc301c333d14___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return MsgRelease(**(_QWORD **)a1);
  }
  return result;
}
