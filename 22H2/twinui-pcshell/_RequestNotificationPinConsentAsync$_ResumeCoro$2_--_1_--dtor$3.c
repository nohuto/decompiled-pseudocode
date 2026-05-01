/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$3 @ 0x18014CD95
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$tuple@Vpath@filesystem@std@@V?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180147A84 (--1-$tuple@Vpath@filesystem@std@@V-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_po.c)
 */

unsigned __int64 __fastcall RequestNotificationPinConsentAsync__ResumeCoro_2_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 2720) = *(_QWORD *)(a2 + 2848) + 104LL;
  return std::tuple<std::filesystem::path,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>>::~tuple<std::filesystem::path,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>>(*(__int64 **)(a2 + 2720));
}
