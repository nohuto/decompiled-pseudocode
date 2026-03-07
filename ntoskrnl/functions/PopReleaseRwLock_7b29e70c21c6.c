void __fastcall PopReleaseRwLock(ULONG_PTR a1)
{
  if ( *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
