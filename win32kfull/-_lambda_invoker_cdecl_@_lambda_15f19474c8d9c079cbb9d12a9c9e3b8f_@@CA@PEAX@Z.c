__int64 __fastcall _lambda_15f19474c8d9c079cbb9d12a9c9e3b8f_::_lambda_invoker_cdecl_(void *a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  GreAcquireSemaphore(*(_QWORD *)(v1 + 13272));
  --*(_DWORD *)(v1 + 13300);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  return GreReleaseSemaphoreInternal(*(_QWORD *)(v1 + 13272));
}
