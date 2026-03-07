__int64 __fastcall NtUserGetRequiredCursorSizes(__int64 a1, volatile void *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 CurrentProcessWow64Process; // rax
  CCursorSizes *v9; // rcx

  EnterCrit(0LL, 0LL);
  v4 = HMValidateHandle(a1, 3u);
  v6 = v4;
  v7 = 0;
  if ( v4 && *(_QWORD *)(v4 + 48) == v4 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5);
    ProbeForWrite(a2, 0x28uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    CCursorSizes::HandleRequestCursorSizesRequest(v9, (struct tagCURSORSIZEINFO *)a2);
    *(_DWORD *)(v6 + 80) |= 0x4000u;
    v7 = 1;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
