void __fastcall DXGADAPTER::EnableD3Requests(DXGADAPTER *this)
{
  __int64 v2; // rcx

  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 104));
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
    DpiEnableD3Requests(v2);
  _InterlockedDecrement((volatile signed __int32 *)this + 30);
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
}
