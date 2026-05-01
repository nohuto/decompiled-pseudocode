/*
 * XREFs of ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800D6598
 * Callers:
 *     ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D668C (-LoadAssignedAccessConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguratio.c)
 * Callees:
 *     ??$get_token_information@U_TOKEN_USER@@@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1800D6158 (--$get_token_information@U_TOKEN_USER@@@wil@@YA-AV-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1800D6E8C (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020AEC8 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
LPWSTR *__fastcall KioskPositioner::GetUserSidString(PSID *a1, LPWSTR *a2)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSID *v6; // [rsp+40h] [rbp+8h] BYREF
  LPWSTR *v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  v6 = a1;
  wil::get_token_information<_TOKEN_USER>(&v6);
  *a2 = 0LL;
  if ( !ConvertSidToStringSidW(*v6, a2) )
  {
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x47B,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      v3);
    __debugbreak();
  }
  wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset(&v6, 0LL);
  return a2;
}
