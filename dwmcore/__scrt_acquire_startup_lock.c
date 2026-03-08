/*
 * XREFs of __scrt_acquire_startup_lock @ 0x18010E590
 * Callers:
 *     dllmain_crt_process_attach @ 0x18010E9E8 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x18010EB10 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x18010F1E0 (__scrt_is_ucrt_dll_in_use.c)
 */

char _scrt_acquire_startup_lock()
{
  PVOID StackBase; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64(&_scrt_native_startup_lock, (signed __int64)StackBase, 0LL);
      if ( !v1 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}
