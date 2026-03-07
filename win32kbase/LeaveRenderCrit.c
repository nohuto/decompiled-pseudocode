__int64 __fastcall LeaveRenderCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v4 + 16));
  return PsLeavePriorityRegion(v6, v5);
}
