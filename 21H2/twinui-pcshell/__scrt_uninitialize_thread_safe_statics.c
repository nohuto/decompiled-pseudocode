/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180091080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18064F5F8);
  if ( hHandle )
    CloseHandle(hHandle);
}
