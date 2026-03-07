__int64 __fastcall IsIMMEnabledSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *(_DWORD *)SGDGetUserSessionState(a1, a2, a3, a4) == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
