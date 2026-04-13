/*
 * XREFs of ___scrt_acquire_startup_lock @ 0x100043A6
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 * Callees:
 *     ___scrt_is_ucrt_dll_in_use @ 0x10004B7E (___scrt_is_ucrt_dll_in_use.c)
 */

char __scrt_acquire_startup_lock()
{
  PVOID StackBase; // edx
  signed __int32 v1; // eax

  if ( __scrt_is_ucrt_dll_in_use() )
  {
    StackBase = NtCurrentTeb()->NtTib.StackBase;
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange(&__scrt_native_startup_lock, (signed __int32)StackBase, 0);
      if ( !v1 )
        break;
      if ( StackBase == (PVOID)v1 )
        return 1;
    }
  }
  return 0;
}
