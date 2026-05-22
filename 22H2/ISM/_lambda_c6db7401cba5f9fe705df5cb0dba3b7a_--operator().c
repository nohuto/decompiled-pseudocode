/*
 * XREFs of _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator() @ 0x18019F958
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_Microsoft::WRL::ComPtr_HotkeyClientRegistration_________lambda_c6db7401cba5f9fe705df5cb0dba3b7a___ @ 0x18019EC98 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_Microsoft--WRL--ComPtr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

char __fastcall lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::operator()(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  char v4; // bl

  v3 = *a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) == *(_QWORD *)(v3 + 24)
    && *(_DWORD *)(*(_QWORD *)a1 + 32LL) == *(_DWORD *)(v3 + 32) )
  {
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(a2);
  return v4;
}
