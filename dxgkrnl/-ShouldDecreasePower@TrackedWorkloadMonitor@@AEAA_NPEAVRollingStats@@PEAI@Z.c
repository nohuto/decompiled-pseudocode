char __fastcall TrackedWorkloadMonitor::ShouldDecreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  char *v5; // rax
  unsigned int v7; // r9d
  __int64 v8; // rax
  const struct TrackedWorkloadStateInfo *v9; // rbp
  double SafeStdDev; // xmm0_8
  double v11; // xmm5_8
  unsigned int PowerLevel; // eax

  v5 = (char *)this + 24;
  v7 = 0;
  while ( !v5[36] || *(_DWORD *)v5 != 4 )
  {
    ++v7;
    v5 += 40;
    if ( v7 >= 5 )
    {
      v8 = *((unsigned int *)this + 56);
      v9 = (TrackedWorkloadMonitor *)((char *)this + 40 * v8 + 24);
      SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev((TrackedWorkloadMonitor *)(5 * v8), a2);
      RollingStats::Update(a2);
      if ( (double)*((int *)this + 3) > SafeStdDev + *((double *)a2 + 4) )
      {
        RollingStats::Update(a2);
        PowerLevel = TrackedWorkloadMonitor::GetPowerLevel(this, *((double *)a2 + 4), v11 - SafeStdDev, v9);
        if ( PowerLevel < *((_DWORD *)v9 + 6) )
        {
          *a3 = PowerLevel;
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}
