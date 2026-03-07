void __fastcall anonymous_namespace_::OnScreenOnStudySessionStateChange(__int128 *a1)
{
  DWORD CurrentThreadId; // eax
  __int128 v3; // xmm0

  AcquireSRWLockExclusive(&SRWLock);
  CurrentThreadId = GetCurrentThreadId();
  byte_1803E2BE9 = 1;
  dword_1803E6EC8 = CurrentThreadId;
  v3 = *a1;
  dword_1803E6EC8 = 0;
  xmmword_1803E2C00 = v3;
  ReleaseSRWLockExclusive(&SRWLock);
}
