/*
 * XREFs of ?TryReadDWord@MonitorDataStore@DxgMonitor@@UEBA_NPEAXPEBGAEAK@Z @ 0x1C03CA6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z @ 0x1C01D1D10 (--$TryReadData@K@MonitorDataStore@DxgMonitor@@AEBA_NPEAXPEBGAEAK@Z.c)
 */

char __fastcall DxgMonitor::MonitorDataStore::TryReadDWord(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  return DxgMonitor::MonitorDataStore::TryReadData<unsigned long>((__int64)this, a2, a3, a4);
}
