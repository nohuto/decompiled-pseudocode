void __fastcall wil::details::close_invoke_helper<1,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),_TP_WORK *>::close_reset(
        PTP_WORK pwk)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  WaitForThreadpoolWorkCallbacks(pwk, 1);
  CloseThreadpoolWork(pwk);
  SetLastError(LastError);
}
