__int64 __fastcall wil::com_ptr_t<HotKeyCallback,wil::err_returncode_policy>::~com_ptr_t<HotKeyCallback,wil::err_returncode_policy>(
        _QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release();
  return result;
}
