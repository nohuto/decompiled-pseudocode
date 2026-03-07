void __fastcall DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK(DXGPROCESSVIDMMLOCK *this)
{
  __int64 v1; // rcx
  __int64 v2; // rcx

  v1 = *(_QWORD *)this;
  if ( v1 )
  {
    v2 = v1 + 184;
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
  }
}
