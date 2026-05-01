/*
 * XREFs of ??1?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAA@XZ @ 0x1800D64F0
 * Callers:
 *     _wil::get_token_information__TOKEN_USER__::_1_::dtor$1 @ 0x1800D630F (_wil--get_token_information__TOKEN_USER__--_1_--dtor$1.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$0 @ 0x1800D6780 (_KioskPositioner--GetUserSidString_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser_::_1_::dtor$1 @ 0x180121EC8 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--GetCompatJsonFileNameForThi.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser_::_1_::dtor$1 @ 0x1801247B2 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--JsonFileBelongsToThisUser_-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::~unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>(
        __int64 a1)
{
  return wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(a1, 0LL);
}
