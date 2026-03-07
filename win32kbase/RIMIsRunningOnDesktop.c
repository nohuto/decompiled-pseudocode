_BOOL8 __fastcall RIMIsRunningOnDesktop(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 28) == 3;
}
