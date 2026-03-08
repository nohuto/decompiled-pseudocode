/*
 * XREFs of ??1HotKeyCallback@@UEAA@XZ @ 0x14000A8FC
 * Callers:
 *     ??_GHotKeyCallback@@UEAAPEAXI@Z @ 0x14000A9B0 (--_GHotKeyCallback@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000A8CC (--1-$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall HotKeyCallback::~HotKeyCallback(HotKeyCallback *this)
{
  wil::com_ptr_t<IMessageSession,wil::err_returncode_policy>::~com_ptr_t<IMessageSession,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IMessageSession,wil::err_returncode_policy>::~com_ptr_t<IMessageSession,wil::err_returncode_policy>((__int64 *)this + 4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>((__int64)this);
}
