__int64 __fastcall NtUserSetSensorPresence(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  if ( PsGetCurrentProcess(v3, v2, v4) == gpepCSRSS )
    (*(void (__fastcall **)(PVOID, _QWORD))(*(_QWORD *)P + 40LL))(P, a1);
  else
    UserSetLastError(5);
  UserSessionSwitchLeaveCrit(v5);
  return 1LL;
}
