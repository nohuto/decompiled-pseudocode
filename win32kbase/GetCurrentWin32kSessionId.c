__int64 __fastcall GetCurrentWin32kSessionId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(unsigned int *)SGDGetUserSessionState(a1, a2, a3, a4);
}
