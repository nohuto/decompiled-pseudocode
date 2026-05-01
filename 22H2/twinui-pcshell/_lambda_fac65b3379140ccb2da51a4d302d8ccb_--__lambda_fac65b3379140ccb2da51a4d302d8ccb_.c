/*
 * XREFs of _lambda_fac65b3379140ccb2da51a4d302d8ccb_::__lambda_fac65b3379140ccb2da51a4d302d8ccb_ @ 0x18037F7F0
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___::_scalar_deleting_destructor_ @ 0x1803803C0 (XamlExplorerHostWindowCreatedCallback__lambda_fac65b3379140ccb2da51a4d302d8ccb___--_scalar_delet.c)
 *     ?Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x180381D50 (-Show@XamlAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$14 @ 0x180382386 (_XamlAltTabViewHost--Show_--_1_--dtor$14.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18036C938 (--1WindowCreatedCallback@XamlSwitcherTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_fac65b3379140ccb2da51a4d302d8ccb_::__lambda_fac65b3379140ccb2da51a4d302d8ccb_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  XamlSwitcherTelemetry::WindowCreatedCallback::~WindowCreatedCallback((XamlSwitcherTelemetry::WindowCreatedCallback *)(a1 + 8));
  v2 = a1[6];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = a1[5];
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = a1[4];
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return Microsoft::WRL::ComPtr<CAltTabViewHost>::InternalRelease(a1 + 1);
}
