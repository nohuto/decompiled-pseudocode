__int64 __fastcall EditionProcessForegroundPriorityChanged(PEPROCESS *a1, int a2)
{
  int v3; // ebx
  HANDLE ProcessId; // rax

  if ( a2 )
  {
    v3 = *(_DWORD *)SGDGetUserSessionState(a1);
    if ( (unsigned int)RtlGetActiveConsoleId() == v3 )
    {
      ProcessId = PsGetProcessId(*a1);
      RtlSetConsoleSessionForegroundProcessId(ProcessId);
    }
  }
  return GreDxgkSetProcessStatus(a1, 1LL);
}
