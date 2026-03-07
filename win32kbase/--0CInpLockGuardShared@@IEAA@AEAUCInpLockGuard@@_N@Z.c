CInpLockGuardShared *__fastcall CInpLockGuardShared::CInpLockGuardShared(
        CInpLockGuardShared *this,
        struct CInpLockGuard *a2,
        bool a3)
{
  BOOL v4; // r9d

  *(_QWORD *)this = a2;
  v4 = *((_QWORD *)a2 + 1) == (_QWORD)KeGetCurrentThread();
  *((_DWORD *)this + 2) = v4;
  if ( !v4 )
    CInpLockGuard::LockShared(a2, a3);
  return this;
}
