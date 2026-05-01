/*
 * XREFs of ??$as@UIServiceProvider@@Uimmersive_shell_component@winrt@@@impl@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@1@PEAUimmersive_shell_component@1@@Z @ 0x1804D0B58
 * Callers:
 *     ?PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1804D3B60 (-PublishServices@immersive_shell_component@winrt@@EEAAJPEAUIServiceProvider@@PEAUIProfferService.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180221A18 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1804D5D04 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 */

_QWORD *__fastcall winrt::impl::as<IServiceProvider,winrt::immersive_shell_component>(_QWORD *a1, __int64 a2)
{
  signed int interface; // eax

  if ( a2 )
  {
    interface = winrt::impl::root_implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::query_interface(a2 + 32);
    if ( interface < 0 )
      winrt::throw_hresult(interface);
    *a1 = 0LL;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
