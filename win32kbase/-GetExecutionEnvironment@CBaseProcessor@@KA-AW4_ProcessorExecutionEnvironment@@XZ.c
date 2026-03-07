__int64 __fastcall CBaseProcessor::GetExecutionEnvironment(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8

  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( !*(_DWORD *)(v6 + 3456) )
    *(_DWORD *)(v6 + 3456) = ApiSetEditionGetExecutionEvironment(v5, v4, v7);
  return *(unsigned int *)(v6 + 3456);
}
