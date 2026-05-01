/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180147B10
 * Callers:
 *     __anonymous_namespace_::CreateTemporaryFile_::_1_::dtor$6 @ 0x180148E6A (__anonymous_namespace_--CreateTemporaryFile_--_1_--dtor$6.c)
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$2 @ 0x18014CD66 (_RequestNotificationPinConsentAsync$_ResumeCoro$2_--_1_--dtor$2.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>(
        __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 (__fastcall *v2)(HANDLE); // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h] BYREF

  result = *a1 - 1;
  if ( result <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = *a1;
    v2 = anonymous_namespace_::DeleteAndCloseFileHandle;
    return wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v2, &v3);
  }
  return result;
}
