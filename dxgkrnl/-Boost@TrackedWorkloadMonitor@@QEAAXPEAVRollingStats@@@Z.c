/*
 * XREFs of ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C0088024
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03599A0 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C035A598 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedWorkloadStateInfo@@I@Z @ 0x1C0088068 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedW.c)
 */

void __fastcall TrackedWorkloadMonitor::Boost(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  if ( (unsigned int)(*((_DWORD *)this + 8 * *((unsigned int *)this + 56) + 2 * *((unsigned int *)this + 56) + 6) - 1) > 1 )
    TrackedWorkloadMonitor::ChangeState(this, 7LL, a2);
}
