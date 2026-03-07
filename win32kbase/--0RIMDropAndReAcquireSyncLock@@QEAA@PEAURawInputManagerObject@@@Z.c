RIMDropAndReAcquireSyncLock *__fastcall RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock(
        RIMDropAndReAcquireSyncLock *this,
        struct RawInputManagerObject *a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = 0LL;
  if ( *((struct _KTHREAD **)a2 + 14) == KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    ObReferenceObjectByPointer(a2, 3u, ExRawInputManagerObjectType, 1);
    v4 = *(_QWORD *)this;
    *(_QWORD *)(v4 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  return this;
}
