/*
 * XREFs of ?close_reset@?$resource_policy@PEAXP6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX_J$0?0PEAX@details@wil@@SAXPEAX@Z @ 0x18014D42C
 * Callers:
 *     ??4?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AXPEAX@Z$1?DeleteAndCloseFileHandle@?A0x5aed2876@@YAX0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180147B78 (--4-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AXPEAX@Z$1-DeleteAndClos.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801A8FE8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::resource_policy<void *,void (*)(void *),&void `anonymous namespace'::DeleteAndCloseFileHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,__int64,-1,void *>::close_reset(
        __int64 a1)
{
  _BYTE v1[4]; // [rsp+20h] [rbp-28h] BYREF
  DWORD LastError; // [rsp+24h] [rbp-24h]
  __int64 (__fastcall *v3)(HANDLE); // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1;
  v1[0] = 0;
  LastError = GetLastError();
  v3 = anonymous_namespace_::DeleteAndCloseFileHandle;
  wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v3, &v4);
  wil::last_error_context::~last_error_context((wil::last_error_context *)v1);
}
