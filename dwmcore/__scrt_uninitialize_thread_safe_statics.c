void __fastcall _scrt_uninitialize_thread_safe_statics()
{
  DeleteCriticalSection(&stru_1803E2698);
  if ( hHandle )
    CloseHandle(hHandle);
}
