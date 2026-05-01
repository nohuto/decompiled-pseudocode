/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180135E5C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller_::_1_::dtor$1 @ 0x180137D2C (_winrt--Windows--Internal--Shell--implementation--PinManager--CheckForTrustedCaller_ea_180137D2C.c)
 *     __anonymous_namespace_::DoRequestorAndForegroundPublisherMatch_::_1_::dtor$1 @ 0x180138E67 (__anonymous_namespace_--DoRequestorAndForegroundPublisherMatch_--_1_--dtor$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::GetPinRequestContext_::_1_::dtor$1 @ 0x180139ABC (_winrt--Windows--Internal--Shell--implementation--PinManager--GetPinRequestContext_--_1_--dtor$1.c)
 *     _wil::GetProcessHandleForClientOfObject_::_1_::dtor$0 @ 0x18013A04D (_wil--GetProcessHandleForClientOfObject_--_1_--dtor$0.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShim_::_1_::dtor$6 @ 0x18013C461 (_winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShim_--_1_--dtor$6.c)
 * Callees:
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009530C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  BOOL (__stdcall *v3)(HANDLE); // [rsp+38h] [rbp+10h] BYREF

  result = *a1;
  if ( *a1 )
  {
    v2 = *a1;
    v3 = CloseHandle;
    return wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v3, &v2);
  }
  return result;
}
