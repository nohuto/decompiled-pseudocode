__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // edx
  ULONG64 v5; // rcx

  v2 = EnterSharedCrit();
  v3 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v2 + 424)) )
  {
    v3 = 1;
    v4 = (unsigned __int8)RunForegroundAccessCheck(0LL, 1LL);
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_DWORD *)MmUserProbeAddress;
    *a1 = v4;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v3;
}
