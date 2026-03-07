__int64 __fastcall CUserPlaySound::PlaySync(RPC_BINDING_HANDLE *this)
{
  char *v1; // rbx
  unsigned int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = (char *)(this + 1);
  v3 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  if ( *this )
  {
    SGDGetUserSessionState(v4);
    v3 = PlaySoundPostMessage(*this);
  }
  if ( v1 )
  {
    ExReleasePushLockSharedEx(v1, 0LL, v5);
    KeLeaveCriticalRegion();
  }
  return v3;
}
