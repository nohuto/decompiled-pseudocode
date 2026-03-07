void __fastcall CTokenManager::AcquireTokenManagerLock(CTokenManager *this)
{
  ExAcquirePushLockExclusiveEx((char *)this + 96, 0LL);
  *((_QWORD *)this + 13) = KeGetCurrentThread();
}
