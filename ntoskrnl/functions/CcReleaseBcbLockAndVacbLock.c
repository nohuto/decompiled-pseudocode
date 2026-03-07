void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  ExReleasePushLockEx(a2 + 104, 0LL);
  if ( a1 )
    ExReleaseFastMutex((PFAST_MUTEX)(a2 + 288));
}
