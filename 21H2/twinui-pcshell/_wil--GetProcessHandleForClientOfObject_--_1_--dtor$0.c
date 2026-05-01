/*
 * XREFs of _wil::GetProcessHandleForClientOfObject_::_1_::dtor$0 @ 0x18013A1BD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180135FCC (--1-$unique_any_t@V-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle.c)
 */

__int64 __fastcall wil::GetProcessHandleForClientOfObject_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(*(__int64 **)(a2 + 64));
  }
  return result;
}
