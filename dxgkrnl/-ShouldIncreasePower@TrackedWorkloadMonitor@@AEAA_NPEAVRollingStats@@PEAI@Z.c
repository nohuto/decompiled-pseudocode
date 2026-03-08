/*
 * XREFs of ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C00885AC
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0088258 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z @ 0x1C0088140 (-GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0088188 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@QEAAXXZ @ 0x1C0088654 (-Update@RollingStats@@QEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldIncreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  char *v6; // rbp
  double SafeStdDev; // xmm0_8
  double v8; // xmm5_8
  unsigned int PowerLevel; // eax

  v6 = (char *)this + 40 * *((unsigned int *)this + 56);
  SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev(this, a2);
  RollingStats::Update(a2);
  if ( SafeStdDev + *((double *)a2 + 4) <= (double)*((int *)this + 3) )
    return 0;
  RollingStats::Update(a2);
  PowerLevel = TrackedWorkloadMonitor::GetPowerLevel(
                 this,
                 *((double *)a2 + 4),
                 v8 - SafeStdDev,
                 (const struct TrackedWorkloadStateInfo *)(v6 + 24));
  if ( PowerLevel <= *((_DWORD *)v6 + 12) )
    return 0;
  *a3 = PowerLevel;
  return 1;
}
