/*
 * XREFs of _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$2 @ 0x18014CED6
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180147C80 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AXPEAX@Z$1-DeleteAndClos.c)
 */

unsigned __int64 __fastcall RequestNotificationPinConsentAsync__ResumeCoro_2_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 2712) = *(_QWORD *)(a2 + 2848) + 96LL;
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>(*(__int64 **)(a2 + 2712));
}
