void __fastcall CPushLock::ReleaseLock(CPushLock *this, __int64 a2, __int64 a3)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    ExReleasePushLockExclusiveEx(this, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL, a3);
  }
  KeLeaveCriticalRegion();
}
