__int64 __fastcall DitTakeOver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  v1 = SGDGetUserSessionState(a1);
  if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v1 + 16840)) < 0 )
    return 0LL;
  v3 = SGDGetUserSessionState(v2);
  if ( (int)CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v3 + 16840), gpIOCPDispatcher) < 0 )
    return 0LL;
  EtwTraceDitEngaged();
  return 1LL;
}
