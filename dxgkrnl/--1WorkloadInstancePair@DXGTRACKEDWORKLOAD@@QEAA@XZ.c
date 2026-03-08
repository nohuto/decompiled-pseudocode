/*
 * XREFs of ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1C0058E90
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x1C03593A4 (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair(
        DXGTRACKEDWORKLOAD::WorkloadInstancePair *this)
{
  MonitoredFenceHelper::DestroySynchObject((DXGTRACKEDWORKLOAD::WorkloadInstancePair *)((char *)this + 56));
}
