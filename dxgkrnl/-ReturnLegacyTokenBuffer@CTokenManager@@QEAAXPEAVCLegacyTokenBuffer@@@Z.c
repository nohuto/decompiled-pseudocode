void __fastcall CTokenManager::ReturnLegacyTokenBuffer(CTokenManager *this, CLegacyTokenBuffer *P)
{
  CLegacyTokenBuffer **v4; // rax
  __int64 v5; // rdx

  CLegacyTokenBuffer::Reset(P);
  if ( *((_DWORD *)this + 46) > 3u )
  {
    if ( P )
      CLegacyTokenBuffer::`scalar deleting destructor'(P);
  }
  else
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v4 = (CLegacyTokenBuffer **)((char *)this + 168);
    v5 = *((_QWORD *)this + 21);
    if ( *(CTokenManager **)(v5 + 8) != (CTokenManager *)((char *)this + 168) )
      __fastfail(3u);
    *(_QWORD *)P = v5;
    *((_QWORD *)P + 1) = v4;
    *(_QWORD *)(v5 + 8) = P;
    *v4 = P;
    ++*((_DWORD *)this + 46);
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
}
