void __fastcall HotKeyCallback::~HotKeyCallback(HotKeyCallback *this)
{
  wil::com_ptr_t<IMessageSession,wil::err_returncode_policy>::~com_ptr_t<IMessageSession,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IMessageSession,wil::err_returncode_policy>::~com_ptr_t<IMessageSession,wil::err_returncode_policy>((__int64 *)this + 4);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>((__int64)this);
}
