/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x14003E7D4
 * Callers:
 *     ?InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x14002421C (-InitializeEvents@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x140014320 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x14003B41C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        wil::details **a1,
        char a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details *v5; // rcx
  wil::details *Event; // rdi
  __int64 v7; // r8
  const char *v8; // r9

  v3 = 0;
  Event = (wil::details *)CreateEventExW(0LL, 0LL, a2 & 3, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      a1,
      Event);
  }
  else
  {
    return (unsigned int)wil::details::GetLastErrorFailHr(v5, v4, v7, v8);
  }
  return v3;
}
