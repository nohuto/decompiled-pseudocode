char __fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx((__int64 *)(a1 + 64), 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
