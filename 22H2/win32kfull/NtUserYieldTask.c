/*
 * XREFs of NtUserYieldTask @ 0x1C0204420
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0038EF0 (-UpdateProcessPriorityForSpinning@PriorityBoost@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxUserYield @ 0x1C01EA5BC (xxxUserYield.c)
 */

__int64 NtUserYieldTask()
{
  struct tagTHREADINFO *v0; // rdx
  __int64 v1; // rcx
  int v2; // ebx
  __int64 v3; // rcx

  EnterCrit(0LL, 1LL);
  ++*(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL);
  v1 = *(_QWORD *)(gptiCurrent + 480LL);
  if ( *(_QWORD *)(v1 + 8) >= 0x64uLL )
  {
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 28LL) |= 0x400u;
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x400u;
    PriorityBoost::UpdateProcessPriorityForSpinning(gptiCurrent, v0);
  }
  v2 = xxxUserYield(gptiCurrent);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
