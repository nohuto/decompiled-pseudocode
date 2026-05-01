/*
 * XREFs of ??1?$ComPtr@VImmersiveMonitorHelper@@@WRL@Microsoft@@QEAA@XZ @ 0x18039B094
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitorHelper_IServiceProvider___&_IXamlLauncherState____::_1_::dtor$1 @ 0x18039A4A3 (_Microsoft--WRL--Details--MakeAndInitialize_ImmersiveMonitorHelper_ImmersiveMonitor_ea_18039A4A3.c)
 *     _XamlLauncher::XamlLauncher_::_1_::dtor$6 @ 0x18039AEB6 (_XamlLauncher--XamlLauncher_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::~ComPtr<ImmersiveMonitorHelper>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ImmersiveMonitorHelper>::InternalRelease(a1);
}
