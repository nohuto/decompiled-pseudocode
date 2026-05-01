/*
 * XREFs of ?RmpMemoryMonitorSetTimerIfEnabled@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003E6E0
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003DFB0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x18003DC30 (-RmpMemoryMonitorSetTimer@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_MEMORY_MONITOR_PERIODIC_TIMER_S.c)
 *     ?RmpMemoryMonitorGetIdealTimerState@@YA?AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_STATE@@@Z @ 0x18003DDA4 (-RmpMemoryMonitorGetIdealTimerState@@YA-AW4_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE@@T_RM_SYSTEM_.c)
 */

__int64 __fastcall RmpMemoryMonitorSetTimerIfEnabled(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  __int64 *v3; // r9

  result = RmpMemoryMonitorGetIdealTimerState(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 656LL));
  if ( (_DWORD)result )
    return RmpMemoryMonitorSetTimer(v3, result, v2);
  return result;
}
