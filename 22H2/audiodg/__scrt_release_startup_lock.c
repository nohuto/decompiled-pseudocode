/*
 * XREFs of __scrt_release_startup_lock @ 0x14001D5D8
 * Callers:
 *     __scrt_common_main_seh @ 0x14001CE40 (__scrt_common_main_seh.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x14001DD18 (__scrt_is_ucrt_dll_in_use.c)
 */

__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = _scrt_is_ucrt_dll_in_use();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64(&_scrt_native_startup_lock, 0LL);
  }
  return result;
}
