bool __fastcall CDesktopInputSink::IsEqualByLuid(const struct _LUID *a1)
{
  CPushLock *Instance; // rdi
  __int64 v3; // rbx

  Instance = CDesktopInputSink::GetInstance();
  CPushLock::AcquireLockShared(Instance);
  v3 = *((_QWORD *)CDesktopInputSink::GetInstance() + 3);
  CPushLock::ReleaseLock(Instance);
  return v3 == *a1;
}
