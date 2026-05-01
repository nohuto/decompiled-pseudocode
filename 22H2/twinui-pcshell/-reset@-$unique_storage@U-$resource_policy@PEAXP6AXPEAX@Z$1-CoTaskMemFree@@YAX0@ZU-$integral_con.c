/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800AE0A8
 * Callers:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x1800ADEB8 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 * Callees:
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801A8FE8 (--1last_error_context@wil@@QEAA@XZ.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        __int64 *a1,
        __int64 a2)
{
  char v4; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  void (__stdcall *v7)(LPVOID); // [rsp+40h] [rbp+18h] BYREF

  if ( *a1 )
  {
    v6 = *a1;
    v4 = 0;
    LastError = GetLastError();
    v7 = CoTaskMemFree;
    wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v7, &v6);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v4);
  }
  *a1 = a2;
}
