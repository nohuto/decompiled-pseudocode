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
