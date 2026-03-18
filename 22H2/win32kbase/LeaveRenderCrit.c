/*
 * XREFs of LeaveRenderCrit @ 0x1C0060040
 * Callers:
 *     SetSysColor @ 0x1C005FA7C (SetSysColor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveRenderCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v4 + 16));
  return PsLeavePriorityRegion();
}
