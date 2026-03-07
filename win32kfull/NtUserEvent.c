__int64 __fastcall NtUserEvent(unsigned __int64 Src)
{
  __int64 v2; // rcx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx

  EnterCrit(0LL, 0LL);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v2);
  v4 = 0LL;
  if ( !CurrentProcessWow64Process )
    v4 = 3LL;
  if ( (v4 & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = *(unsigned __int16 *)(Src + 6);
  v6 = PsGetCurrentProcessWow64Process(MmUserProbeAddress);
  ProbeForRead((volatile void *)(Src + 8), v5, v6 != 0 ? 1 : 4);
  v7 = xxxCsEvent((void *)Src, v5);
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
