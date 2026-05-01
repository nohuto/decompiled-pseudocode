/*
 * XREFs of _anonymous_namespace_::DeleteAndCloseFileHandle @ 0x1801495C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801B6F2C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801C868C (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall anonymous_namespace_::DeleteAndCloseFileHandle(HANDLE hObject)
{
  const char *v2; // r9
  const char *v3; // r9
  HANDLE v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = ReOpenFile(hObject, 0x10000u, 7u, 0x4000000u);
  if ( (((unsigned __int64)v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x16,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v2);
  if ( !CloseHandle(hObject) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x17,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      v3);
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v5);
}
