void __fastcall TrackedWorkloadMonitor::SetEffectivePowerLevel(TrackedWorkloadMonitor *this, int a2, char a3)
{
  __int64 v3; // r9

  v3 = 5LL * *((unsigned int *)this + 56);
  *((_DWORD *)this + 2 * v3 + 13) = a2;
  *((_BYTE *)this + 8 * v3 + 61) = a3;
}
