void __fastcall TrackedWorkloadMonitor::Boost(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  if ( (unsigned int)(*((_DWORD *)this + 8 * *((unsigned int *)this + 56) + 2 * *((unsigned int *)this + 56) + 6) - 1) > 1 )
    TrackedWorkloadMonitor::ChangeState(this, 7LL, a2);
}
