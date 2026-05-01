/*
 * XREFs of ?IsUserAnAdmin@UserHelpers@@YA_NPEAUIUser@System@Windows@@@Z @ 0x1800A7C54
 * Callers:
 *     ?CanUserInstallStoreApps@@YA_NXZ @ 0x1800A27EC (-CanUserInstallStoreApps@@YA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?GetUserTokenHandle@UserHelpers@@YA?AV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@PEAUIUser@System@Windows@@@Z @ 0x1800A6DC4 (-GetUserTokenHandle@UserHelpers@@YA-AV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_p.c)
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800AA600 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B6D7C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801C9830 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020AEC8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall UserHelpers::IsUserAnAdmin(UserHelpers *this, struct Windows::System::IUser *a2)
{
  BOOL v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *v4; // rcx
  char v5; // bl
  DWORD LastError; // eax
  void *v7; // rdx
  unsigned int v8; // r8d
  const char *v9; // r9
  unsigned int ReturnLength; // [rsp+20h] [rbp-39h]
  WINBOOL IsMember; // [rsp+30h] [rbp-29h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-25h] BYREF
  char *TokenInformation; // [rsp+38h] [rbp-21h] BYREF
  HANDLE TokenHandle[2]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE pSid[80]; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  UserHelpers::GetUserTokenHandle(TokenHandle);
  cbSid = 68;
  v2 = CreateWellKnownSid(WinBuiltinAdministratorsSid, 0LL, pSid, &cbSid);
  v4 = retaddr;
  v5 = 0;
  if ( !v2 )
    goto LABEL_12;
  IsMember = 0;
  if ( CheckTokenMembership(TokenHandle[0], pSid, &IsMember) && IsMember )
    goto LABEL_9;
  TokenInformation = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &TokenInformation,
    0LL);
  if ( !GetTokenInformation(TokenHandle[0], TokenLinkedToken, &TokenInformation, 8u, &cbSid) )
  {
    LastError = GetLastError();
    if ( ((LastError - 1312) & 0xFFFFFFFD) != 0 )
    {
LABEL_13:
      wil::details::in1diag3::Throw_Win32(retaddr, v7, v8, (const char *)LastError, ReturnLength);
      __debugbreak();
    }
  }
  if ( (unsigned __int64)(TokenInformation - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !CheckTokenMembership(TokenInformation, pSid, &IsMember) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0xA7,
      (unsigned int)"internal\\shellcommonshell\\inc\\Helpers\\UserHelpers.h",
      v9);
LABEL_12:
    wil::details::in1diag3::_Throw_GetLastError(
      v4,
      (void *)0x94,
      (unsigned int)"internal\\shellcommonshell\\inc\\Helpers\\UserHelpers.h",
      v3);
    goto LABEL_13;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&TokenInformation);
  if ( IsMember )
LABEL_9:
    v5 = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(TokenHandle);
  return v5;
}
