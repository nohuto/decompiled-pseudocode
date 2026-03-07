void __fastcall DXGVIRTUALMACHINE::BeginTransaction(DXGVIRTUALMACHINE *this, struct DXGKVMB_GUEST_TRANSACTION *a2)
{
  char *v2; // rsi
  char *v5; // rbx
  char **v6; // rax

  v2 = (char *)this + 344;
  DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 344));
  v5 = (char *)this + 376;
  v6 = (char **)*((_QWORD *)v5 + 1);
  if ( *v6 != v5 )
    __fastfail(3u);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = (char *)a2;
  *((_QWORD *)v5 + 1) = a2;
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
