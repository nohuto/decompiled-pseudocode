void __fastcall CAutoPushLockSh::~CAutoPushLockSh(CAutoPushLockSh *this, __int64 a2, __int64 a3)
{
  ExReleasePushLockSharedEx(*(_QWORD *)this, 0LL, a3);
  KeLeaveCriticalRegion();
}
