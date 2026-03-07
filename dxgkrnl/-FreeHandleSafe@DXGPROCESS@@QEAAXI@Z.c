void __fastcall DXGPROCESS::FreeHandleSafe(DXGPROCESS *this, unsigned int a2)
{
  char *v2; // rsi

  v2 = (char *)this + 248;
  DXGPUSHLOCK::AcquireExclusive((DXGPROCESS *)((char *)this + 248));
  HMGRTABLE::FreeHandle((DXGPROCESS *)((char *)this + 280), a2);
  *((_QWORD *)v2 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
