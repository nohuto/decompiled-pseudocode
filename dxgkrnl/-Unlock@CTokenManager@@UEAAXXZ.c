void __fastcall CTokenManager::Unlock(CTokenManager *this)
{
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
