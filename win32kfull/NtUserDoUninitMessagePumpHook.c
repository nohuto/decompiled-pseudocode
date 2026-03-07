__int64 NtUserDoUninitMessagePumpHook()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  int v2; // eax

  EnterCrit(0LL, 0LL);
  v0 = 0LL;
  v1 = *(_QWORD *)(gptiCurrent + 448LL);
  v2 = *(_DWORD *)(v1 + 28);
  if ( v2 > 0 )
  {
    v0 = 1LL;
    *(_DWORD *)(v1 + 28) = v2 - 1;
  }
  UserSessionSwitchLeaveCrit(gptiCurrent);
  return v0;
}
