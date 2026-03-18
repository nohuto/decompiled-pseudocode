/*
 * XREFs of NtUserYieldTask @ 0x1C0200A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxUserYield @ 0x1C01E57EC (xxxUserYield.c)
 */

__int64 NtUserYieldTask()
{
  struct tagTHREADINFO *v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v1 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( *(_QWORD *)(v1 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x400u;
    ForegroundBoost::UpdateProcessPriorityForSpinning(gptiCurrent, v0);
  }
  v2 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
