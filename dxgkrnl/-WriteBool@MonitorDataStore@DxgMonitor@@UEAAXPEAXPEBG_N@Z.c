/*
 * XREFs of ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXPEAXPEBG_N@Z @ 0x1C03CA740
 * Callers:
 *     <none>
 * Callees:
 *     ??$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z @ 0x1C03CA404 (--$WriteData@K@MonitorDataStore@DxgMonitor@@AEAAXPEAXPEBGK@Z.c)
 */

void __fastcall DxgMonitor::MonitorDataStore::WriteBool(
        DxgMonitor::MonitorDataStore *this,
        void *a2,
        const unsigned __int16 *a3,
        unsigned __int8 a4)
{
  DxgMonitor::MonitorDataStore::WriteData<unsigned long>((__int64)this, a2, a3, a4);
}
