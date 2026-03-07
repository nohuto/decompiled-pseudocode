void __fastcall DXGADAPTER::ClearDeviceObject(DXGADAPTER *this)
{
  DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 104));
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
}
