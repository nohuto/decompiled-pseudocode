__int64 __fastcall SleepstudyHelper_AcquireComponentLock(KSPIN_LOCK *a1, KIRQL *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a1 && a2 )
    *a2 = KeAcquireSpinLockRaiseToDpc(a1);
  else
    return (unsigned int)-1073741811;
  return v2;
}
