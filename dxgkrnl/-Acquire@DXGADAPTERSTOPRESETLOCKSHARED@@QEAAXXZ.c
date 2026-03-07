void __fastcall DXGADAPTERSTOPRESETLOCKSHARED::Acquire(DXGADAPTERSTOPRESETLOCKSHARED *this)
{
  __int64 v2; // rbx

  if ( !*((_BYTE *)this + 16) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)this + 1) + 24LL));
    *(_QWORD *)this = -1LL;
    v2 = *((_QWORD *)this + 1);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2 + 136, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 152));
    *((_BYTE *)this + 16) = 1;
  }
}
