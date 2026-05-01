/*
 * XREFs of ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180121DB4
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$get_token_information@U_TOKEN_USER@@@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1800D62C4 (--$get_token_information@U_TOKEN_USER@@@wil@@YA-AV-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U.c)
 *     ?reset@?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKEN_USER@@@Z @ 0x1800D6FFC (-reset@-$unique_ptr@U_TOKEN_USER@@U-$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@QEAAXPEAU_TOKE.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x180116EB0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180116EB0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18020B078 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18026528C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026559C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
PSID *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser(
        __int64 a1,
        PSID *a2)
{
  __int64 v3; // rdi
  const char *v4; // r9
  _QWORD *v5; // rax
  LPWSTR StringSid; // [rsp+20h] [rbp-60h] BYREF
  PSID *v8; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD Src[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v8 = a2;
  v3 = a1 + 496;
  if ( *(_QWORD *)(a1 + 512) )
  {
    std::wstring::wstring((__int64)a2);
  }
  else
  {
    wil::get_token_information<_TOKEN_USER>(&v8);
    StringSid = 0LL;
    if ( !ConvertSidToStringSidW(*v8, &StringSid) )
    {
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x2BB,
        (unsigned int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
        v4);
      __debugbreak();
    }
    std::wstring::wstring((__int64)v9, StringSid);
    v5 = std::operator+<unsigned short>(Src, (__int64)v9, (__int64)L".json");
    std::wstring::operator=(v3, v5);
    std::wstring::_Tidy_deallocate(Src);
    std::wstring::wstring((__int64)a2);
    std::wstring::_Tidy_deallocate(v9);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&StringSid);
    wistd::unique_ptr<_TOKEN_USER,wistd::default_delete<_TOKEN_USER>>::reset((void **)&v8, 0LL);
  }
  return a2;
}
