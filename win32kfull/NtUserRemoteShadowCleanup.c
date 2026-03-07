__int64 __fastcall NtUserRemoteShadowCleanup(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  unsigned int v4; // ebx
  __int64 v5; // rcx

  v2 = Size;
  EnterCrit(0LL, 0LL);
  v4 = RemoteShadowCleanup(Src, v2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
