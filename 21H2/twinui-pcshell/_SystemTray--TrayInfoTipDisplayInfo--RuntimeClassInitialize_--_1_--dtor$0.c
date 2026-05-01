/*
 * XREFs of _SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1803EC204
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::RuntimeClassInitialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<SystemTray::TrayNotifyCallback,wil::err_exception_policy>::~com_ptr_t<SystemTray::TrayNotifyCallback,wil::err_exception_policy>(
           (__int64 *)(a2 + 104),
           (volatile int *)a2);
}
