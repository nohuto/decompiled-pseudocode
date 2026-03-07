__int64 __fastcall _UnregisterHotKey(struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    if ( *(_QWORD *)(SGDGetUserSessionState(v2) + 13784) )
      *(_QWORD *)(SGDGetUserSessionState(v3) + 13784) = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419);
    return 0LL;
  }
}
