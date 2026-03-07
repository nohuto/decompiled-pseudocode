__int64 __fastcall Microsoft::WRL::ComPtr<HotKeyCallback>::~ComPtr<HotKeyCallback>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release(result);
  }
  return result;
}
