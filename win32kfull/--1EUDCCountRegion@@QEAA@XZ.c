void __fastcall EUDCCountRegion::~EUDCCountRegion(EUDCCountRegion *this)
{
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
  GreAcquireSemaphore(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  --*(_DWORD *)(*((_QWORD *)this + 5) + 13300LL);
  EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
  GreReleaseSemaphoreInternal(*(_QWORD *)(*((_QWORD *)this + 5) + 13272LL));
  if ( *((_DWORD *)this + 8) )
  {
    PopThreadGuardedObject(this);
    *((_DWORD *)this + 8) = 0;
  }
}
