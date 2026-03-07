bool __fastcall DXGVIRTUALMACHINE::IsVailEnabled(DXGVIRTUALMACHINE *this)
{
  bool v2; // si
  __int64 v3; // rax

  v2 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 64));
  v3 = *((_QWORD *)this + 41);
  if ( v3 )
    v2 = *(_QWORD *)(v3 + 96) != 0LL;
  *((_QWORD *)this + 9) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 64, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
