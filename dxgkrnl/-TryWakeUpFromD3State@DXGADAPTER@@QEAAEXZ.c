char __fastcall DXGADAPTER::TryWakeUpFromD3State(DXGADAPTER *this)
{
  char v2; // si
  __int64 v3; // rdx

  v2 = 0;
  DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)this + 104));
  if ( *((_DWORD *)this + 40) == 1 )
  {
    DXGADAPTER::WakeUpAdapter(this);
    v2 = 1;
  }
  else
  {
    v3 = *((_QWORD *)this + 27);
    if ( v3 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v3 + 64) + 4104LL));
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 30);
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
