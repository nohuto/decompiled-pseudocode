/*
 * XREFs of ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1800583A8
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180058460 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1803A6320 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x180057210 (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedByCortana(XamlLauncherState *this, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  int CpuCyclesUsedByWindow; // eax
  HWND v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 11);
  v7 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 416LL))(v4, &v7);
  if ( (int)result >= 0 )
  {
    CpuCyclesUsedByWindow = QueryCpuCyclesUsedByWindow(v7, a2);
    if ( CpuCyclesUsedByWindow < 0 )
      return (unsigned int)CpuCyclesUsedByWindow;
    return v2;
  }
  return result;
}
