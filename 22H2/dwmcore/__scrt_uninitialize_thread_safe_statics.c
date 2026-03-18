/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18010F990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1803E5698);
  if ( hHandle )
    CloseHandle(hHandle);
}
