char __fastcall PopIsLockConsoleTimeoutActive(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 1;
  PopAcquireAdaptiveLock(1, a2);
  if ( !byte_140C398C1 || byte_140C398C2 || dword_140C398D8 == -1 )
    v2 = 0;
  PopReleaseAdaptiveLock();
  return v2;
}
