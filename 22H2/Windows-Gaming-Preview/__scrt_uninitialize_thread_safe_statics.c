/*
 * XREFs of __scrt_uninitialize_thread_safe_statics @ 0x180044D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_18005AA88);
  if ( hObject )
    CloseHandle(hObject);
}
