void __fastcall tagObjLock::UnLockShared(tagObjLock *this)
{
  _InterlockedDecrement((volatile signed __int32 *)this + 4);
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
}
