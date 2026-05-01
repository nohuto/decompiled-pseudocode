/*
 * XREFs of ?GetIids@?$produce_base@UPinManager@implementation@Shell@Internal@Windows@winrt@@UIPinManager@3456@X@impl@winrt@@UEAAHPEAIPEAPEAUguid@3@@Z @ 0x1801396F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::implementation::PinManager,winrt::Windows::Internal::Shell::IPinManager,void>::GetIids(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = a1 + 40;
  if ( !a1 )
    v1 = 48LL;
  return winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::NonDelegatingGetIids(v1);
}
