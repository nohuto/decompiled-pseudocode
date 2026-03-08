/*
 * XREFs of ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z @ 0x1C0088140
 * Callers:
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C00884E0 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C00885AC (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TrackedWorkloadMonitor::GetPowerLevel(
        TrackedWorkloadMonitor *this,
        double a2,
        double a3,
        const struct TrackedWorkloadStateInfo *a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 result; // rax

  v5 = *((_DWORD *)a4 + 6);
  v6 = (int)(a2 / a3 * (double)*((int *)a4 + 7) + 0.5);
  if ( v6 < v5 )
    v6 = (v5 + v6) >> 1;
  v7 = *((_DWORD *)this + 5);
  if ( v6 <= v7 )
    v7 = v6;
  result = *((unsigned int *)this + 4);
  if ( v7 >= (unsigned int)result )
    return v7;
  return result;
}
