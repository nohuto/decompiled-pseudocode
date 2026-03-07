bool __fastcall W32PIDLOCK::bIsLocked(W32PIDLOCK *this)
{
  bool v2; // bl

  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 5) + 64LL), UserRequest, 0, 0, 0LL);
  v2 = *(_DWORD *)this == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
  KeReleaseMutex((PRKMUTEX)(*((_QWORD *)this + 5) + 64LL), 0);
  return v2;
}
