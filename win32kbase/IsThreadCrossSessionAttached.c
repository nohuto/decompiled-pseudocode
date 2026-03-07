_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( !(unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  v5 = *(_DWORD *)SGDGetUserSessionState(v1, v0, v2, v3);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  return v5 != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess);
}
