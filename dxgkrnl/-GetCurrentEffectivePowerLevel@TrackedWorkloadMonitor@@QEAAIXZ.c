__int64 __fastcall TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel(TrackedWorkloadMonitor *this)
{
  return *((unsigned int *)this + 10 * *((unsigned int *)this + 56) + 13);
}
