/*
 * XREFs of wil::details::ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___::_ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___ @ 0x1800DACA8
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1804AA400 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$2 @ 0x1804AA7C4 (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_a51999ec5485a2ae2fac9775a15bfb06_::operator() @ 0x1800DACC8 (_lambda_a51999ec5485a2ae2fac9775a15bfb06_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___::_ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_a51999ec5485a2ae2fac9775a15bfb06_::operator()();
  }
  return result;
}
