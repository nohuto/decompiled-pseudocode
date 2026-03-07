__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  if ( a1 )
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 288));
  return ExAcquirePushLockExclusiveEx(a2 + 104, 0LL);
}
