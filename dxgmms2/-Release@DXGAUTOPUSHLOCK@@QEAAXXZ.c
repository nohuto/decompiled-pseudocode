void __fastcall DXGAUTOPUSHLOCK::Release(DXGAUTOPUSHLOCK *this)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 4);
  if ( v1 == 1 )
  {
    *((_DWORD *)this + 4) = 0;
    v3 = *((_QWORD *)this + 1);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 16));
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  else
  {
    if ( v1 != 2 )
      return;
    *((_DWORD *)this + 4) = 0;
    v2 = *((_QWORD *)this + 1);
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
  }
  KeLeaveCriticalRegion();
}
