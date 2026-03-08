/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x18010EE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1803E2698);
  if ( hHandle )
    CloseHandle(hHandle);
}
