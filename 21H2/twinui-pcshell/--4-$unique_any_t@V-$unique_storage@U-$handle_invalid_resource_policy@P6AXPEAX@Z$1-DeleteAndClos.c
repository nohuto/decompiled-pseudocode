/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180147CE8
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ?close_reset@?$resource_policy@PEAXP6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX_J$0?0PEAX@details@wil@@SAXPEAX@Z @ 0x18014D59C (-close_reset@-$resource_policy@PEAXP6AXPEAX@Z$1-DeleteAndCloseFileHandle@-A0x5aed2876@@YAX0@ZU-$.c)
 */

__int64 *__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *)>>>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rsi

  if ( a1 != a2 )
  {
    v4 = *a2;
    if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::resource_policy<void *,void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,__int64,-1,void *>::close_reset();
    *a1 = v4;
    *a2 = -1LL;
  }
  return a1;
}
