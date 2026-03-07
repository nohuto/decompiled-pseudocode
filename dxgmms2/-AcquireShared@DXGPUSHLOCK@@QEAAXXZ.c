void __fastcall DXGPUSHLOCK::AcquireShared(DXGPUSHLOCK *this)
{
  __int64 v2; // rcx

  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(this, 0LL) )
  {
    if ( bTracingEnabled && *((_DWORD *)this + 6) != -1 && (byte_1C00769C1 & 1) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventBlockThread);
    ExAcquirePushLockSharedEx(this, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
}
