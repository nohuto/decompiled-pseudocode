__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  result = UserSessionSwitchEnterCrit(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
      return 3223193056LL;
    }
  }
  return result;
}
