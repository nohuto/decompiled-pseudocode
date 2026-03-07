EUDCCountRegion *__fastcall EUDCCountRegion::EUDCCountRegion(
        EUDCCountRegion *this,
        struct Gre::Full::SESSION_GLOBALS *a2)
{
  __int64 v3; // rbx

  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = a2;
  v3 = *((_QWORD *)a2 + 1661);
  GreAcquireSemaphoreSharedInternal(v3);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", v3);
  GreAcquireSemaphore(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  ++*(_DWORD *)(*((_QWORD *)this + 5) + 13300LL);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  if ( !*((_DWORD *)this + 8) )
  {
    PushThreadGuardedObject(this, 0LL, _lambda_15f19474c8d9c079cbb9d12a9c9e3b8f_::_lambda_invoker_cdecl_);
    *((_DWORD *)this + 8) = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsem");
  GreReleaseSemaphoreInternal(v3);
  return this;
}
