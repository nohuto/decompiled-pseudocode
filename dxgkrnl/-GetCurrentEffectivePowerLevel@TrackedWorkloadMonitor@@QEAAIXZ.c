/*
 * XREFs of ?GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1C0088128
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel(TrackedWorkloadMonitor *this)
{
  return *((unsigned int *)this + 10 * *((unsigned int *)this + 56) + 13);
}
