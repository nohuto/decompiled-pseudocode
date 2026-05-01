/*
 * XREFs of ??1?$tuple@Vpath@filesystem@std@@V?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180147A84
 * Callers:
 *     __anonymous_namespace_::CreateTemporaryLogoFile_::_1_::dtor$0 @ 0x180149283 (__anonymous_namespace_--CreateTemporaryLogoFile_--_1_--dtor$0.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$3 @ 0x18014CD95 (_RequestNotificationPinConsentAsync$_ResumeCoro$2_--_1_--dtor$3.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall std::tuple<std::filesystem::path,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>>::~tuple<std::filesystem::path,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>>(
        __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 (__fastcall *v3)(HANDLE); // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF

  std::wstring::_Tidy_deallocate(a1 + 1);
  result = *a1 - 1;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = *a1;
    v3 = anonymous_namespace_::DeleteAndCloseFileHandle;
    return wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v3, &v4);
  }
  return result;
}
