/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18014602C
 * Callers:
 *     _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x180138CD0 (_anonymous_namespace_--DoRequestorAndForegroundPublisherMatch.c)
 *     ?GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@1@@Z @ 0x18013A07C (-GetProcessHandleForClientOfObject_nothrow@wil@@YAJPEAUIUnknown@@KAEAV-$unique_any_t@V-$unique_s.c)
 * Callees:
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x1801C92BC (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(v4);
  *a1 = a2;
  return result;
}
