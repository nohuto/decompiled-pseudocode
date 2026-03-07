__int64 NtUserReleaseCapture()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxReleaseCapture();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
