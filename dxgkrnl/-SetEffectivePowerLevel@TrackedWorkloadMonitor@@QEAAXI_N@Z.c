/*
 * XREFs of ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1C00884C4
 * Callers:
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C0359510 (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TrackedWorkloadMonitor::SetEffectivePowerLevel(TrackedWorkloadMonitor *this, int a2, char a3)
{
  __int64 v3; // r9

  v3 = 5LL * *((unsigned int *)this + 56);
  *((_DWORD *)this + 2 * v3 + 13) = a2;
  *((_BYTE *)this + 8 * v3 + 61) = a3;
}
