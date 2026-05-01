/*
 * XREFs of ?GetIids@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800EB390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::GetIids(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory,Windows::Internal::Shell::ITabProxyWindowFactoryInternal>::NonDelegatingGetIids(
           (char *)this + 8,
           a2,
           a3);
}
